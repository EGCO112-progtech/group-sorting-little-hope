#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, *a, n, j = 0;
  n = argc - 1;
  a = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++) {
    a[i] = atoi(argv[i + 1]);
  }

  display(a, n);
  bubbleSort(a, n);
  // insertion(a,n);

  // selectionSort(a,n);
  display(a, n);
  return 0;
}
