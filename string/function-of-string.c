#include<stdio.h>
#include<string.h>
void check(char m[]);
main ()
{
    char m[100],a;
    printf("Emter The String:");
    gets(m);
    printf("The String Is:");
    puts(m);
    check (m);
}
void check(char m[])
{
    int i,alpha=0,digit=0,uc=0,lc=0,sp=0;
    for (i=0; m[i]!='\0'; i++)
    {
        if (m[i]>='A' && m[i]<='Z' || m[i]>='a' && m[i]<='z')
        { 
            alpha++;
            if(m[i]>='A' && m[i]<='Z')
            {
                uc++;
            }
            else
            {
                lc++;
            }
        }
        else if (m[i]>='1' && m[i]<='9')
        {
            digit++;
        }
        else
        {
            sp++;
        }
    }
    printf("Total Number Of Characters: %d\n\n",strlen(m));
    printf("Total Number Of Alphabets: %d\n\n",alpha);
    printf("Total Number Of Capital Alphabets: %d\n\n",uc);
    printf("Total Number Of Small Alphabets: %d\n\n",lc);
    printf("Total Number Of Numeric Characters: %d\n\n",digit);
    printf("Total Number Of Special Characters: %d\n\n",sp);

}