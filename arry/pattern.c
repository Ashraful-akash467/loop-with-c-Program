#include<stdio.h>
void main()
{
    int x[10],c,r,n,a,b;
    scanf("%d",&n);
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        {
            printf("L");
            printf("\n");
            }
            for(c=1;c<=r;c++)
            {
                printf("A");
                printf("\n");
            }
            if(r+c==n+1)
            {
           printf("*");
            }
printf("\n");

           }
       }




