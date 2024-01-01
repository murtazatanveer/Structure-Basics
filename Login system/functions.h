#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void signup();
int login();
struct details{

char name[30];
char address[50];
char password[20];

}person[20];



void signup_(){

FILE *ptr = fopen("details.txt","r");
char ch;
int linescounter=0;
int id;
do{

ch = fgetc(ptr);

if(ch=='\n'||ch==EOF){

linescounter++;

}

}while(ch!=EOF);

fclose(ptr);

 id = linescounter/3;

int i;

for( i=0;i<20;i++){

if( (id) == i){

printf("\nEnter Your Name : ");
gets(person[i].name);

printf("\nEnter Your Address : ");
gets(person[i].address);


printf("\nGenerate your password : ");
gets(person[i].password);

FILE *ptr = fopen("details.txt","a");

fprintf(ptr,"%s\n%s\n%s\n",person[i].name , person[i].address, person[i].password);

fclose(ptr);

break;
}

}

system("cls");

printf("YOUR ID is : %d\n",id);
printf("YOUR PASS is : %s",person[i].password);

FILE *p = fopen("id,pass.txt","a");

fprintf(p,"%d\n%s\n",id,person[i].password);

fclose(p);

return;

}

int login(){

char i[4];    //="0\n";
char p[20];   //="qwerty\n";

    printf("\nEnter Your ID : ");
 gets(i);
    printf("\nEnter Your Password : ");
    gets(p);

      i[strlen(i)] = '\n';
      p[strlen(p)] = '\n';

      i[strlen(i)] = '\0';
      p[strlen(p)] = '\0';


FILE *ptr = fopen("id,pass.txt","r");

char ch;

while(ch!=EOF){

char id[4]="";
char pass[20]="";
ch = fgetc(ptr);
fgets(id,sizeof(id),ptr);
fgets(pass,sizeof(pass),ptr);

if( (strcmp(i,id) && strcmp(p,pass)) == 0 ){

fclose(ptr);

 system("cls");

 return 1;

}


}

return 0;

}
