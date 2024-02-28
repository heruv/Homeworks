#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

int min(int* arrptr) {
  int epsilon = INT_MAX;

  for (int i = 0; i < 21; i++) {
    int arr = *(arrptr);

    if (epsilon>arr) {
      epsilon = arr;
    }

    arrptr++;
  }

  printf("the smalest number: %d\n", epsilon);
  return epsilon;
}

int main() {
  srand(time(NULL));

  int arr[21];

  for (int i = 0; i < 21; i++) {
    arr[i] = -100 + rand() % 200;
  }

  int* ptr = arr;

  min(ptr);

  return 0;
}
