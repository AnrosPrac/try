#include <stdio.h>

int finder(int *a,int *b){
    int c = *a;
    int d = *b;
    printf("%d %d\n",c,d);
    if(c > d){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int a ,b;
    printf("Enter two numbers : \n");
    
    if (scanf("%d", &a) != 1) {
        return 1;
    }
    if (scanf("%d", &b) != 1) {
        return 1;
    }
    
    int res = finder(&a,&b);
    
    printf("Result of comparison (1 if first > second, 0 otherwise): %d\n", res);
    
    return 0;
}