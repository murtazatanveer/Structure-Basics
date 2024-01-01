#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 void read_line();
// void read_all_lines();
// void read_2nd_line_only();

int main(){

  read_line();

// read_all_lines();

// read_2nd_line_only();

}



void read_line(){


FILE *ptr = fopen("demo.txt","r");

char fine[80];

fgets(fine,sizeof(fine),ptr);

fclose(ptr);

printf("1st Single line is : %s2\n%d",fine,strlen(fine));



}


void read_all_lines(){


FILE *ptr = fopen("demo.txt","r");


char lines[100];

int i=0;

do{

lines[i] = fgetc(ptr);

i++;

}while(lines[i-1]!=EOF);

lines[i-1] = '\0';

fclose(ptr);

printf("\n\nAll Lines are \n%s",lines);

}


void read_2nd_line_only(){

FILE *ptr = fopen("demo.txt","r");

char line_2[50];

char readchar;

do{

readchar=fgetc(ptr);

if(readchar=='\n'){

fgets(line_2,sizeof(line_2),ptr);
break;

}

}while(1);

line_2[strlen(line_2)+1] = '\0';

printf("\n\n2nd line is\n%s",line_2);

}
