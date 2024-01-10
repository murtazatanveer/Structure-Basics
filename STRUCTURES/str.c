#include<stdio.h>

struct details{

    char name[30];

    int age;
    
    char address[30];

   char uni[30];

 }person_1 , person_2,person_3;

int main(){

// printf("\nEnter Name : ");
// scanf("%s",&person_1.name);
// getchar();

// printf("\nEnter age : ");
// scanf("%d",&person_1.age);


// printf("\nEnter Address : ");
// scanf("%s",&person_1.address);
// getchar();

// printf("\nEnter Uni : ");
// scanf("%s",&person_1.uni);
// getchar();

// printf("\nName : %s",person_1.name);
// printf("\nAge : %d",person_1.age);
// printf("\nAddress : %s",person_1.address);
// printf("\nUniversity : %s",person_1.uni);

// printf("\n\nPerson 2 Details : \n");


// printf("\nEnter Name : ");
// scanf("%s",&person_2.name);
// getchar();

// printf("\nEnter age : ");
// scanf("%d",&person_2.age);


// printf("\nEnter Address : ");
// scanf("%s",&person_2.address);
// getchar();

// printf("\nEnter Uni : ");
// scanf("%s",&person_2.uni);
// getchar();

// printf("\nName : %s",person_2.name);
// printf("\nAge : %d",person_2.age);
// printf("\nAddress : %s",person_2.address);
// printf("\nUniversity : %s",person_2.uni);

// person_3=person_1;

// printf("\nName : %s",person_3.name);
// printf("\nAge : %d",person_3.age);
// printf("\nAddress : %s",person_3.address);
// printf("\nUniversity : %s",person_3.uni);

// FILE *p;

// p = fopen("struct.txt","w");

// fprintf(p,"%s\n%d\n%s\n%s",person_1.name,person_1.age,person_1.address,person_1.uni);

// fprintf(p,"\n%s\n%d\n%s\n%s",person_2.name,person_2.age,person_2.address,person_2.uni);
 
//  fclose(p);

// char str[50];
//  char str_2[50];

 FILE *ptr = fopen("struct.txt","r");


// fgets(str,sizeof(str),ptr);
// fgets(str_2,sizeof(str_2),ptr);

char str[50];

while(!feof(ptr)){

fgets(str,sizeof(str),ptr);

printf("%s",str);


}


fclose(ptr);

// printf("%s  %s ",str,str_2);
}