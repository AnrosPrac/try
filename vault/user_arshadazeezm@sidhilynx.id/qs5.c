#include <stdio.h>

int addition(int x,int y);
int multiplication(int x,int y);
int subtraction(int x,int y);
int division(int x,int y);
int modulus(int x,int y);

int main()
{
    int a,b,m;  
    int op;
    printf("Enter a number : \n");
    scanf("%d",&a);
    printf("Enter a number : \n");
    scanf("%d",&b);
    printf("Enter the operation (0->add,1->sub,3->mul,2->div,4->modulus): \n");
    scanf("%d",&op);
    if(op == 0){
        m = addition(a,b);
        printf("%d\n",m);
    }
    else if (op == 1){
        m = subtraction(a,b);
        printf("%d\n",m);
    }
    else if(op == 3){
        m = multiplication(a,b);
        printf("%d\n",m);
    }
    else if (op == 2){
        if (b != 0) {
            m = division(a,b);
            printf("%d\n",m);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else if(op == 4){
        if (b != 0) {
            m = modulus(a,b);
            printf("%d\n",m);
        } else {
            printf("Error: Modulus by zero is not allowed.\n");
        }
    }
    else {
        printf("Unsupported format !\n");
    }
    
    return 0;
}

int addition(int x,int y ){
    return x + y;
}

int subtraction(int x,int y){
    return x - y;
}

int multiplication(int x,int y){
    return x*y;
}

int division (int x,int y){
    return x/y;
}

int modulus(int x,int y){
    return x%y;
}
