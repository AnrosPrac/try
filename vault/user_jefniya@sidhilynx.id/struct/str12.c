#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
void search(struct Student *s,int r){
    for(int i=0;i<3;i++){
        if(s[i].roll==r){
            printf("Roll: %d\nName: %s\nMarks: %.2f\n",s[i].roll,s[i].name,s[i].marks);
            return;
        }
    }
    printf("Student not found\n");
}
int main(){
    struct Student st[3];
    for(int i=0;i<3;i++){
        printf("Enter roll: ");
        scanf("%d",&st[i].roll);
        printf("Enter name: ");
        scanf("%49s",st[i].name);
        printf("Enter marks: ");
        scanf("%f",&st[i].marks);
    }
    int r;
    printf("Enter roll to search: ");
    scanf("%d",&r);
    search(st,r);
    return 0;
}
