#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20] ;
    int  i , j , n , flag = 0 ;
    printf("Enter a string ");
    scanf("%s" , s1);
    n = strlen(s1);

    for ( i = 0 ,j = n-1 ; i!=j ; i++ , j--)
    {
        if (s1[i]!=s1[j])
        {
           flag=1; 
        }
        
    }

    if (flag==0)
    {
        printf(" string is palindrome");
    }else{
        printf("string is not palindrome");
    }
    
    return 0 ;
    
}