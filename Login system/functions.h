#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void signup();
int login();
void fetch_details_from_file();
void print_details();
struct details
{

   char name[30];
   char address[50];
   char password[20];

} person[20];

  

void fetch_details_from_file(){

 FILE *ptr = fopen("details.txt", "r");
   char ch;
 int linescounter = 0;
   
   do
   {

      ch = fgetc(ptr);

      if (ch == '\n' || ch == EOF)
      {

         linescounter++;
      }

   } while (ch != EOF);

   fclose(ptr);


FILE *pt = fopen("details.txt","r");

for(int i=0;i<linescounter/3;i++){

fgets(person[i].name , sizeof(person[i].name ) , pt );
fgets(person[i].address , sizeof(person[i].address ) , pt );
fgets(person[i].password , sizeof(person[i].password ) , pt );

}

fclose(pt);

system("cls");

printf("\n\nEnter your ID to print your details : ");

int id;
scanf("%d",&id);

system("cls");

if((id-10)<=(linescounter/3)){

print_details(person[id-10],id);

}else{printf("\nEntered ID doesnot Exist");}



}

void signup_()
{

   FILE *ptr = fopen("details.txt", "r");
   char ch;
 int linescounter = 0;

   int id;
   do
   {

      ch = fgetc(ptr);

      if (ch == '\n' || ch == EOF)
      {

         linescounter++;
      }

   } while (ch != EOF);

   fclose(ptr);

   id = linescounter / 3;

   int i;

   for (i = 0; i < 20; i++)
   {

      if ((id) == i)
      {

         printf("\nEnter Your Name : ");
         gets(person[i].name);

         printf("\nEnter Your Address : ");
         gets(person[i].address);


         
         
         while(1){
printf("\nlength of Password must be 5 digits or characters");
         printf("\nGenerate your password : ");
        gets(person[i].password);

  system("cls");


        if(strlen(person[i].password)==5){

break;

        }

printf("Password Length not meet");
         }

         FILE *ptr = fopen("details.txt", "a");

         fprintf(ptr, "%s\n%s\n%s\n", person[i].name, person[i].address, person[i].password);

         fclose(ptr);

         break;
      }
   }

 
   printf("YOUR ID is : %d\n", id+10);
   printf("YOUR PASS is : %s\n", person[i].password);

   FILE *p = fopen("id,pass.txt", "a");

   fprintf(p,"%d,%s\n", id+10, person[i].password);

   fclose(p);

   return;
}

int login()
{

   char id_pass[9];
   printf("\nEnter your ID and PASS\n\nIn format (id,pass) : ");
   gets(id_pass);

   

   FILE *ptr = fopen("id,pass.txt", "r");

while (1)
        {
            char buffer[9] = "";

            fgets(buffer, sizeof(buffer), ptr);

            if((strcmp(id_pass,buffer)) == 0){

               system("cls");

            fclose(ptr);

               return 1;

            }

            if (strlen(buffer) == 0)
            {
                break;
            }

            
        }
   

   return 0;
}


void print_details(struct details per,int id){

   printf("\nName       : %s",per.name);
printf("\nAddress    : %s",per.address);
printf("\nID         : %d",id);
printf("\nPassword   : %s",per.password);


}
