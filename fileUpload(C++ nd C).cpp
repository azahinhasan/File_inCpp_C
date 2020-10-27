#include<iostream>
#include <cstdio>

#define BUFFER_SIZE 1000

using namespace std;

void readFile(FILE * fPtr);


int main()
{

    FILE *fPtr;
    char filePath[25] = "Marks.txt";

    char dataToAppend[BUFFER_SIZE];



    fPtr = fopen(filePath, "a");



    printf("\nEnter Name: ");
    fflush(stdin);


    fgets(dataToAppend, BUFFER_SIZE, stdin);


    fputs(dataToAppend, fPtr);


    printf("\nEnter Marks: ");
    fflush(stdin);
    fgets(dataToAppend, BUFFER_SIZE, stdin);


    fputs(dataToAppend, fPtr);





    fPtr = freopen(filePath, "r", fPtr);


    printf("\nSuccessfully appended data to file. \n");
    printf("\n\nChanged file contents:\n\n");
    readFile(fPtr);


    fclose(fPtr);

    return 0;
}


void readFile(FILE * fPtr)
{
    char ch;

    do
    {
        ch = fgetc(fPtr);

        putchar(ch);

    } while (ch != EOF);
}


/*
#include <stdio.h>
int main()
{
   char name[50];
   int marks, i, num;

   printf("Enter number of students: ");
   scanf("%d", &num);

   FILE *fptr;
   fptr = fopen("test.txt", "a");
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }

   for(i = 0; i < num; ++i)
   {
      printf("For student%d\nEnter name: ", i+1);
      scanf("%s", name);

      printf("Enter marks: ");
      scanf("%d", &marks);

      fprintf(fptr,"\nName: %s Marks=%d \n", name, marks);
   }

   fclose(fptr);
   return 0;
}
*/
