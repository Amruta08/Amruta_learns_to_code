#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

 /*************************************************************************************/
int parti(int ar[], int low, int high) {
  int pivot = ar[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (ar[j] <= pivot) {
      i++;
      swap(&ar[i], &ar[j]);
    }
  }
  swap(&ar[i + 1], &ar[high]);
  return (i + 1);
}

 /*************************************************************************************/
void qS(int ar[], int low, int high) {
  if (low < high) {
    
    int pi = parti(ar, low, high);
    qS(ar, low, pi - 1);
    qS(ar, pi + 1, high);

  }
}

 /*************************************************************************************/
void printAr(int ar[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", ar[i]);
  }
  printf("\n");
}

 /*************************************************************************************/
int main() {
  int data[] = {864, 743, 241, 142, 208, 419, 645};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Array before\n");
  printAr(data, n);
  
  qS(data, 0, n - 1);
  
  printf("array after\n");
  printAr(data, n);
}