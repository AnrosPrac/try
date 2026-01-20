#include <stdio.h>
int main() {
    int n, i, key, found = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }
    if(found)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found\n");
    return 0;
}
