#include<stdio.h>
void main()
{

    while(1)

    {
   int col,row,n;
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
      for(col=1;col<=row;col++)
      printf("%d",col);
      
       printf("\n");
   }

   }

}