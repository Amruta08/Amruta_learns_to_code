#include<stdio.h>

int main()
{ int n;
  printf("Enter number: ");
  scanf("%d", &n);
  n%5 == 0 && n%11 == 0?printf("number is divisible by 5 and 11"):printf("number is not divisible by 5 and 11");
  return 0;
}