#include<stdio.h>
#include<string.h>
void readonechar();
void read_firstline();
void read_all_lines();

int main(){

readonechar();
read_firstline();
read_all_lines();

}

void readonechar(){

FILE *ptr = fopen("data.txt","r");

char readchar = fgetc(ptr);

printf("\nfirst char : %c\n",readchar);

fclose(ptr);

}



void read_firstline(){

FILE *ptr = fopen("data.txt","r");

char first_line[50];

fgets(first_line,sizeof(first_line),ptr);

first_line[strlen(first_line)+1]='\0';

printf("\nFirst line : %s",first_line);

}

void read_all_lines(){

FILE *ptr = fopen("data.txt","r");

char all_lines[250];
int i=0;

do{

all_lines[i]=fgetc(ptr);
i++;

}while(all_lines[i-1] != EOF);


all_lines[i-1]='\0';

printf("\nAll Lines are : \n%s",all_lines);

}