#include <stdio.h>
int main() {
    FILE *fp = fopen("file/records.txt", "r");
    if(fp == NULL) {
        printf("records.txt not found.\n");
        return 1;
    }
    int n, count = 1;
    char line[200];
    printf("Enter record (line) number: ");
    scanf("%d", &n);
    while(fgets(line, sizeof(line), fp)) {
        if(count == n) {
            printf("Record %d: %s\n", n, line);
            break;
        }
        count++;
    }
    fclose(fp);
    return 0;
}
