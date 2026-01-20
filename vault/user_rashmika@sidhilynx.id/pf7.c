#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int x;
    FILE *fp = fopen("array.txt", "w");
    for(int i=0; i<5; i++)
        fprintf(fp, "%d ", arr[i]);
    fclose(fp);
    fp = fopen("array.txt", "r");
    while(fscanf(fp, "%d", &x) != EOF)
        printf("%d \n", x);
    fclose(fp);
    return 0;
}