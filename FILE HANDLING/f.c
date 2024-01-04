#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

// char str[10]="murtaza";

// gets(str);

// puts(str);
// puts(str);

// // printf("%s",str);
// // printf("%s",str);



// char str[50];

// fgets(str,sizeof(str),ptr);

// printf("%s",str);

// char str_2[50];

// fgets(str_2,sizeof(str_2),ptr);

// printf("%s",str_2);

char str[20]="apple\n";


FILE *ptr = fopen("demo.txt","r");



 while (1)
        {
            char buffer[20] = "";

            fgets(buffer, sizeof(buffer),ptr);

            if(strcmp(str,buffer) == 0){

                printf("HELLO");
            }
           
            if (strlen(buffer) == 0)
            {
                break;
            }
           
        }

        fclose(ptr);

}