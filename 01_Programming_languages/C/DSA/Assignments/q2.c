#include <stdio.h>
void insertion(int ar[10], int n, int num, int pos);
void deletion(int ar[10], int n, int pos);
void traversal(int ar[10], int n);
void searching(int ar[10], int n, int num);
void sorting(int n, int ar[10]);
void merging(int ar[10], int n);

int main()
{

    int n;
    int num, pos;
    printf("enter number of array elements : ");
    scanf("%d", &n);
    printf("\n");
    int ar[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter element %d : ", i + 1);
        scanf("%d", &ar[i]);
    }

    int choice;
    printf("enter a choice\n1 for insertion\n2 for deletion\n3 for traversal\n4 for searching \n5 for sorting \n6 for merging");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("enter number and position:");
        scanf("%d %d", &num, &pos);

        printf("Array after insertion");
        insertion(ar, n, num, pos);
        break;
    case 2:
        printf("enter position:");
        scanf("%d", &pos);
        printf("\n");
        printf("Array after deletion");
        deletion(ar, n, pos);
        break;
    case 3:
        printf("Array after traversal\n");
        traversal(ar, n);
        break;
    case 4:
        printf("enter number");
        scanf("%d", &num);
        printf("\n");
        searching( ar,  n,  num);
        break;
    case 5:
        printf("\n");
        printf("Array after sorting");
        sorting(n, ar);
        break;
    case 6:
        printf("\n");
        merging(ar, n);
        break;
    default:
        printf("enter valid choice");
    }

    return 0 ;
}

void insertion(int ar[10], int n, int num, int pos)
{

    for (int i = n - 1; i >= pos; i--)
    {
        ar[i + 1] = ar[i]; // array elements gets shifted to next cell
    }
    ar[pos] = num; // no. inserted in required position
    n++;
    printf("\n");
    for (int k = 0; k < n; k++)
    {
        printf("%d\n", ar[k]);
    }
}

void deletion(int ar[10], int n, int pos)
{

    for (int i = pos; i <= n - 1; i++)
    {
        ar[i] = ar[i + 1]; //array elements gets shifted to previous cell
    }
    n--;

    printf("\n");
    for (int k = 0; k < n; k++)
    {
        printf("%d\n", ar[k]);
    }
}

void traversal(int ar[10], int n)
{
    for (int k = 0; k < n; k++)
    {
        printf("%d\n", ar[k]);
    }
}

void searching(int ar[10], int n, int num)
{
    int found = 0;
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == num)
        {
            found = 1;
            int pos = i;
            printf("%d is found at %d\n", num, pos);
            break;
        }
    }

    if (found == 0)
    {
        printf("\nnot found :(");
    }
}

void sorting(int n, int ar[10])
{
    int temp;
    for (int i = 0; i < n - 1; i++) // no. of passes
    {
        for (int j = 0; j < n - i - 1; j++) // no. of comparisions
        {
            if (ar[j + 1] < ar[j])
            {
                temp = ar[j + 1];
                ar[j + 1] = ar[j];
                ar[j] = temp;
            }
        }
    }

    printf("\n");
    for (int k = 0; k < n; k++)
    {
        printf("%d\n", ar[k]);
    }
}

void merging(int ar[10], int n)
{

    int n1;

    printf("enter no of elements elements of another array\n");
    scanf("%d", &n1);
    int arr1[n1];

    for (int i = 0; i < n1; i++)
    {
        printf("enter elements \n");
        scanf("%d", &arr1[i]);
    }

    int index = 0;
    int n2 = n + n1;
    int arr[n2];

    for (int i = 0; i < n1; i++)
    {
        arr[index] = arr1[i];
        index++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[index] = ar[i];
        index++;
    }

    printf("\n");
    for (int i = 0; i < n2; i++)
    {
        printf("%d\n", arr[i]);
    }
}