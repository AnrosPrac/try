#include <stdio.h>
void sortArray(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = 0; j < n - i - 1; j++) 
        {
            if(arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float findMean(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return (float)sum / n;
}

float findMedian(int arr[], int n)
{
    sortArray(arr, n);
    if(n % 2 == 0)
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    else
        return arr[n/2];
}

int findMode(int arr[], int n) {
    int maxCount = 0, mode = arr[0];
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == arr[i])
                count++;
        }
        if(count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main()
{
    int n, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    float mean = findMean(arr, n);
    float median = findMedian(arr, n);
    int mode = findMode(arr, n);

    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    printf("Mode: %d\n", mode);

    return 0;
}