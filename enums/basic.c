#include<stdio.h>
#include<stdlib.h>

int check();

enum days{mon,tue,wed,thu,fri,sat,sun}d[4];

enum result{false,true};
 #define pi 3.14
int main(){

 
    #ifndef pi
    
    d[2]=wed;

for(int i=mon;i<=fri;i++){

if(i==d[2]){break;}

printf("%d ",i);

}
    
    #endif

    d[3]=sat;
    
printf("%d",check());
    d[3]=tue;

printf("\n%d",check());
 

}

int check(){

    return d[3];
}