#include <stdio.h>

struct Student {
    char name[50];
    int id;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter student ID: ");
    scanf("%d", &s.id);

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Name : %s\n", s.name);
    printf("ID   : %d\n", s.id);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
