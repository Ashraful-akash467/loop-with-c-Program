#include<string.h>
int main()
{
   char s[200];
   printf("Enter a name :");
   scanf("%s",&s);   //it can't input after space;                      //gets(s);
   printf("The name: %s",s);                                           //puts(s); 

}