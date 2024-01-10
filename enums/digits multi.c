#include<stdio.h>
int digits_multi();

int main(){

int num=253;
// printf("\nEnter number : ");
// scanf("%d",&num);

printf("\nMultiplication of digits of %d is : %d",num,digits_multi(num));

}

int digits_multi(int n){

if(n==0){return 1;}

int digit = n%10;

int m=digit*digits_multi(n/10);

return m;


}