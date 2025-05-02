//problem 05. Anagram string
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int count[26] = {0};

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    for (int i = 0; s1[i]!='\0'; i++) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Strings are Anagrams\n");
    return 0;
}
