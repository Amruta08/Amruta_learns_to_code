#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10] , s2[10] ; 
    int n1 , n2 , v , c ;

    printf("enter 2 strings");
    scanf("%s %s" , s1 , s2);

    // returns length of string
    n1 = strlen(s1);
    n2 = strlen(s2);
    printf("\nlength of string s1 and s2 is ");
    printf("\n%d %d" , n1 , n2);

    //compares 2 strings
    v = strcmp(s1,s2);
    if (v=0)
    {
        printf("\ns1=s2");
    }
    else if (v>0)
    {
        printf("\ns1<s2");
    }
    else
    {
        printf("\ns1>s2");
    }
    
    // adds one string into the end of another string
    printf("\nThe append of s2 to s1 is");
    strcat(s1,s2);
    printf("\nconcatenation is: %s \n",s1);

   // copies one string to another string
    strcpy(s1,s2);
    printf("\ncopied value is: %s\n",s1);

    return 0;
}
