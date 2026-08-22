#include <stdio.h>
int main()
{
    int n;
    printf("enter number of array elements : ");
    scanf("%d", &n);
    printf("\n");
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {   
        printf("enter element %d : " , i+1);
        scanf("%d", &arr[i]);
    }

    int a = 0, b = 0, c = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            a++;
        }

        if (arr[i] == 0)
        {
            b++;
        }

        if (arr[i] < 0)
        {
            c++;
        }
    }

    printf("\npositive elements = %d \nzero elements = %d \nnegative elements = %d", a, b, c);

    return 0;
}