//summetion of pointer ;

#include<stdio.h>
int main()
{
    int x=30,y=40,sum;
    int *prt1,*prt2;
    

    prt1=&x;     prt2=&y;

    sum  = *prt1 + *prt2;
   
   printf("The sum is :%d",sum);
   getch ();

}