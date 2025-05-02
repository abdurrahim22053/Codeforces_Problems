//problem no.03 missing number
#include <stdio.h>
int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int arr[n - 1], sum = 0;

    printf("Enter %d numbers from 1 to %d (one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++){
        sum =sum+arr[i];
    }

    int total = n * (n + 1) / 2;
    printf("Missing number is: %d\n", total - sum);

    return 0;
}
