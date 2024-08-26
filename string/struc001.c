#include<stdio.h>
struct person
{
    int age;
    float salary;
    int number;
};
int main()

{
    struct person person1,person2,person3;

    printf("Enter Person1 Info:\nEnter Age:\n Enter Salary \n Enter Number");
    scanf("%d %f %d",&person1.age,&person1.salary,&person1.number);

    
   
   printf("Person1 : \n Age:%d \nSalary:%.2f \n Number:%d ",person1.age,person1.salary,person1.number);


    printf("\n Enter Person2 Info:\nEnter Age:\n Enter Salary: \n Enter Number:");
    scanf("%d %f %d",&person2.age,&person2.salary,&person2.number);

   printf("Person2 : \n Age:%d \nSalary%.2f \n Number:%d ",person2.age,person2.salary,person2.number);
   

}