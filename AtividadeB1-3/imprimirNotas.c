#include <stdio.h>

//percorre o array e imprime cada elemento
void print_array(int *arr, int len){
  for(int i = 0; i < len; i++){
    printf("%d ", *(arr + i));
  }
  printf("\n");
}
