#include<stdio.h>

struct details{

    char name[30];

    int age;
    
    char address[30];

    char uni[30];

};


int main(){

struct details person_1;

printf("\nEnter Name : ");
scanf("%s",&person_1.name);
getchar();

printf("\nEnter age : ");
scanf("%d",&person_1.age);


printf("\nEnter Address : ");
scanf("%s",&person_1.address);
getchar();

printf("\nEnter Uni : ");
scanf("%s",&person_1.uni);
getchar();

printf("\nName : %s",person_1.name);
printf("\nAge : %d",person_1.age);
printf("\nAddress : %s",person_1.address);
printf("\nUniversity : %s",person_1.uni);

printf("\n\nPerson 2 Details : \n");

struct details person_2;

printf("\nEnter Name : ");
scanf("%s",&person_2.name);
getchar();

printf("\nEnter age : ");
scanf("%d",&person_2.age);


printf("\nEnter Address : ");
scanf("%s",&person_2.address);
getchar();

printf("\nEnter Uni : ");
scanf("%s",&person_2.uni);
getchar();

printf("\nName : %s",person_2.name);
printf("\nAge : %d",person_2.age);
printf("\nAddress : %s",person_2.address);
printf("\nUniversity : %s",person_2.uni);


}