#include <stdio.h>

int main() {
    int a[100], n, i, j;
    int previousGreater;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        previousGreater = -1;

        for(j = i - 1; j >= 0; j--) {
            if(a[j] > a[i]) {
                previousGreater = a[j];
                break;
            }
        }

        printf("%d ", previousGreater);
    }

    printf("\n");

    return 0;
}

