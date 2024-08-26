#include<stdio.h>
int main()
{
    int x,i,r=0,d;
    scanf("%d",&x);
    for(i=x;i!=0;i=i/10)
    {
      d=i%10;
      r=(r*10)+d;
      
    }
     printf("    MK %d",r);

}