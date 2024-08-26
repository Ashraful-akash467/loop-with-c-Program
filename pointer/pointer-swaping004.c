#include<stdio.h>
int main()
{
    int x=30,y=40,temp;
    int *prt1,*prt2;
    prt1=&x;  prt2=&y;
    
    //swapin start

    temp=*prt1;
    *prt1=*prt2;
    *prt2=temp;

     printf("The swapping value of x =%d\n",x);
      printf("The swapping value of x =%d\n",*prt1);
      printf("The swapping value address of x =%d\n\n\n\n\n\n",&x);    //&prt1


     printf("The swapping value of y =%d\n",y);
      printf("The swapping value of y =%d\n",*prt2);
      printf("The swapping value address of y =%d\n",&y);             //&prt2
     getch ();
}