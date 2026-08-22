#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i , b , vowels = 0 , consonants = 0 ;
    printf("enter a string");
    gets(a);
    b = strlen(a);
    for ( i = 0; i <= b-1; i++)
    {
        if (a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' ||a[i]=='O' ||a[i]=='U')
        {
            vowels++;
        }else
        {
            if ((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            {
                consonants++;
            } 
        }  
    }
    printf("total number of vowels are %d\n",vowels);
    printf("total number of consonants are %d",consonants);
    return 0 ;
}