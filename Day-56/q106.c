		#include <stdio.h>

int main() {
    int a[100], n, i, j;
    int nextGreater;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        nextGreater = -1;

        for(j = i + 1; j < n; j++) {
            if(a[j] > a[i]) {
                nextGreater = a[j];
                break;
            }
        }

        printf("%d ", nextGreater);
    }

    printf("\n");

    return 0;
}
