#include <stdio.h>
struct student{
int roll_no;
char name[30];
float marks;
};
void search(struct student *s,int n,int roll){
for(int i=0;i<n;i++){
if(s[i].roll_no==roll){
printf("found:%s,roll:%d,marks:%.2f",s[i].name,s[i].roll_no,s[i].marks);
return;
}
}
printf("student not found!\n");
}
int main(){
struct student s[3];
int roll;
for(int i=0;i<3;i++){
printf("enter the roll,name,marks for student %d",i+1);
scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].marks);
}
printf("enter your roll number to search:");
scanf("%d",&roll);
search(s,3,roll);
return 0;
}
