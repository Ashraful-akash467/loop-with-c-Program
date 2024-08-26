#include<stdio.h>
void main()
{
    int x[10],i,n;
    printf("enter the element :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&x[i]);
    }

for(i=0;i<n;i++)
   {
    printf("x[%d] \n",i);
    printf("elements are :%d \n",x[i]);
   }




   int max=x[0];
   for(i=1;i<n;i++)
    {
        if(max<x[i])
        max=x[i];
        printf("%d\n",max);
    }
  
  // int min=x[0];
 //  for(i=1;i<n;i++)
  //  {
   //     if(min>x[i])
  //      min=x[i];
  //  }
//printf("%d\n",min");  


}
