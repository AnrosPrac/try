#include <stdio.h>
int main(){
    int choice,a,b;
    printf("Menu:1.Add 2.Subtract 3.Multiply 4.Divide 5.Modulus\n");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(choice==1) printf("%d\n",a+b);
    else if(choice==2) printf("%d\n",a-b);
    else if(choice==3) printf("%d\n",a*b);
    else if(choice==4) b!=0?printf("%d\n",a/b):printf("Cannot divide by zero\n");
    else if(choice==5) b!=0?printf("%d\n",a%b):printf("Cannot divide by zero\n");
    else printf("Invalid choice\n");
    return 0;
}
