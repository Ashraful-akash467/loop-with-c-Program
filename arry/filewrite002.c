#include<stdio.h>
int main()
{
    FILE *file;
    char name[22]="Ashraful Islam Akash";
    int length = strlen(name);
    int i;

    fopen("text.txt","w");   //for open file or creat file and then write in file....

    if(file==NULL)
       {
        printf("FILE does not exits");
       }


    else 
    {
      printf("FILE is opend\n");
      for(i=0;i<length;i++)
         {
           fputc( name [i] , file );
         }
      printf("File is written Successfully.\n");
      fclose(file);
    } 
   getch ();
}