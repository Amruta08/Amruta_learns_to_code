#include<stdio.h>
#define N 20

int main()
{    
    /*************************************************************************************/
    //array declaration:-
    // data_type name[size];
    int arr[10];
    float ar[N] ;
    char arry[N+N]; 

    /*************************************************************************************/
    //Array name = reference to 1st byte of memory 
    // address of a[i] = base_address + size[i-lower_bound]  
    // eg :- a[4](int) = 1000+2[4-0] 
    //                 = 1008  

    /*************************************************************************************/
    // length = up_bound - lo_bound + 1

    /*************************************************************************************/
    //storing values in arrays
    int a[4]={1,2,3,4};
     
    int i ;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    int j , b[5] ;
    for ( j = 0; j < 5; j++)
    {
        b[j] = j*2;
    }

    /*************************************************************************************/
    /*operations on array */

    /*************************************************************************************/
    //traversing array
    int k ;
    int r[5] = {1,2,3,4,5};
    for ( k = 0; k < 5; k++)
    {
        printf("%d\n" , r[k]);
    }

    /*************************************************************************************/
    //reverse array 

    for(i=n-1;i>=0;i--)
    {
       printf("%d ",marks[i]);
    }
    
    /*************************************************************************************/
    //sum
    sum = sum + marks[i]
    avg = sum/n

    /*************************************************************************************/
    //largest element in array
    for ( i = 0; i <= n-1 ; i++)
    {
       if (marks[0] < marks[i])
      {
      marks[0] = marks[i] ;
      } 
    }

    /*************************************************************************************/
    //inserting in array
    int n , pos , number;             // n = no. of elements in array
                                      // pos = position to be inserted

    for ( i = n-1; i >=pos; i--)  
    {                             
        ar[i+1] = ar[i];             // array elements gets shifted to next cell
    }
    ar[pos] = number ;               // no. inserted in required position
    n++;

    /*************************************************************************************/
    // deleting from array

    for ( i = pos ; i <= n-1; i++)
    {
        ar[i] = ar[i+1];            //array elements gets shifted to previous cell          
    }
    n--;
    
    /*************************************************************************************/
    //merging 2 unsorted arrays
    int index = 0 ;
    for ( i = 0; i < n1; i++)
    {
        arr[index] = arr1[i];
        index++;
    }

    for ( i = 0; i < n2; i++)
    {
        arr[index] = arr2[i];
        index++;
    }

    /*************************************************************************************/
    //linear search
 
    // best case -->  value = 1st element
    // worst case --> value = last element / doesn't exist 

    int found = 0 ;
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
           found = 1;
           pos = i ;
           printf("%d is found at %d\n" , num , pos);
           break;
        }  
    }
    
    if (found==0)
    {
        printf("\nnot found :(");
    }

    /*************************************************************************************/
    //binary search 
    // works best for sorted array

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

    /*************************************************************************************/    
    //bubble sort (simple)

    for ( i = 0; i < n-1; i++)         // no. of passes
    {
        for ( j = 0; j < n-i-1; j++)  // no. of comparisions
        {
            if(a[j+1]<a[j]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
        
    }
    
    /*************************************************************************************/



    
    
                                                                                                      
    

    return 0;
} 