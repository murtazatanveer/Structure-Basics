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

if(c=='l'||c=='L'||a==1){

if (login())
{
    printf("\n_______Log In Successfully______");

printf("\n\nPress 1 to Print user details : ");
scanf("%d",&a);

if(a==1){
    fetch_details_from_file();
}
    
}

else{
    printf("\n_____Incorrect ID or Password_____");
}

    
    
}
}
