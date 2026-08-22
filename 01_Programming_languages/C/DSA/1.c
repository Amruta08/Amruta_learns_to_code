#include<stdio.h>
#include<stdlib.h>

// implementation of singly linked list
struct node{
        int info;
        struct node*link;
};


void main(){

    struct node*start=NULL;
}


// traversing a linked list
void traverse(struct node *start){
    struct node *p;
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

}

// counting nodes
void count_nodes(struct node *start){
    int n = 0;
    struct node *p = start;
    while( p!= NULL){
        n++;
        p=p->link;
    }
    printf("Number of nodes=%d\n", n);
}


// searching element in list
void search_ele(struct node *start, int x){
    struct node *p;

    int position = 1;
    p = start;
    while(p != NULL){
            if(p->info==x)
                break;
            position++;
            p = p-> link;
    }

    if(p==NULL){
        print("%d not found in list\n", x);
    }else{
        printf("%d is at position %d\n", x,position);
    }
}

//finding pointer to last node
p = start;
while(p->link != NULL){
    p = p->link;
}


//finding pointer to second last node
p = start;.
while(p->link->link != NULL){
    p = p->link;
}

//finding pointer to a node with particular info
p = start;
while(p != NULL){
    if(p->info==x)
        break;

    p=p->link;
}


//finding pointer to predecessor node with particular info.
p = start;
while(p->link!=NULL){
    if(p->link->info==x)
        break;
    p=p->link;
}


//finding pointer to a node at a particular position (k)
p = start;
for(i=1; i<k&&p!=NULL; i++){
        p=p->link;
}


//create node
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node))
temp ->info = data;


//insertion
//insertion in the beginning
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
temp ->info = data;

temp ->link = start;
start = temp;

//insertion in an empty list
struct node *insertINbeg(struct node *start,int data)
{
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node))
temp ->info = data;

//temp -> link = NULL; or
temp->link = start;
start = temp;
return start;
};


/*insertion at the end*/

void insertATend(struct node *start,int data){
// allocate a new node
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node))
temp ->info = data;

// we need to bring the pointer to the last node
struct node *p;
p = start;
while(p->link!=NULL){
    p=p->link;
}

//now link part of p should point to temp
p->link=temp;

//temp becomes last node of the last so it's link should be NULL
temp->link = NULL;
}

//insertion in between the list nodes
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node))
temp ->info = data;
temp->link=p->link;
p->link = temp;


//insertion after a node x
//insert a new node after the node having value x

struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
temp ->info = data;

// first find the pointer that contains the value x
p = start;
while(p!=NULL){
    if(p->info==x)
        break;
    p=p->link;
}

temp->link = p->link;
p->link=temp;

//insertion before a node x
//insert a new node before the node having value x

struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
temp ->info = data;

//locate the pointer to it's preceding node
p = start;
while(p->link!=NULL){
    if(p->link->info==x)
        break;
    p=p->link;
}

temp->link = p->link;
p->link=temp;

//insertion at a given position
//insert a node at the given position k

struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
temp ->info = data;

p = start;
for(i=1; i<k-1&&p!=NULL; i++){
        p=p->link;
}

temp->link = p->link;
p->link=temp;



/* create list */

struct node *createLIST(struct node *start){
    int i,n,data;
    // entering number of nodes that are required in the list
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    /*
    if(n==0){
        return start;
    }
    */

    // when we are inserting in an empty list we use insert in beginning function
    // since insert in beginning and insert in empty list logic is same
    printf("enter the first element to be inserted: ");
    scanf("%d", data);
    start = insertINbeg(start,data);

    //rest of the elements are entered at the end of the list using insertATend function
    for(i=2; i<=n; i++){
        printf("Enter the next element to be inserted");
        scanf("%d", &data);
        insertATend(start,data);
    }

    return start;
};

/******************************************************  Deleting nodes  ************************************************************/
// pointer temp - point's to node that is to be deleted
// rearrange links - remove nodes logically
// free(temp);

/*** deletion of first node ***/

// temp points to start
temp = start;

// after deletion of 1st node, start should point to second node
// therefore we update start
start = start->link;

// to physically remove the node, we use free function
free(temp);

/** deletion of only node  **/  // start-->10

//temp points to start
temp = start

// start is made NULL
start = start->link;

// to physically remove the node, we use free function
free(temp);



/** deletion in between the list **/

// find pointer to preceding node

// temp points were p->link points
temp = p->link;

//link of preceding node should point to next node
p->link = temp->link;

// to physically remove the node, we use free function
free(temp);

/** deletion at the end **/
// find pointer to preceding node

// temp points were p->link points
temp = p->link

// make preceding node null
//p->link = NULL;
p->link = temp->link;

// to physically remove the node, we use free function
free(temp);

struct node *deleteNode(struct node *start, int x)
{
    struct node *temp, *p;
    if(start == NULL){
        printf("List is empty: \n")
    }
};


















/*
#include<stdio.h>
#include<stdlib.h>
struct node{
        int info;
        struct node*link;

    };


void main(){
  // int x = 10;
  // int arr[5]={1,2,3,4,5};
  // int *start;
  // start = &arr[0];

  // int *p;
  // p = start;

  // int i = 1;
  // while(i<5){
  //   start = &arr[i];
  //   i++;

struct node*start=NULL;

struct node *temp;
struct node *p;
temp = (struct node*)malloc(sizeof(struct node));
temp -> info = 10;
//temp -> link = NULL;
temp -> link = start;
start = temp;
// temp -> link = start;
// start = temp;
p = start;
while(p->link!= NULL){
  p=p->link;
}
p->link = temp;
temp->link = NULL;

}
*/


























