#include<stdio.h>
int main(){

int size = 7;

int arr[7]={3,6,9,2,4,1,7};

int temp;

for(int a=0;a<5;a++){

    temp=arr[size-1];
    arr[size-1]=arr[0];
    

for(int i=0;i<(size-2);i++){

    arr[i]=arr[i+1];
}

arr[size-2]=temp;

}

for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}

}