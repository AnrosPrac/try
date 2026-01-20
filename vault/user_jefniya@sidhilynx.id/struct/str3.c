#include<stdio.h>
struct Employee{
int id;
float salary;
};
int main(){
struct Employee emp[5];
int i;
for(i=0; i<5; i++){
printf("Enter employee details %d:\n",i+1);
printf("ID:");
scanf("%d", &emp[i].id);
printf("Salary:");
scanf("%f", &emp[i].salary);
printf("\n");
}
for(i=0; i<5; i++){
printf("Employee %d:\n", i+1);
printf("ID :%d\n",emp[i].id );
printf("Salary : %.2f\n",emp[i].salary);
}
return 0;
}