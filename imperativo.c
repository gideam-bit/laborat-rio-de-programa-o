#include <stdio.h>
#include <string.h>

int main () { 
  char string[100]

  printf("digite uma string: ");
  fgets(string, sizeof(string), string");

  printf("A string digitada foi: %s", string);

  int tamanho = strlen(string);
  printf("O tamanho da string e: %d\n", tamanho);

  printf("A string ao contrario e: ");
  for (int i = tamanho -1; i>=0; i--) {
    printf("%c", string[i]);
  }

  return 0;
}
