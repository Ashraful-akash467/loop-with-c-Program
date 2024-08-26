#include<stdio.h>
void main()
{
    int n,R,d=0,i;
    printf("Enter the number :\n");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
    {
        d++;
    }
    for(i=n;i!=0;i=i/10)
    {
        R=i%10;
        printf("%d \t",R);
    }
    if(R==n)
        { 
          printf("Paninrome :");
        }
   else 
   printf("Not Paninrome :");

}