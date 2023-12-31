#include<stdio.h>
struct signup persons[20];

void signup();

struct signup{

char name[30];
char address[50];
char username[20];
char password[20];

};


void signup(){

FILE *ptr = fopen("signup.txt","w");
char ch;
int linescounter=0;

while(ch!=EOF){

ch = fgetc(ptr);

if(ch=='\n'){

linescounter++;

}

}



}