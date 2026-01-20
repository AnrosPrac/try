#include <stdio.h>
int main()
{int a, b, c;
    float avg;
    char grade;
    printf("Enter the values of a,b,c:");
    scanf("%d %d %d", &a, &b, &c);
    avg=(a+b+c)/3;
    printf("Avg=%f\n",avg);
    if (avg>=50)
    {printf("Pass\n");}
    else{printf("Fail\n");}
    if((avg>=90) && (avg<=100))
    grade=1;
    else if((avg>=75) && (avg<=89))
    grade=2;
    else if((avg>=50) && (avg<=74))
    grade=3;
    else grade=4;
    switch(grade){ case 1:
    printf("Grade:A");
    break;
    case 2:
    printf("Grade:B");
    break;
    case 3:
    printf("Grade:C");
    break;
    case 4:
    printf("Grade:F");
    break;
    default:
    printf("Invalid grade");
    }
    return 0;
}