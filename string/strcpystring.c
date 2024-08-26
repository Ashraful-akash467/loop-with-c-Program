#include<string.h>
int main()
{
    char s[]="C Program";
    char t[20];                         
    strcpy(s,t);                                     // ("C Program",t);
    printf("%s \n",t);

}