#include<stdio.h>

void main(){
int a1[10], a2[10], temp[20];
int i=0, j=0, k=0;
int n1, n2;

while((i<n1) && (j<n2)){
    if(a1[i] < a2[j]){
        temp[k++] = a1[i++];
    }else{
        temp[k++] = a2[j++];
    }
 }

while (i<n1-1)
{
    temp[k++] = a1[i++];
}

while (j<n2-1)
{
    temp[k++] = a2[j++];
}



}
