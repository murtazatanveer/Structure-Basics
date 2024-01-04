#include<stdio.h>
#include<stdlib.h>

struct demo{

char *add;

}a,b;

int main(){


 a.add = (char*) malloc(10);

 //a.add="JHELUM";
 strcpy(a.add,"JHELUM");

b=a;

printf("%s",a.add);

printf("\n%s",b.add);


a.add="CHAKWAL";

printf("\n%s",a.add);
printf("\n%s",b.add);

}