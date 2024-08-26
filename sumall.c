#include<stdio.h>
void main()
{
    int i,n=7,sum=0;
    for(i=51;i<=200;i++)
    {
        if(i%n==0){sum=sum+i;}
       printf("%d \t",i);
    }
    printf("%d",sum);
}
