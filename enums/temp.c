#include<stdio.h>
int main(){

int temp;
scanf("%d",&temp);

if(temp<0){printf("\nfreezing");}

else if(temp==0||temp<=10){printf("\ncold");}

else if(temp==11||temp<=20){printf("normal");}
else{printf("bohat hot");}

}