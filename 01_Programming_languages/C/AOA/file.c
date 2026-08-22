#include<stdio.h>
int main()
{
    int num,beg,end,mid,i,n,arr[20],pos,found=0;
    printf("ent no. of elements\n");
    scanf("%d",&n);

    printf("\nenter elements");
    for ( i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    printf("\nenter no. to be searched\n");
    scanf("%d",&num);

    beg = 0 ;
    end = n-1;
    while (beg<=end)
    {
        mid = (beg+end)/2;
        if(arr[mid]==num){
            found = 1;
            pos = mid;
            printf("\n%d is found at position %d",num,pos);
            break;
        }else if(arr[mid]>num){
            end = mid-1;
        }else{
            beg = mid+1;
        }
    }
    if(found == 0 && beg>end){
        printf("\n%d not found",num);
    }
    return 0;
}
