#include<stdio.h>

int main()
{ int bankbal,witdraw;
  printf("enter bank balance and withdrawal amt");
  scanf("%d %d", &bankbal, &witdraw);
  //bankbal>witdraw?printf("success"):printf("error");
  if (bankbal>witdraw){
      printf("success");
  }else{
      printf("you fool save some money");
  }


    return 0;
}