#include <stdio.h>
#include <windows.h>

struct person {
  char names[20];
  char depname[15];
  int depnumb;
  int price;
  int job;
  char jobname[15];
  char date[10];
  struct person *prior;
  struct person *next;
} st[100];

const int M = 100;

struct control {
  int nb;
  int nf;
  struct person *bbeg;
  struct person *bend;
  struct person *fbeg;
  struct person *fend;
} ctrl;

int init();
int input();
int delete();
struct person *find(char *name);
int fr(struct person *ptr);
int print();
int save();
int load();

// cmd> gcc example.c -o example && .\example
// PS> gcc example.c -o example; .\example

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  char numb[10];

  while(1) {
    printf("1. Ввод сведений о новом струднике\n");
    printf("2. Удаление сведений о сотруднике\n");
    printf("3. Печать содержимого базы данных\n");
    printf("4. Сохранение базы данных в файле\n");
    printf("5. Загрузка базы даных из файла\n");
    printf("6. Инициализация базы данных\n");
    printf("7. Окончание работы\n");
    printf("\n\nВведите номер пункта меню\n");
    scanf("%s", &numb);
    switch (numb[0])
    {
    case '1':
      input();
      break;
    case '2':
      delete();
      break;
    case '3':
      print();
      break;
    case '4':
      save();
      break;
    case '5':
      load();
      break;
    case '6':
      init();
      break;
    case '7':
      return 0;
    default:
      printf("Неверно указан номер пункта меню\n");
    }
  }

  return 0;
}

int init()
{
  printf("init\n");
}

int input()
{
  printf("input\n");
}

int delete()
{
  printf("delete\n");
}

struct person *find(char *name)
{
  printf("find\n");
}

int fr(struct person *ptr)
{
  printf("fr\n");
}

int print()
{
  printf("print\n");
}

int save()
{
  printf("save\n");
}

int load()
{
  printf("load\n");
}
