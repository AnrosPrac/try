#include<stdio.h>
struct Employee
{
    int id;
    float salary;
};
int main()
{
      struct Employee e[5];
    
      int i;
    for(i=0;i<5;i++)
    {
        printf("Enter ID and Salary of Employee %d  :  ",i+1);
        scanf("%d %f", &e[i].id , &e[i].salary);
    }
    for(i=0;i<5;i++)
    {
        printf("\nEmployee %d => ID : %d Salary: %2f",i+1,e[i].id,e[i].salary);
    }
    return 0;

}