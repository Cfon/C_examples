#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

// cmd> gcc a.c -o a && .\a

int main()
{ 
  setlocale(LC_ALL, "russian");

  wchar_t *wcstr = L"Привет мир!";
  size_t len = wcslen(wcstr) * sizeof(wcstr[0]);  
  
  char *mbstr = (char *) malloc(len + 1);
  
  // convert wchar_t string to utf8 string
  int ret = wcstombs(mbstr, wcstr, len + 1); 

  printf("Characters converted = %d\n", ret);
  printf("Multibyte character = %s\n", mbstr);
  printf("Символы: %d\n", wcslen(wcstr));
  printf("%c\n", mbstr[0]);
  
  // printf("Converting back to Wide-Character string\n");
  // wchar_t *pwcs = (wchar_t *)malloc( sizeof( wchar_t ));
  // int len = mbstowcs(pwcs, mbstr, 50);
  // printf("Characters converted %d\n", len);
  // printf("Hex value of first wide character %#.4x\n", pwcs);   
  
  free(mbstr);
  // free(pwcs);

  // wchar_t mychar;
  // mychar = 'ы';

  // printf("%d\n", mychar);
}
