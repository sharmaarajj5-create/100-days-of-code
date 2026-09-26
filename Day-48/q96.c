#include <stdio.h>

int main() {
    char str[200];
    int i, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) {

        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            end = i - 1;

            while(start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }

        if(str[i] == '\0' || str[i] == '\n')
            break;
    }

    printf("Result: %s", str);

    return 0;
}
