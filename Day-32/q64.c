#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, i, max = 0, ans = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while(n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i <= 9; i++) {
        if(count[i] > max) {
            max = count[i];
            ans = i;
        }
    }

    printf("Most frequent digit = %d\n", ans);

    return 0;
}

