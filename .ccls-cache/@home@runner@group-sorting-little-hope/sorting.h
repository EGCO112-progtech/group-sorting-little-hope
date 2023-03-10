// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  for (i = 0; i < n - 1; i++) {
    // printf("ROUND %d\n",i);
    for (j = 0; j < n - 1 - i; j++) {
      if (a[j] < a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    printf("\n");
    if (sorted == 0)
      break;
  }
}

void selectionSort(int a[], int n) {
  int i, j;
  int m = a[0];
  int mi = 0; //ตัวเก็บค่าตน.น้อยสุด

  for (j = 0; j < n - 1; j++) {
    m = a[j];
    mi = j;

    for (i = j + 1; i < n; i++) {
      if (m < a[i]) {
        m = a[i];
        mi = i;
      }
    }

    swap(&a[j], &a[mi]);

    // printf("Minimum is %d\n",m);
    display(a, n);
    printf("\n");
  }
  printf("\n");
  display(a, n);
}

void insertionSort(int x[], int n) {

  int j, i;
  for (j = 1; j < n; j++) {
    int value = x[j];
    for (i = j - 1; i >= 0 && x[i] < value; i--) {
      x[i + 1] = x[i];
      display(x, n);
    }
    x[i + 1] = value;
    display(x, n);
    printf("\n");
  }
  printf("\n");
  display(x, n);
}
