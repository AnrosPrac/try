#include <stdio.h>
#include <time.h>

int main() {
    FILE *fp;
    char user[50], action[100];
    time_t t;
    struct tm *tm_info;
    char timeStr[30];

    printf("Username: ");
    scanf("%s", user);
    printf("Action: ");
    scanf("%s", action);

    t = time(NULL);
    tm_info = localtime(&t);
    strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", tm_info);

    fp = fopen("activity.log", "a");
    if (!fp) {
        printf("Cannot open log file\n");
        return 1;
    }
    fprintf(fp, "%s | %s | %s\n", timeStr, user, action);
    fclose(fp);

    printf("Activity logged\n");
    return 0;
}
