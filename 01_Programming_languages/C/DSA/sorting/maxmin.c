#include <stdio.h>
#define N 20
int a[N];

AlgoMaxmin(int i, int j, int MAX, int MIN);
void main()
{
    int i, j, n, temp;
    /*************************************************************************************/
    printf("ent no. of elements\n");
    scanf("%d", &n);
    /*************************************************************************************/
    printf("\nenter elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    /*************************************************************************************/
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    AlgoMaxmin(0, n, a[0], a[0]);
    printf("\n");
}
/*************************************************************************************/

AlgoMaxmin(int i, int j, int MAX, int MIN)
{   int MID,MAX1,MIN1;
    if (i == j)
    {
        MAX = a[i];
        MIN = a[j];
    }
    else if (i == (j - i))
    {
        if (a[i] < a[j])
        {
            MAX = a[j];
            MIN = a[i];
        }
        else
        {
            MAX = a[i];
            MIN = a[j];
        }
    }else{
    MID = (i + j) / 2;
    AlgoMaxmin(i, MID, MAX, MIN);
    AlgoMaxmin(MID + 1, j, MAX1, MIN1);
    if (MAX < MAX1)
    {
        MAX = MAX1;
        printf("%d", MAX);
    }
    if (MIN > MIN1)
    {
        MIN = MIN1;
        
    }
}
}
