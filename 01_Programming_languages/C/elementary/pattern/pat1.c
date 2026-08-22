#include<stdio.h>
int main()
{
    int n , r , c ;
    int c1 , c2 ;
    int s ;
    printf("enter n:");
    scanf("%d", &n);
    /*
    for (r = 1; r <= n ; r++)
    {
        for ( c = 1; c <= r ; c++)
        {
           //printf("*");
           //printf("%d", c ) ;
           //printf("%d", r ) ;
        }
        printf("\n");
    }
    */

   // using k

   //int k ;
   //char k ;
   //k = 1 ;
  // k = 'A' ;

  /*
   for (r = 1; r <= n ; r++)
    {
        //k = 1;
        //k=(r%2==0)?0:1;
        //k = 'A' ;
        for ( c = 1; c <= r ; c++)
        {
          
          //printf("%d",k);
          //printf("%d", k++);

          
          //printf("%d",k);
          //k=(k==0)?1:0;
          
          
          //printf("%c" , k++) ;
          //printf("%c" , k++) ;

        }
        printf("\n");
        //k++;
    } 
 */  

   /*'
  for (r = n; r >= 1 ; r--)
    {
        for( c = 1; c <= r ; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    */

/*
for (r = 1; r <= n ; r++)
    {
        for ( c = 1; c <= r ; c++)
        {
           printf("*");
        }
        printf("\n");
    }
for (r = n-1; r >= 1 ; r--)
    {
        for( c = 1; c <= r ; c++)
        {
            printf("*");
        }
        printf("\n");
    }
*/

//for ( r = 1; r <= n; r++)
//for ( r = n; r >= 1; r--)
/*
 {
     for ( s = 1; s <= n-r; s++)
     {
         printf(" ");
     }
     for ( c = 1 ; c <= r ; c++)
     {
         printf("*");
     }
    printf("\n");     
 }
 */
 /*
 for ( r = n-1; r >= 1; r--)
 {
     for ( s = 1; s <= n-r; s++)
     {
         printf(" ");
     }
     for ( c = 1 ; c <= r ; c++)
     {
         printf("*");
     }
    printf("\n");     
 }
 */

for ( r = 1 ; r <= n ; r++)
//for ( r = n ; r >= 1 ; r--)

{
    for ( s = 1; s <= n-r; s++)
    {
        printf(" ");
    }

    for ( c1 = 1 ; c1 <= r ; c1++)
    {
        printf("*");
    }
    
    for ( c2 = 1; c2 <= r-1; c2++)
    {
        printf("*");
    }
    printf("\n");
    
    
}

for ( r = n-1 ; r >= 1 ; r--)

{
    for ( s = 1; s <= n-r; s++)
    {
        printf(" ");
    }

    for ( c1 = 1 ; c1 <= r ; c1++)
    {
        printf("*");
    }
    
    for ( c2 = 1; c2 <= r-1; c2++)
    {
        printf("*");
    }
    printf("\n");
    
    
}

 
return 0 ;



    
}