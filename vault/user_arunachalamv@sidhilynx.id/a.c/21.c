#include <stdio.h>
int main() {
    int m1, m2, m3, avg, grade_case;
    char grade;
    scanf("%d%d%d", &m1, &m2, &m3);
    avg = (m1 + m2 + m3) / 3;
    if (avg >= 50)
        printf("Pass\n");
    else
        printf("Fail\n");
    if (avg >= 90)
        grade_case = 1;
    else if (avg >= 75)
        grade_case = 2;
    else if (avg >= 50)
        grade_case = 3;
    else
        grade_case = 4;
  switch (grade_case) {
        case 1: grade = 'A'; break;
        case 2: grade = 'B'; break;
        case 3: grade = 'C'; break;
        case 4: grade = 'F'; break;
    }
    printf("Grade=%c\n", grade);
    return 0;
}
