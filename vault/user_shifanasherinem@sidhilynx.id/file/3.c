#include <stdio.h>
int main() {
FILE *file;
file = fopen("example.txt", "a");
if (file == NULL) {
printf("Error opening file!\n");
return 1;
}
const char *newData = "This is the new data to append.\n";
fprintf(file, "%s", newData);
fclose(file);
printf("Data appended successfully.\n");
return 0;}