#include <stdio.h>

int main() {
    int a[100], n, i, j;
    int leftSum, rightSum;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        leftSum = 0;
        rightSum = 0;

        for(j = 0; j < i; j++) {
            leftSum = leftSum + a[j];
        }

        for(j = i + 1; j < n; j++) {
            rightSum = rightSum + a[j];
        }

        if(leftSum == rightSum) {
            pivot = i;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}
