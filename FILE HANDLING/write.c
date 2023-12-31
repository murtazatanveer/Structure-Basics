#include<stdio.h>
#include<string.h>
void write_line();
void read_integersandchars_from_file();

int main(){

//write_line();
read_integers_and_chars_from_file();

}

void write_line(){

char line[50];
puts("\nYour Name and age ?");
gets(line);

int age = 20;

FILE *fp=fopen("w.txt","w");

fprintf(fp,"%s %d years old.",line,age);

// for(int i=0;i<strlen(line);i++){

//     fputc(line[i],fp);
// }

fclose(fp);

}

void read_integers_and_chars_from_file(){

FILE *fp=fopen("w.txt","r");

char line[200];

 fgets(line,sizeof(line),fp);
  

fclose(fp);

 puts(line);
 
}