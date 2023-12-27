#include<stdio.h>

struct det last_std(struct det *person);

struct det{

    char name[30];

    int age;
    
    char address[30];

    char uni[30];

    float gpa;

};


int main(){

struct det person[3];

for(int i=0;i<3;i++){

printf("\nEnter Name of %d Student : ",i+1);
scanf("%s",&person[i].name);
getchar();

}

printf("\n");

for(int i=0;i<3;i++){

printf("\nEnter Details for %s\n",person[i].name);

printf("\nEnter Age : ");
scanf("%d",&person[i].age);

printf("\nEnter Address : ");
scanf("%s",&person[i].address);
getchar();

printf("\nEnter University : ");
scanf("%s",&person[i].uni);
getchar();

printf("\nEnter Gpa : ");
scanf("%f",&person[i].gpa);

}

 struct det l_s = last_std(person);
printf("\n\n");

printf("\nDetails for %s is \n",l_s.name);

printf("Age : %d",l_s.age);

printf("\nAddress : %s",l_s.address);


printf("\nUniversity : %s",l_s.uni);


printf("\nGPA : %f",l_s.gpa);

}


struct det last_std(struct det *person){

printf("\n");

for(int i=0;i<2;i++){

printf("\nDetails for %s is \n",person[i].name);

printf("Age : %d",person[i].age);

printf("\nAddress : %s",person[i].address);


printf("\nUniversity : %s",person[i].uni);


printf("\nGPA : %f",person[i].gpa);

}

return person[2];

}