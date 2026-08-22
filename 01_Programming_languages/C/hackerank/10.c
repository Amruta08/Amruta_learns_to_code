#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int c , d , e;
  int sum = 0 , sum1 = 0, sum2 = 0;

  for (int i = 1; i <= n; i++)
  {
     for (int j = i+1; j <= n; j++)
     {
         if ((i&j) < k)
         {
            c = (i&j);
             if(sum<c){
                 sum = c;
             }
         }
        
        if ((i|j) < k)
         {
            d = (i|j);
             if(sum1<d){
                 sum1 = d;
             }
         }
        
        if ((i^j) < k)
         {
            e = (i^j);
             if(sum2<e){
                 sum2 = e;
             }
         }
         
     }
     
  }
  printf("%d\n",sum);
  printf("%d\n",sum1);
  printf("%d\n",sum2);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
