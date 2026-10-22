#include <stdio.h>

int main() {
    int arr[100], n, k;
    int i, j, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    printf("Maximum elements: ");

    for(i = 0; i <= n - k; i++) {
        max = arr[i];

        for(j = i + 1; j < i + k; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    printf("\n");

    return 0;
}

