//one dimentionalo char type arry which is termineted by '\0' [null] for add multiple carrecter ...

#include<stdio.h>
int main()
{
    char s1[5];
    s1[0]='A';
    s1[1]='K';
    s1[2]='A';
    s1[3]='S';
    s1[4]='H';
    s1[5]='\0';

    printf("s1:     %s",s1);

}