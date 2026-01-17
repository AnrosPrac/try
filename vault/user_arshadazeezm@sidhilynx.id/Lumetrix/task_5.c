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
    printf("Monday: %s\n", student1.Mon ? "Present" : "Absent");
    printf("Tuesday: %s\n", student1.Tue ? "Present" : "Absent");
    printf("Wednesday: %s\n", student1.Wed ? "Present" : "Absent");
    printf("Thursday: %s\n", student1.Thu ? "Present" : "Absent");
    printf("Friday: %s\n", student1.Fri ? "Present" : "Absent");

    return 0;
}