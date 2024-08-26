#include<stdio.h>
int main()
    {   
        int i,a[12]={10,20,30,40,44,33,55,33,334,4545,454534,234356};
        int *prt;

        prt = &a[0];
        for(i=0;i<12;i++)
        {
            printf("[%d]:",i+1);
            printf("%d\n",*prt);
            prt++;
        }
    }