#include <stdio.h>
int main()
{
    /************************************************** DECLARE VARIABLES **********************************************************************/
    int a[10];
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

    printf("Array after sorting : ");
    printf("\n");

    /************************************************** FOR LOOP FOR PASSES *******************************************************************/
    
    // For ( i=1; i<n; i++)  --> Passes

    for (i = 1; i < n; i++)
    {

    // temp = a[i]   --> Pick element at ith position
    // j = i-1 

    temp = a[i];
    j = i-1;
    
    // --> Comparing & Shifting element at required position
    // While( temp < a[j] && j >=0 )
    // a[j+1] = a[j]
    // j-- 

    while ( temp<a[j] && j>=0 )
    {
        a[j+1] = a[j];
        j--;
    }
    
    // a[j+1] = temp  --> Insert element at required position

    a[j+1] = temp;

    /************************************************** DISPLAY ARRAY AFTER EACH PASS ********************************************************/    printf("pass %d: ", i);
        for (k = 0; k < n; k++)
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
        
}

