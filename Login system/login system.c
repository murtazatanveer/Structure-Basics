#include<stdio.h>
#include<stdlib.h>
#include"functions.h"

int main(){

printf("\nWelcome to login\\Signup System\n");

printf("\nPress L for login or S for Signup\n");

char c;
printf("\nChoice : ");
scanf("%c",&c);
getchar();

int a;

system("cls");

if(c=='S'||c=='s'){

signup_();


printf("\nPress 1 for login : ");
scanf("%d",&a);
getchar();

}



 if(c=='L'||c=='l'||a==1){

int b = login();

if(b==1){

printf("\n____LOGIN SUCCESSFULLY____\n");

}

else{

printf("\n___Incorrect ID or Pass____\n");

}


}

}




