#include <stdio.h>

int main() {
    int a[100], n, i, x;
    int low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == x) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(x > a[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
