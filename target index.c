// problem 01.Target index
#include <stdio.h>
int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = 0, last = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
             first = i-1;
            last = i+1;
        }
    }
        printf("First index: %d\n", first);
        printf("Last index: %d\n", last);
    
    return 0;
}
