#include <stdio.h>

struct Attendance {
    unsigned int Mon : 1;
    unsigned int Tue : 1;
    unsigned int Wed : 1;
    unsigned int Thu : 1;
    unsigned int Fri : 1;
};

int main() {
    struct Attendance student1;

    student1.Mon = 1;
    student1.Tue = 0;
    student1.Wed = 1;
    student1.Thu = 1;
    student1.Fri = 0;

    printf("Student 1 Attendance:\n");

    if (student1.Mon) {
        printf("Monday: Present\n");
    } else {
        printf("Monday: Absent\n");
    }

    if (student1.Tue) {
        printf("Tuesday: Present\n");
    } else {
        printf("Tuesday: Absent\n");
    }

    if (student1.Wed) {
        printf("Wednesday: Present\n");
    } else {
        printf("Wednesday: Absent\n");
    }

    if (student1.Thu) {
        printf("Thursday: Present\n");
    } else {
        printf("Thursday: Absent\n");
    }

    if (student1.Fri) {
        printf("Friday: Present\n");
    } else {
        printf("Friday: Absent\n");
    }

    return 0;
}