#include<stdio.h>
void main()
{
    int c,r,n;
    printf("take the range of cllloumn and row:");
    scanf("%d",&n);
    for(r=1;r<n;r++)
    {
        for(c=1;c<r;c++)
        {
        if(c==r)
        printf("*");
        else 
        printf("A");
        }
        printf("\n");
    }


}