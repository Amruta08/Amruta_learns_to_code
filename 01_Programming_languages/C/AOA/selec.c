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
    // For ( i=1; i<=n-1; i++)  --> Passes
    for (i=1; i<=n-1; i++)
    {
        min = i-1; // (i-1) th element can also be minimum

        // For ( j=1; j<=n-1; j++)   -->  Min element pos.
        // (min)
    /********************************* FOR LOOP FOR FINDING MINIMUM AND COMPARING WITH 1ST ELEMENT ********************************************/
        for (j=i; j<= n-1; j++)
        {
            // Comparing with (i-1)th element and finding minimum
            if (a[j] < a[min])
            {
                min = j;
            }
        }
   /*********************************************** SWAPPING WITH (i-1)th ELEMENT ************************************************************/
        // Swapping
        temp = a[i - 1];
        a[i - 1] = a[min];
        a[min] = temp;

    /************************************************** DISPLAY ARRAY AFTER EACH PASS ********************************************************/    printf("pass %d: ", i);
        for (k = 0; k < n; k++)
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
}

// Passes – 1 for loop
// Finding min – 1 for loop
// Swapping – no for loop
