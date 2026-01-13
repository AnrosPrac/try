#include <stdio.h>

int largest_number(int x,int y);

int main()
{
    int a,b;
    printf("Enter a number : \n");
    scanf("%d",&a);
     printf("Enter a number : \n");
    scanf("%d",&b);
    int sum =largest_number(a,b);
    printf("The grater number is %d",sum);

    return 0;
}

int largest_number(int x,int y){
    if(x>y){
        return x;
    }
    else{
         return y;
        
    }
}