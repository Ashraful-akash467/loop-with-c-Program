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
            printf("Aij[%d][%d]",i,j);
            scanf("%d",&a[i][j]);

        }
        printf("\n");
     }
      printf("entar b row and col elemwnts :\n");

     for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)

        {
            printf("Bij[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }

              printf("\n");
    }

     printf("A=");
     printf("\n");printf("\n");printf("\n");
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)

         {
             printf("%d",a[i] [j]);
         }

         printf("\n");

     }
     printf("B=");
     printf("\n");printf("\n");printf("\n");
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)

         {
             printf("%d",b[i] [j]);
         }

         printf("\n");

     }


}
