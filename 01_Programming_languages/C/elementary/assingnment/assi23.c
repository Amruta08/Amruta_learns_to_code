#include<stdio.h>

void main()
{
    int r , s , c , n  , k=1;

    printf("enter:");
    scanf("%d" ,&n);

    for ( r = 1; r <=n; r++)
    {
      for ( s = 1; s <=n-r; s++)
      {
          printf(" ");
      }

    for ( c = 1; c <= r; c++)
      {
          printf("%d ",k);
          k++;
      }
      printf("\n");
}
    
}