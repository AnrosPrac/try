/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void square(int *n){
    int a = *n;
    *n = a*a;
}

int main()
{
    
    int given ;
    printf("Enter a number : \n");
    scanf("%d",&given);
    square(&given);
    printf("The square root of the gioven number is %d",given);
    
    return 0;
}
