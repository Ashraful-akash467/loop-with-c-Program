#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j,r,c;
    printf("entar coland row :\n");
    scanf("%d %d",&r,&c);
    printf("entar a row and col elemwnts :\n");
     
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
            scanf("%d %d",&a[i][j]);

        }
         printf("\n");
     }

      printf("entar b row and col elemwnts :\n");
     
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
            scanf("%d %d",&b[i][j]);
            
        }
         printf("\n");
     }

}