#include<stdio.h>
int main()
{
    int x=10,y=30,z=40;
    int *prt;

    prt=&x;
    printf("X = %d\n",*prt);
    printf("X = %d\n",&prt);

    prt=&y;
    printf("Y = %d\n",*prt);
    printf("X = %d\n",&prt);

    prt=&z;
    printf("Z = %d\n",*prt);
    printf("X = %d\n",&prt);

}