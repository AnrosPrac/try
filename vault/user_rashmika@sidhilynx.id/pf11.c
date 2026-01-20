#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void write_log(const char *username, const char *action) {
    FILE *fp = fopen("activity.log", "a");
    if (!fp) {
        perror("fopen");
        return;
    }
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char timestr[64];
    strftime(timestr, sizeof(timestr), "%Y-%m-%d %H:%M:%S", tm);
    fprintf(fp, "%s | %s | %s\n", timestr, username, action);
    fclose(fp);
}
int main(void) {
    char user[64], action[256];
    printf("Enter username: ");
    if (!fgets(user, sizeof(user), stdin)) return 1;
    user[strcspn(user, "\n")] = 0;
    printf("Enter action: ");
    if (!fgets(action, sizeof(action), stdin)) return 1;
    action[strcspn(action, "\n")] = 0;
    write_log(user, action);
    printf("Logged activity.\n");
    return 0;
}
