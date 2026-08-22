#include<stdio.h>
#include<stdlib.h>

/*********************************************** Creating node structure *********************************************************************/
struct node{
  int info;
  struct node *link;

};

void main(){

/*********************************************** Creating head ******************************************************************************/
  struct node *start = NULL;

/*********************************************** Creating first node ************************************************************************/
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->info = 10;
  temp->link = start;
  start = temp;

/*********************************************** Creating remaining node's ********************************************************************/
  temp = (struct node*)malloc(sizeof(struct node));
  temp->info = 20;
  struct node *p;
  p = start;
  while(p->link != NULL){
    p=p->link;
  }
  p->link = temp;
  temp->link = NULL;

/*********************************************************************************************************************************************/
  temp = (struct node*)malloc(sizeof(struct node));
  temp->info = 30;
  p = start;
  while(p->link != NULL){
    p=p->link;
  }
  p->link = temp;
  temp->link = NULL;

/*********************************************************************************************************************************************/
  temp = (struct node*)malloc(sizeof(struct node));
  temp->info = 40;
  p = start;
  while(p->link != NULL){
    p=p->link;
  }
  p->link = temp;
  temp->link = NULL;

/*********************************************************************************************************************************************/
  temp = (struct node*)malloc(sizeof(struct node));
  temp->info = 50;
  p = start;
  while(p->link != NULL){
    p=p->link;
  }
  p->link = temp;
  temp->link = NULL;

/*********************************************************************************************************************************************/
  temp = (struct node*)malloc(sizeof(struct node));
  temp->info = 60;
  p = start;
  while(p->link != NULL){
    p=p->link;
  }
  p->link = temp;
  temp->link = NULL;

/*************************************************************** TRAVERSING LINKED LIST *******************************************************/
    if(start == NULL){
        printf("list is empty\n");
        return;
    }

    printf("list is:  ");
    p = start;
    while(p != NULL){
    printf("%d", p->info);
    p = p->link;
    }
    printf("\n");

/*************************************************************** Counting nodes *************************************************************/
   int n = 0;
   p = start;
   while( p!= NULL){
        n++;
        p=p->link;
    }
    printf("Number of nodes=%d\n", n);

/*************************************************************** Searching info *************************************************************/
int position = 1;
int x = 20;
    p = start;
    while(p != NULL){
            if(p->info==x)
                break;
            position++;
            p = p-> link;
    }

    if(p==NULL){
        printf("%d not found in list\n", x);
    }else{
        printf("%d is at position %d\n", x,position);
    }

/*************************************************************** Inserting after node x ******************************************************/
temp = (struct node*)malloc(sizeof(struct node));
temp ->info = 50;
p = start;
while(p!=NULL){
    if(p->info==x)
        break;
    p=p->link;
}

temp->link = p->link;
p->link=temp;

/*************************************************************** Inserting before node x ******************************************************/
temp = (struct node*)malloc(sizeof(struct node));
temp ->info = 700;
p = start;
while(p->link!=NULL){
    if(p->link->info==x)
        break;
    p=p->link;
}

temp->link = p->link;
p->link=temp;

/*************************************************************** Inserting at position k *****************************************************/
temp = (struct node*)malloc(sizeof(struct node));
temp ->info = 89;
int k = 3 ;
p = start;
for(int i=1; i<k-1&&p!=NULL; i++){
        p=p->link;
}

temp->link = p->link;
p->link=temp;


/*********************************************************************************************************************************************/
  temp = NULL;
  p = NULL;



}
