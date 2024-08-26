#include<stdio.h>
int main()
{
    int n,r,c,i;
    printf("Enter the c,r:");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(c==1||r==1||c==n||r==n||c==r||c+r==n+1)
            {printf(" # ");}
            else printf("   ");
        
        }
         printf("\n");
    }
   
}