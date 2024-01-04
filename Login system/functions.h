#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void signup();
int login();
struct details
{

   char name[30];
   char address[50];
   char password[20];

} person[20];

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

         printf("\nGenerate your password : ");
         gets(person[i].password);

         FILE *ptr = fopen("details.txt", "a");

         fprintf(ptr, "%s\n%s\n%s\n", person[i].name, person[i].address, person[i].password);

         fclose(ptr);

         break;
      }
   }

   system("cls");

   printf("YOUR ID is : %d\n", id);
   printf("YOUR PASS is : %s\n", person[i].password);

   FILE *p = fopen("id,pass.txt", "a");

   fprintf(p,"%d,%s\n", id, person[i].password);

   fclose(p);

   return;
}

int login()
{

   char id_pass[30]="0,abc\n";
   // printf("\nEnter your ID and PASS\nIn format (id,pass) : ");
   // gets(id_pass);

   id_pass[strlen(id_pass)]='\n';

   FILE *ptr = fopen("id,pass.txt", "r");

while (1)
        {
            char buffer[26] = "";

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
