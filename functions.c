
// void swap(char *, char *);
// int len(char *);


void swap(char *a, char *b)
{
  char c;
  c = *a;
  *a = *b;
  *b =c ;
}

int len(char *s)
{
  int i = 0;  
  while (s[i] != '\0') 
    i++;
  return i;
}