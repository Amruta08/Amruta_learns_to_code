#include<stdio.h>
#include<stdlib.h>

int main(){

    // pointers are used in embedded devices , for efficient memory use , dynamic memory allocation
    // pointer is a variable which stores address of another variable

    int a = 10;
    printf("&a   = %d\n", &a);                  //6422044
    printf("&a+1 = %d\n", &a+1);                //6422044+4 = 6422048 (since 'int' is of 4 bytes)
    printf("&a+5 = %d\n", &a+5);                //6422044+20 = 6422064

    // Syntax for pointer
    // Data_type *pointer_name;
    // int *ptr;

    int *ptr = &a;
    int **dptr = &ptr;

    printf("Value of a = %d\n", a);                                  // Value of a = 10
    //*ptr and **dptr will give the value stored at a's address
    printf("Value stored at ptr = %d\n", *ptr);                      // Value stored at ptr = 10
    printf("Value stored at dptr = %d\n", **dptr);                   // Value stored at dptr = 10

    printf("Address of a = %d\n",&a);                                // Address of a = 6422044
    printf("Address of a = %p\n",&a);                                // Address of a = 000000000061FE1C

    printf("ptr points to the address = %d\n", ptr);                 // ptr points to the address = 6422044
    printf("ptr points to the address = %p\n", ptr);                 // ptr points to the address = 000000000061FE1C

    printf("Address of ptr = %d\n",&ptr);                            // Address of ptr = 6422032
    printf("Address of ptr = %p\n",&ptr);                            // Address of ptr = 000000000061FE10

    printf("dptr points to the address = %d\n", dptr);               // dptr points to the address = 6422032
    printf("dptr points to the address = %p\n", dptr);               // dptr points to the address = 000000000061FE10

    printf("Address of dptr = %d\n",&dptr);                          // Address of dptr = 6422024
    printf("Address of dptr = %p\n",&dptr);                          // Address of dptr = 000000000061FE08

    // pointer arthmetic
    //*,/, bitwise operations cannot be performed in pointers

    ptr++;
    printf("ptr = %d\n", ptr);                                       // ptr = 6422048
    printf("ptr = %d\n", ptr+1);                                     // ptr = 6422052
    printf("ptr = %d\n", ptr+2);                                     // ptr = 6422056
    printf("ptr = %d\n", ptr+3);                                     // ptr = 6422060

    ptr--;
    printf("ptr = %d\n", ptr);                                       // ptr = 6422044
    printf("ptr = %d\n", ptr-5);                                     // ptr = 6422024
    printf("ptr = %d\n", ptr-7);                                     // ptr = 6422016
    printf("ptr = %d\n", ptr-4);                                     // ptr = 6422028


    //  Call by value     -  Any change made in called function will not be reflected in calling function
    //  Call by reference -  Change made in called function will  be reflected in calling function since we are passing address

    // pointers to functions
    // syntax :-
    // return_type function_name(int*);
    // return_type function_name(int*, int*); //passing 2 int pointers
    // declaring - void set(int *a);
    // calling - set(&a);


    //functions returning pointers
    // syntax :-
    // return_type* function_name(parameter);
    // int* function_name(parameter);


    // Comparision in pointers

    int *P;
    P = NULL;
    if(P==NULL){
        printf("P is NULL\n");
    }


    int arr[5] = {10,20,30};
    int *j , *k, *l;
    j = &arr[0];
    k = &arr[1];
    l = &arr[2];

    if(j != NULL){
        printf("arr[0] = %d\n", *j);
    }

     if(k < l){
        printf("k is ahead of l\n");
    }

    //subtraction of pointers

    printf("k-j = %ld\n",k-j);
    printf("l-j = %ld\n",l-j);
    printf("j-k = %ld\n",j-k);


    //void pointer - general purpose pointer , it can pointer to any variable (of diff types)
    // application - in malloc,
    // referencing - assigning  variable address to a pointer  (&)
    // dereferencing - accessing   value  to which the pointer point's  (*)
    // dereferencing is not possible directly in void pointer , hence typecasting is needed

    int i = 10;
    char c = 'a';
    void *pt ;

    pt = &i;
    //printf("value of i = %d\n", *pt);            // will throw error , hence type conversion is done
      printf("value of i = %d\n", *(int*)pt);      // value of i = 10

    //arthmetic on void pointer
    printf("pt = %d\n", pt);                       // pt = 6421948
    printf("pt = %d\n", pt+1);                     // pt = 6421949

    pt = &c;
    printf("value of c = %c\n", *(char*)pt);       //value of c = a


    //Dangling pointer - points to a memory location which is deleted or free

    // Dynamic memory allocation

    // Create memory -  malloc and calloc  included in stdlib.h
    // Memory Allocation is in 2 ways
    // Static  - Compile time in stack  Eg- declaring variables using int , char etc
    // Dynamic - Run time in heap
    // both are stored in RAM

    // MALLOC -  stands memory allocation
    // one argument
    // size *pointer = malloc(size in bytes);
    // malloc doesn't initialize the memory area  , allocated memmory area will have garbage values

    int *qw ;
    qw = malloc(5*sizeof(int));

    if(qw!= NULL){
        printf("Memory created successfully\n");
    }

    // CALLOC - stands for Contiguous allocation
    // 2 arguments
    // size *pointer = calloc(No. of elements, size of elements)
    // calloc initialize's the memory area to 0
    // calloc = malloc() + memset() {memset is used to fill a block with a particular value it fills 0 to dynamically allocated memory}

    int *on ;
    on = calloc(5,sizeof(int));

    if(on!= NULL){
        printf("Memory created successfully\n");
    }

    // RELLOC - resize the memory area which was already allocated using malloc or calloc
    // Included in stdlib.h
    // if the memory is not created dynamically using malloc and calloc, then the behavior of the realloc function is undefined
    // 2 arguments
    // realloc(ptr, new size)

    char *po ;
    po = malloc(5);
    po = realloc(po,10);

    // realloc cases
    // if new size < actual size then it will deallocate memory
    // if new size > actual size then it will check if it can expand already available memory and resize the memory
    // else it will create new block of memory with new size and copy old data to the newly allocated block and deallocate old memory block

    // FREE - deallocate allocated memory
    // if we call free call 2 times for same pointer , then its behaviour is undefined
    free(qw);

    // ARRAY & POINTER

    int array[5] = {10,20,30,40};

    // arr + i =  &arr[i]
    printf("&array[0] = %d\n", array+0);                // &array[0] = 6421904
    printf("&array[1] = %d\n", array+1);                // &array[1] = 6421908
    printf("&array[2] = %d\n", array+2);                // &array[2] = 6421912
    printf("&array[3] = %d\n", array+3);                // &array[3] = 6421916

    // *(arr + i) =  arr[i]
    printf("array[0] = %d\n", *(array+0));              // array[0] = 10
    printf("array[1] = %d\n", *(array+1));              // array[1] = 20
    printf("array[2] = %d\n", *(array+2));              // array[2] = 30
    printf("array[3] = %d\n", *(array+3));              // array[3] = 40


    // Accessing  array elements using pointer
    int *pointer ;
    pointer = array;

    // ptr + i =  &arr[i]
    printf("&array[0] = %d\n", pointer+0);               // &array[0] = 6421904
    printf("&array[1] = %d\n", pointer+1);               // &array[1] = 6421908
    printf("&array[2] = %d\n", pointer+2);               // &array[2] = 6421912
    printf("&array[3] = %d\n", pointer+3);               // &array[3] = 6421916

    // *(ptr + i) =  arr[i]
    printf("array[0] = %d\n", *(pointer+0));             // array[0] = 10
    printf("array[1] = %d\n", *(pointer+1));             // array[1] = 20
    printf("array[2] = %d\n", *(pointer+2));             // array[2] = 30
    printf("array[3] = %d\n", *(pointer+3));             // array[3] = 40

    return 0 ;
}
