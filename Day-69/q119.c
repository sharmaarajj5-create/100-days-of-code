#include <stdio.h>

int main() {
    int arr[100], n;
    int count[1000] = {0};
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        count[arr[i]]++;

        if(count[arr[i]] == 2) {
            printf("Repeated element = %d\n", arr[i]);
            return 0;
        }
    }

    return 0;
}

