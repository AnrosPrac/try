#include <stdio.h>
#define IDEN(str1,roll_no,str2) {printf("name=%s\n",str1);\
printf("roll_no=%d\n",roll_no);\
printf("department=%s\n",str2);}
int main() {
char name[20],dep[10];
int roll_no;

    printf("enter the name,roll_no and department:\n");
    scanf("%s %d %s",name,&roll_no,dep);
IDEN(name,roll_no,dep);
    
}