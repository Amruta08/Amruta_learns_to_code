#include <stdio.h>
#include<math.h>
#define MAX 100
int a[MAX];

void Mergesort(int a[],int low,int high);
void Combine(int a[],int low, int mid,int high);

int main()
{
    /************************************************** DECLARE VARIABLES **********************************************************************/
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
    Mergesort(a,0,n-1);

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

void Mergesort(int a[],int low, int high){

    if (low != high) {
    int mid = floor((low+high)/2);
    Mergesort(a, low, mid);
    Mergesort(a, mid+1, high);
    Combine(a,low,mid,high);
}

}
    

void Combine(int a[],int low, int mid,int high){
    int temp[MAX];
    int i = low;
    int j = mid+1;
    int k = low;

    while((i<=mid) && (j<=high)){
    if(a[i] <= a[j]){
        temp[k++] = a[i++];
    }else{
        temp[k++] = a[j++];
    }
 }

while (i<=mid)
{
    temp[k++] = a[i++];
}

while (j<=high)
{
    temp[k++] = a[j++];
}

for ( i = low; i <= high; i++)
{
    a[i] = temp[i];
}


    

}