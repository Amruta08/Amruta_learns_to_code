#include<stdio.h>
void main(){
    int n, m;
    int i,j,k;
    float arr[10], arr1[10], arr2[10];
    float a[10];
    float temp;

    // items
    printf("ent no. of items\n");
    scanf("%d",&n);
    printf("\n");

    // capacity
    printf("Enter capacity\n");
    scanf("%d", &m);
    printf("\n");

    // profits
    printf("\nEnter profits\n");
    for(i=0; i<n; i++){
        scanf("%f", &arr[i]);
    }
    printf("\n");

    // weights
    printf("\nEnter weights\n");
    for(i=0; i<n; i++){
        scanf("%f", &arr1[i]);
    }
    printf("\n");

    printf("\n Profits:");
    for(i=0; i<n; i++){
        printf("%.1f ", arr[i]);
    }
    printf("\n");

    printf("\n Weights:");
    for(i=0; i<n; i++){
        printf("%.1f ", arr1[i]);
    }
    printf("\n");

    // ratio
    for(i=0; i<n; i++){
        a[i] = arr[i]/arr1[i];
    }
    printf("\n");

    printf("\n ratio:");
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if (a[i] < a[j]) {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;

            temp = arr1[j];
            arr1[j] = arr1[i];
            arr1[i] = temp;

            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
         }

        }
    }

    printf("\n ratio in sorted order:");
    for(i=0; i<n; i++){
        arr2[i] = a[i];
        printf("%.1f ", arr2[i]);
    }
    printf("\n");



}
