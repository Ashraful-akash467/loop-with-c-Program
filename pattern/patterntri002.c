#include<stdio.h>
int main()
{
    int n,r,c,i=1;
    printf("Enter the c,r:");
    scanf("%d",&n);
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=r;c++)
       // {
        // printf(" ");
       // }
    for(c=1;c<=r;c++)
    {
        printf("%d",c);
    }
         printf("\n");
    }
   
}