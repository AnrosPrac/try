#include<stdio.h>
int main()

{
    float m1,m2,m3;
    float ave;
    
    printf("Enter Mark 1 : ");
    scanf("%d",&m1);
    
    printf("Enter Mark 2 : ");
    scanf("%d",&m2);
    
    printf("Enter Mark 3 : ");
    scanf("%d",&m3);
    
    ave=(m1+m2+m3)/3;
    printf("Average = %f\n",ave);
    
    if(ave>=50)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    char Grade;
    switch((int)(ave/10))
    {
    case 9:
    case 8:
        Grade = 'A';
        break;
    case 7:
    case 6:
        Grade = 'B';
        break;
    case 5:
    case 4:
        Grade = 'C';
        break;
    default:
        Grade = 'F';
    }
    printf("Grade = %c\n",Grade);
    return 0 ;
}