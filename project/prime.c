//Write a program to see 1-100 all prime number;
#include<stdio.h>
void main()
{
    int n,d,f=0,m;
    for(n=1;n<=100;n++)
        {
    for(d=2;d<n;d++)
    {
        if(n%d==0)
        {
           break;
        }

    }
    if(n==d){printf("prime: %d \n",n);}
        }

}
