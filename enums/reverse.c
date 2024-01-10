#include<stdio.h>
int reverse();
int rev;
int main(){

int num=153;

printf("rev : %d",reverse(num));

}

int reverse(int num){

if(num==0){return rev;}

int digit = num%10;

 rev = (rev*10)+digit;

reverse(num/10);


}