#include<stdio.h>
int main()
{
    int *a=50,n;    //*a is for show the value              * is for show the value of the location
    n=a;           //&a is for show the address             &  is address the location
    printf("The value is %d\n",a);
     printf("The value address is %d\n",&n);

}