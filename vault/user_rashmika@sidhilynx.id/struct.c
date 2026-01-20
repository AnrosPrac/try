#include <stdio.h>
struct student
{
    int rollno;
    char name[50];
    float marks;
};
int main()
{
    struct student s;
    
    printf("Enter Roll Number : ");
    scanf("%d",&s.rollno);
    
    printf("Enter Name : ");
    scanf("%s",s.name);
    
    printf("Enter Marks : ");
    scanf("%f",&s.marks);
    
    printf("\n_____________Student Details___________\n");
    
    printf("\nRoll Number  : %d",s.rollno);
    printf("\nName  : %s",s.name);
    printf("\nMarks  : %2f",s.marks);
    
    return 0;
}