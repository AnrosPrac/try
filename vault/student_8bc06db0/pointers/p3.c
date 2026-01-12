#include <stdio.h>

int add(int *a,int *b,int *sum){
    int c = *a;
    int d = *b;
   *sum = c+d;
    
   
}

int main()
{
    int a ,b,sum=0;
    printf("Enter a numbers : \n");
    scanf("%d",&a);
     printf("Enter a numbers : \n");
    scanf("%d",&b);
    
    add(&a,&b,&sum);
    
    printf("%d",sum);
    
   
  
    return 0;
}