#include<stdio.h>

void main(){
int i, j;
int num;
float temp, capacity;
float weight[10], profit[10], ratio[10], x[10];

// input no. of items, capacity and wts,profits of objects
printf("\nEnter the no. of objects:- ");
scanf("%d", &num);

printf("\nEnter the wts and profits of each object:- ");
for (i = 0; i < num; i++){
      scanf("%f %f", &weight[i], &profit[i]);
}

printf("\nEnter the capacity of knapsack:- ");
scanf("%f", &capacity);



// computes ratio array
for (i = 0; i < num; i++) {
      ratio[i] = profit[i] / weight[i];
}


// sorting ratio, profit and weight array in
// desending order
for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (ratio[i] < ratio[j]) {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;

            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;

            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
}


float u = capacity;
float tp = 0;
// intializing selection matrix to 0
for (i = 0; i < num; i++)
      x[i] = 0.0;


// selects full items based on knapsack capacity
for (i = 0; i <num; i++) {
      // exit for loop if capacity is less
      if (weight[i] > capacity)
         break;
      else {
      // add item and calculate total weight and total profit
         x[i] = 1.0;
         tp = tp + profit[i];
         capacity = capacity - weight[i];
      }
   }


// if knapsack capacity is less, add fraction of item
if (i < num)
      x[i] = capacity / weight[i];
      tp = tp + (x[i] * profit[i]);


// display selection matrix and total profit earned
printf("\nThe result vector is:- ");
for (i = 0; i < num; i++)
     printf("%f\t", x[i]);

printf("\nMaximum profit is:- %f", tp);

}
