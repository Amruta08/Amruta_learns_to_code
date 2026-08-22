#include<stdio.h>

union names
{
   int age;
   char name[20];
} person ;


int main()
{   printf("enter age: ");
    scanf("%d",&person.age);
    //printf("\nage is %d", person.age);

    printf("\nenter name: ");
    scanf("%s",&person.name);
    printf("\nage is %d", person.age);
    printf("\nname is %s", person.name);


    return 0;
}