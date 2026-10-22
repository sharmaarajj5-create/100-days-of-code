#include <stdio.h>

int main() {
    int arr[100], n, k;
    int i, j, sum, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    maxSum = 0;

    for(i = 0; i <= n - k; i++) {
        sum = 0;

        for(j = i; j < i + k; j++) {
            sum = sum + arr[j];
        }

        if(i == 0 || sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d\n", maxSum);

    return 0;
}
