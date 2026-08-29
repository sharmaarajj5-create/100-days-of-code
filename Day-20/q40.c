#include <stdio.h>

int main() {
    long long n, digit, place = 1, result = 0;

    printf("Enter binary number: ");
    scanf("%lld", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        result = result + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's Complement = %lld\n", result);

    return 0;
}
