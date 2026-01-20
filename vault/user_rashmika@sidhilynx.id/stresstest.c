#include <stdio.h>

int main() {
    float basic_salary;
    float da;
    float hra;
    float gross_salary;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    da = 0.40 * basic_salary;
    hra = 0.20 * basic_salary;
    gross_salary = basic_salary + da + hra;

    printf("Basic Salary: %.2f\n", basic_salary);
    printf("Dearness Allowance (DA): %.2f\n", da);
    printf("House Rent Allowance (HRA): %.2f\n", hra);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}

#include <stdio.h>

int main() {
    float length;
    float breadth;
    float area;
    float perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}

#include <stdio.h>

int main() {
    int marks1;
    int marks2;
    int marks3;
    int total_marks;
    float average_marks;

    printf("Enter marks obtained in subject 1: ");
    scanf("%d", &marks1);

    printf("Enter marks obtained in subject 2: ");
    scanf("%d", &marks2);

    printf("Enter marks obtained in subject 3: ");
    scanf("%d", &marks3);

    total_marks = marks1 + marks2 + marks3;
    average_marks = (float)total_marks / 3;

    printf("Total Marks: %d\n", total_marks);
    printf("Average Marks: %.2f\n", average_marks);

    return 0;
}

#include <stdio.h>

int main() {
    float radius;
    float diameter;
    float circumference;
    float area;
    const float PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}

#include <stdio.h>

int main() {
    int hours_worked;
    float hourly_wage;
    float total_salary;

    printf("Enter the number of hours worked: ");
    scanf("%d", &hours_worked);

    printf("Enter the hourly wage: ");
    scanf("%f", &hourly_wage);

    total_salary = (float)hours_worked * hourly_wage;

    printf("Total Salary: %.2f\n", total_salary);

    return 0;
}