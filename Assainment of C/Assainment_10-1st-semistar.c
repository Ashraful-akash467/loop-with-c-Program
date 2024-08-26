//1…//Area of a Triangle

#include<stdio.h>
void main()
{
    int a,b,c;
    float s,area;
    printf("Enter a b c:");
    scanf("%d%d%d",&a,&b,&c);

    s=(float)(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of a Triangle:%.2f\n",area);
}


2...//Average value of 5 number

#include<stdio.h>
int main()
{

    int a,b,c,d,e;
float s;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);


    s=(float)(a+b+c+d+e)/5;
    printf("%f",s);

}


3../Area of Trapezoid

#include<stdio.h>
void main()
{
    int a,b;
    float h,area;
    printf("Enter a b:");

    scanf("%d%d",&a,&b);

    h=(float)(a+b)/2;

    area=((a+b)/2)*h;

    printf("Area of Trapezoid:%.2f\n",area);
}

















4–
/*
Write a c program to find out
sum of the digit of on 4 digit integer
*/
#include<stdio.h>
int main()
{
    int n,x,y,z,q,p,s,sum;
    printf("Enter 4 digit integer value:");
    scanf("%d",&n);
    (n>=1000 && n<=9999)?(x=n%10,//6352%10=2
    y=n/10,//6352/10=635
    z=y%10,//635%10=5
    q=y/10,//635/10=63
    p=q%10,//63%10=3
    s=q/10,//63/10=6

    sum=(s+p+z+x),
    printf("Sum=%d",sum)):(printf("Invalid Number"));
}



5-
/*
Write a C program to convert inputted
days to months and days.
*/
#include<stdio.h>
int main()
{
    int d,m,n;
    printf("Enter day:");
    scanf("%d",&d);

    m=d/30;
    n=d%30;
    printf("%d Month %d Day",m,n);


}



6.
Write a C program to input the electricity unit charge and calculate the total electricity bill according to the given condition.

> for the first 50 units, tk 0.50/unit
>For the next 100 units, tk 0.75/unit
>For the  next 100 unit, tk1.20/unit
>for units above 250,tk 1.50/unit
>An additional surcharge of 20% added to the bill


#include<stdio.h>
int main()
{
    int u;
    float amt,tamt;
rpt:

    printf("Enter Electricity bill:");

    scanf("%d",&u);
    system("CLS");
    amt=(u<=50)?((u*0.50)):((u<=150)?(25+(u-50)*0.75)
                            :((u<=250)?(25+75+(u-150)*1.20):(25+75+120+(u-250)*1.50)));

    tamt=amt+(amt*0.2);
    printf("The Electricity Bill is:%f\n",tamt);

    goto rpt;
}




7.Write a C program to find out sum of all numbers greater than 50 and less than 200 that are divisible by 7



#include<stdio.h>
int main()
{
    int i,sum=0;

    for(i=51;i<200;i++)
    {
        if(i%7==0){
                printf("%d\t",i);
            sum=sum+i;}
    }
    printf("\n%d",sum);

}
 




8.Write a C program to find out sum of all numbers greater than 50 and less than 200 that are divisible by 7
(use goto)





#include<stdio.h>
int main()
{
    int i=51,sum=0;
rpt:
    if(i<200)
    {
        if(i%7==0)
        {
            sum=sum+i;
        }
i++;
goto rpt;
    }

    printf("%d",sum);

}


8.Write a c program to check on inputted number is prime or not prime .



#include<stdio.h>
int main()
{
    int i,n,f=0;

    printf("Enter the Number:");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f++;
            break;
        }
    }
if(f==0)
{
    printf("%d is prime number",n);
}
else
{
    printf("%d is not prime number",n);
}
}


9.Check prime number 1 to 100


#include<stdio.h>
int main()
{
    int i,n,f;

    for(n=1; n<=100; n++)
    {
        f=0;

        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                f++;
                break;
            }

        }

        if(f==0 )
        {
            printf("%d\t ",n);
        }
     }

}

9. Check strong number


#include<stdio.h>
int main()
{
    int n,i,d,fact,totalfact,j;

    printf("Enter the value:");
    scanf("%d",&n);


    for(i=n; i!=0; i=i/10)
    {
        d=i%10;
        printf("%d\t",d);
        fact=1;
        for(j=1; j<=d; j++)
        {
            fact=fact*j;
        }
        totalfact=totalfact+fact;

    }

    if(totalfact==n)
    {
        printf("\n%d is strong number",n);
    }
    else
        printf("\n%d is not strong number",n);
}



10.Check Adam Number



#include<stdio.h>
int main()
{
    int n,nn,dn=0,i,d,dnn,rdnn=0;

    printf("Enter Number:");
    scanf("%d",&n);

    nn=n*n;
    printf("%d\n",nn);

    for(i=n;i!=0;i=i/10)
    {
        d=i%10;
        dn=(dn*10)+d;

    }
    dnn=dn*dn;
//printf("%d\n",dnn);

for(i=dnn;i!=0;i=i/10)
{
    d=i%10;
    rdnn=rdnn*10+d;
}

printf("%d\n",rdnn);

if(nn==rdnn)
{
    printf("Adam number");

}
else
    printf("not Adam number");

}




11. Write C program to input a Matrix  (3x3) and do the following operations:

>Transpose The Matrix Element 
>Show diagonal element, Upper Triangle, Lower Triangle element
>Use three variable (DE,UT,LT) for the summation values of diagonal element, Upper triangle,Lower triangle and find out which is the largest among them. 


#include<stdio.h>
int main()
{
    int A[3][3],r,c,DE=0,UT=0,LT=0;

    printf("Enter the Element of Matrix:\n");

    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            printf("A[%d][%d]:",r,c);
            scanf("%d",&A[r][c]);
        }
    }
    printf("The Matrix are:\n");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {

            printf("%d\t",A[r][c]);
        }
        printf("\n");
    }
    printf("The Transpose Matrix are:\n");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {

            printf("%d\t",A[c][r]);
        }
        printf("\n");
    }

    printf("\nThe Diagonal Element:\n");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            if(r==c)
            {
                printf("%d\t",A[r][c]);
                DE=DE+A[r][c];
            }
        }

    }

    printf("\nThe Upper Triangle:\n");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            if(r<c)
            {
                printf("%d\t",A[r][c]);
                UT=UT+A[r][c];
            }
        }

    }

    printf("\nThe Lower Triangle:\n");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            if(r>c)
            {
                printf("%d\t",A[r][c]);
                LT=LT+A[r][c];
            }
        }

    }

    printf("\nSummation of Diagonal Element:%d",DE);
    printf("\nSummation of Upper Triangle:%d",UT);
    printf("\nSummation of Lower Triangle:%d",LT);


    if(DE>UT && DE>LT)
    {
        printf("The largest is %d",DE);
    }
     else if(UT>LT && UT>DE)
    {
        printf("The largest is %d",UT);
    }
     else
    {
       printf("\nThe largest is %d",LT);
    }

}






12. Array ,searching the value

#include<stdio.h>
int main()
{
    int i,n,A[50],m,f=0;

    printf("How Many Element:");
    scanf("%d",&n);

   printf("Enter The Element:\n");

   for(i=0;i<n;i++)
   {
       printf("A[%d]:",i);
       scanf("%d",&A[i]);
   }
printf("The Element are:\n");

   for(i=0;i<n;i++)
   {

       printf("%d\t",A[i]);
   }

   printf("\nEnter The searching Value\n:");
   scanf("%d",&m);

   for(i=0;i<n;i++)
   {
       if(m==A[i])
       {
           printf("%d is Found in %d Location",m,i+1);
           f++;
       }
   }
   if(f==0)
   {
       printf("%d is not Available",m);

   }
else
    printf("%d is found %d time",m,f);
}



13. Sorting The Array


#include<stdio.h>
int main()
{
    int i,n,A[50],m,f=0,j,temp;

    printf("How Many Element:");
    scanf("%d",&n);

   printf("Enter The Element:\n");

   for(i=0;i<n;i++)
   {
       printf("A[%d]:",i);
       scanf("%d",&A[i]);
   }
printf("The Element are:\n");

   for(i=0;i<n;i++)
   {

       printf("%d\t",A[i]);
   }



   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(A[i]>A[j])
           {


           temp=A[i];
           A[i]=A[j];
           A[j]=temp;}
       }
   }
   printf("\nThe Solting Element are:\n");
   for(i=0;i<n;i++)
   {
       printf("%d\t",A[i]);
   }






14. Array slotting and then searching position value



#include<stdio.h>
int main()
{
    int i,n,A[50],m,f=0,j,temp,p;

    printf("How Many Element:");
    scanf("%d",&n);

   printf("Enter The Element:\n");

   for(i=0;i<n;i++)
   {
       printf("A[%d]:",i);
       scanf("%d",&A[i]);
   }
printf("The Element are:\n");

   for(i=0;i<n;i++)
   {

       printf("%d\t",A[i]);
   }



   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(A[i]>A[j])
           {


           temp=A[i];
           A[i]=A[j];
           A[j]=temp;}
       }
   }
   printf("\nThe Soltting Element are:\n");
   for(i=0;i<n;i++)
   {
       printf("%d\t",A[i]);
   }

   printf("\nEnter The searching Position\n:");
   scanf("%d",&m);
   p=m-1;

   for(i=0;i<n;i++)
   {
       if(p==i)
       {
           printf("%d Location value is %d ",m,A[i]);

       }
   }



}


                  


15. Multiply two matrix array   



#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],M[10][10],i,j,n,s=0,k;

    printf("How many Element:");
    scanf("%d",&n);

    printf("\nEnter The Element of Matrix A:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           {
               printf("A[%d][%d]:",i,j);
               scanf("%d",&A[i][j]);
           }
    }
printf("\nEnter The Element of Matrix B:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           {
               printf("B[%d][%d]:",i,j);
               scanf("%d",&B[i][j]);
           }
    }
printf("\nThe Matrix A:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           {

               printf("%d\t",A[i][j]);
           }
           printf("\n");
    }
    printf("\nThe Matrix B:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           {

               printf("%d\t",B[i][j]);
           }
           printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                s=s+A[i][k]*B[k][j];
            }
            M[i][j]=s;
            s=0;
        }
    }

    printf("\nThe Multiply A And B Matrix is:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }



}

                        


16. Check prime number user defined function



#include<stdio.h>

int prime(int x,int y
          );

int prime(int x,int y)
{
   return (x%y) ;


}


main()
{
    int n,i,f=0;

    printf("Enter the Value:");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(prime(n,i)==0)
        {
             f++;
        break;
        }

    }

    if(f==0)
    {
        printf("%d is prime number",n);

    }
    else
        printf("%d is not prime number",n);

}

                                


17. Check Adam number user defined function

//with RT with parameter
#include<stdio.h>
int square(int );
int retur(int);


int square(int n)
{
    return n*n;
}
int retur(int x)
{
    int i,dn=0,d;
    for(i=x; i!=0; i=i/10)
    {
        d=i%10;
        dn=(dn*10)+d;

    }
    return dn;

}


main()
{
    int n;

    printf("Enter the value:");
    scanf("%d",&n);

    printf("%d\n",square(n));

    printf("%d\n",retur(n));

    printf("%d\n",square(retur(n)));

    printf("%d\n",retur(square(retur(n))));

    if(square(n)==retur(square(retur(n))))
    {
        printf("%d is Adam number",n);
    }
    else
        printf("%d is not Adam number",n);
}

   

18. Check how many characters, alphabet,numeric,special characters uses STRING


#include<stdio.h>
#include<string.h>
int main()
{
    int i;

    char a[100],b[100],alpha=0,num=0,sp=0,upper=0,lo=0;

    printf("Enter the String:");
    gets(a);
    printf("The Stringn are:");
    puts(a);

    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='a'&& a[i]<='z' || a[i]>='A'&& a[i]<='Z')
        {
            alpha++;
            if(a[i]>='a'&& a[i]<='z')
            {
                lo++;
            }
            else
                upper++;
        }
        else if(a[i]>='0'&& a[i]<='9')
        {
            num++;
        }
        else
            sp++;
    }

  printf("Total number of characters in string:%d\n",strlen(a));
  printf("total number of alphabets in string :%d\n",alpha);
  printf("total of capital alphabets in string:%d\n",upper);
  printf("total of small alphabets in string :%d\n",lo);
  printf("Total of numeric character in string:%d\n",num);
  printf("Total of special character in string:%d\n",sp);

    }
