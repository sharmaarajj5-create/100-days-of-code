#include <stdio.h>

int main() {
    int n, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        binary = binary + (n % 2) * place;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary = %d\n", binary);

    return 0;
}
