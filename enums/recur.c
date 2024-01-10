#include<stdio.h>
void repeat(int n);
int main(){

int n=21;

repeat(n);


}

void repeat(int n){

printf("%d ",n);

if(n<=1){return;}

if(n%2==0){

repeat(n/2);

}
else{repeat((n*3)+1);}
}