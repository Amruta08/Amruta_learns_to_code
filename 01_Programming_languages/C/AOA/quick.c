#include <stdio.h>
#define MAX 100

int partition(int a[], int low, int up);
void quicksort(int a[], int low, int up);

int main()
{
    /************************************************** DECLARE VARIABLES **********************************************************************/
    int a[MAX];
    int min;
    int temp;
    int i, j, n,k;
    /************************************************** ENTER NO. OF ARRAY ELEMENTS ************************************************************/
    printf("Enter number of elements: ");
    scanf("%d", &n);
    /************************************************** TAKE ARRAY ELEMENTS FROM USER **********************************************************/
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    /************************************************** DISPLAY ARRAY BEFORE SORTING ***********************************************************/
    printf("Array before sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    /************************************************** QUICKSORT ****************************************************************************/
    quicksort(a,0,n-1);

    /************************************************** DISPLAY ARRAY AFTER SORTING ********************************************************/
    printf("Array after sorting : ");
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


void quicksort(int a[], int low, int up){
    int p;
    if (low>=up)
        return;
    p = partition(a,low,up);
    quicksort(a,low,p-1);
    quicksort(a,p+1,up);
    }

int partition(int a[], int low, int up){

    // Declare
    int temp, i, j, pivot;
    pivot = a[low];

    // intialize i and j
    i = low+1;  // Here, i Moves from left to right in array
    j = up;     // Here, j Moves from right to left in array

    while (i <= j)
    {
        while(a[i]<pivot && i<up)
            i++;

        while(a[j]>pivot)
            j--;

        if (i<j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }else
            break;
    }

    a[low] = a[j];
    a[j] = pivot;
    return j;

}
