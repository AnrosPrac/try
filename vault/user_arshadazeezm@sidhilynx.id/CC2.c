#include <stdio.h>
#include <time.h>

int main()
{
    int birth_day,birth_mont,birth_year;
    int age;
    
    printf("Enter your date of birth (dd mm yyyy)  : \n");
    scanf("%d %d %d",&birth_day,&birth_mont,&birth_year);
    time_t t = time(NULL);
    struct tm current = *localtime(&t);
    
    int current_day = current.tm_mday;
    int current_month = current.tm_mon+1;
    int current_year = current.tm_year + 1900;
    age = current_year - birth_year;
    
    if(current_month<birth_mont || (current_month == birth_mont && current_day < birth_day)){
        age--;
    }
    printf("Your age is : %d",age);
    return 0;
}