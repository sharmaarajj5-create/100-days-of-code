#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;
    int maxLength = 0, length, repeat;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        length = 0;

        for(j = i; str[j] != '\0'; j++) {
            repeat = 0;

            for(k = i; k < j; k++) {
                if(str[k] == str[j]) {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1)
                break;

            length++;

            if(length > maxLength)
                maxLength = length;
        }
    }

    printf("Length = %d\n", maxLength);

    return 0;
}
