#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i = 0;

    printf("Enter a string: ");
    gets(str); // Or use fgets(str, 100, stdin);

    while(str[i] != '\0') {
        length++;
        i++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
