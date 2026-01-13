#include <stdio.h>

void main()
{
    int a,b,c,res;
    printf("Enter the first number : \n");
    scanf("%d",&a);
     printf("Enter the second number : \n");
    scanf("%d",&b);
     printf("Enter the third number : \n");
    scanf("%d",&c);
    res = (a>b)?(a>c)?
        printf("%d is the greatest !",a):printf("%d is the greatest !",c):(b>c)?
        printf("%d is the greatest !",b):printf("%d is the greatest !",c);
  
}
