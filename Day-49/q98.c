#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("Name: ");

    printf("%c ", name[0]);

    for(i = 0; i < lastSpace; i++) {
        if(name[i] == ' ' && i + 1 < lastSpace) {
            printf("%c ", name[i + 1]);
        }
    }

    printf("%s\n", &name[lastSpace + 1]);

    return 0;
}
