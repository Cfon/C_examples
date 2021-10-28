#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

enum types_t { UNDEFINED, OPERATOR, NUMBER };
enum error_t { SYNERROR, PARENS, NOEXP, DIVZERO };

struct parser_t {
  char *exp;
  char tok_name[80];
  enum types_t tok_type;
};

double eval_exp(struct parser_t *parser);
double eval_exp1(struct parser_t *parser);
double eval_exp2(struct parser_t *parser);
double eval_exp3(struct parser_t *parser);
double eval_exp4(struct parser_t *parser);

double atom(struct parser_t *parser);
void get_token(struct parser_t *parser);
void error(enum error_t err_code);
bool isdelim(char c);

int main()
{  
  struct parser_t parser;  
  char exp[80];  
  
  printf("Enter a period to stop.\n");
  
  for(;;) {
    printf("Enter expression: ");
    fgets(exp, 79, stdin);
    
    if (*exp == '.') 
      break;
    
    parser.exp = exp;  
    printf("Answer is %.2lf\n\n", eval_exp(&parser));
  }
}

double eval_exp(struct parser_t *parser)
{
  double result = 0.0;  
  
  get_token(parser);

  if(!*parser->tok_name) {
    error(NOEXP);
    return 0.0;
  }

  result = eval_exp1(parser);

  if (*parser->tok_name) {
    error(SYNERROR);   
  }

  return result;
}

double eval_exp1(struct parser_t *parser)
{    
  /* Обработка операций +,- */
  double result = eval_exp2(parser);
  char op;  

  while ((op = *parser->tok_name) == '+' || op == '-') {
    get_token(parser);
    double temp = eval_exp2(parser);    
    switch (op) {
    case '+':
      result += temp;
      break;
    case '-':
      result -= temp;
      break;
    }
  }  
  return result;
}

double eval_exp2(struct parser_t *parser)
{
  /* Обработка операций *,/,% */
  double result = eval_exp3(parser);
  char op;
  
  while ((op = *parser->tok_name) == '*' || op == '/' || op == '%') {
    get_token(parser);
    double temp = eval_exp3(parser);        
    switch (op) {
      case '*':
        result *= temp;
        break;
      case '/':
        if (temp == 0.0) {
          error(DIVZERO);
          return 0.0;
        }
        result /= temp;
        break;
       case '%':
        result = (int)result % (int)temp;
        break;
    }
  }
  
  return result;
}

double eval_exp3(struct parser_t *parser)
{
  /* обработка возведения в степень */
  double result = eval_exp4(parser);
  char op;
  
  while ((op = *parser->tok_name) == '^') {
    get_token(parser);
    int y = (int)eval_exp4(parser);        
    if (y == 0) {
      result = 1.0;
      break;
    }
    double x = result;
    for (int i = y-1; i > 0; i--) {
      result *= x;
    }
  }  
  
  return result; 
}

double eval_exp4(struct parser_t *parser)
{  
  /* обработка скобок */   
  double result;
  
  if (*parser->tok_name == '(') {
    get_token(parser);   
    result = eval_exp1(parser);
    if (*parser->tok_name != ')') {
      error(PARENS);      
    }
    get_token(parser);
  }  
  else {
    result = atom(parser);   
  }
  return result; 
}

double atom(struct parser_t *parser)
{
  double result = 0.0;  
  switch (parser->tok_type) {  
  case NUMBER:       
    result = atof(parser->tok_name);        
    get_token(parser);    
    break;
  default:     
    result = 0.0;
    error(SYNERROR);
  }  
  return result;
}

void get_token(struct parser_t *parser)
{
  char *temp = parser->tok_name;
  *temp = '\0';
  parser->tok_type = UNDEFINED;

  if (!*parser->exp) return;

  while (isspace(*parser->exp)) {
    parser->exp++;
  }

  if (strchr("+-*/%^=()", *parser->exp)) {    
    parser->tok_type = OPERATOR;
    *temp++ = *parser->exp++;
  }  
  else if (isdigit(*parser->exp)) {
    while (!isdelim(*parser->exp)) {
      *temp++ = *parser->exp++;
    }
    parser->tok_type = NUMBER;      
  }

  *temp = '\0';
}

bool isdelim(char c)
{
  if (strchr(" +-/*%^=()", c) || c=='\t' || c=='\r' || c==0) {
    return true;
  }
  return false;
}

void error(enum error_t err_code)
{
  static const char *message[] = {
    "Syntax Error",
    "Unbalanced Parentheses",
    "No Expression Present",
    "Division by Zero"
  };
  printf("%s\n", message[err_code]);
}
