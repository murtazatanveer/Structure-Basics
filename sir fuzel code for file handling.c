#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyFileLineByLine()
{
    FILE *toCopy = fopen("Data.txt", "r");
    FILE *toPaste = fopen("Data2.txt", "w");
    if (toCopy == NULL || toPaste == NULL)
    {
        puts("Error, could not copy paste.");
        return;
    }
    char *buffer = (char *)malloc(51 * sizeof(char));
    do
    {
        buffer[0] = '\0';
        fgets(buffer, 50, toCopy);
        fputs(buffer, toPaste);
    } while (strlen(buffer) != 0);

    fclose(toCopy);
    fclose(toPaste);
}

void demoReadFileLineByLine()
{
    FILE *fp = fopen("Data.txt", "r");
    if (fp == NULL)
    {
        puts("Error, Could not open the file");
    }
    else
    {
        // reading in lines of text from a file
        while (1)
        {
            char buffer[1000] = "";
            fgets(buffer, 999, fp);
            if (strlen(buffer) == 0)
            {
                break;
            }
            puts(buffer);
        }
        fclose(fp);
    }
}

void demoWriteFileCharByChar()
{
    FILE *fp = fopen("Data_Copy.txt", "w");
    if (fp == NULL)
    {
        puts("Error, Could not write/create the file");
    }
    else
    {
        char contents[] = "Filing is the best.\nNow you can cry a little more.";
        for (int i = 0; i < strlen(contents); i++)
        {
            fputc(contents[i], fp);
        }
        fclose(fp);
        
    }
}

void demoReadFileCharByChar()
{
    // Relative path: ..\Stories\TheCMonster.txt
    // Absolute Path: D:\Stories\TheCMonster.txt
    FILE *p = fopen("Data.txt", "r");
    if (p == NULL)
    {
        puts("Error, Could not open File");
        return;
    }
    // getchar() reads a single char from the Default input stream StdIn
    // Read the file contents char by char
    char charRead;
    do
    {
        charRead = fgetc(p);
        printf("%c", charRead);
    } while (charRead != EOF);
    fclose(p);
}

int main()
{


    copyFileLineByLine();
    demoReadFileLineByLine();
    demoWriteFileCharByChar();
    demoReadFileCharByChar();

    //  char name[15];
    //  puts("What is your name? : ");
    //  scanf("%s", name); // stop on seeing a whitespace
    //  gets(name);    // stops on seeing either N characters or a \n
    //  puts("Hello there...");

    // // printf("Hello there...");
    return 0;
}