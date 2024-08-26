#include<stdio.h>
int main()
{
    FILE *file;

    fopen("text.txt","w");   //for open file or creat file and then write in file....

    if(file==NULL)
       {
        printf("FILE does not exits");
       }
    else 
    {
      printf("FILE is opend");
      fclose(file);
    }    
}