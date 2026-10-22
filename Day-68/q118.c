#include <stdio.h>

int main() {
    int arr[100], n, i;
    int totalSum, arraySum = 0, missing;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arraySum = arraySum + arr[i];
    }

    totalSum = n * (n + 1) / 2;

    missing = totalSum - arraySum;

    printf("Missing number = %d\n", missing);

    return 0;
}
