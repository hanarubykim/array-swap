#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int ARR_SIZE = 10;
  int arr1[ARR_SIZE];

  srand(time(NULL));

  for (int i = 0; i < 10; i++){
    arr1[i] = rand();
  }

  arr1[9] = 0;

  printf("First array here... \n");
  for (int i = 0; i < 10; i++) {
    if(i != 9) printf("%d, ", arr1[i]);
    else printf("%d\n\n", arr1[i]);
  }


  int arr2[ARR_SIZE];
  int *a = arr1; // orig = uno
  int *b = arr2;// new = dos

  for (int i = 0; i < 10; i++){
    *(b + i) = *(a + 9 - i);
  }

  printf("Second array here... \n");
  for (int i = 0; i < 10; i++) {
    if(i != 9) printf("%d, ", arr1[i]);
    else printf("%d\n\n", arr1[i]);
  }

}
