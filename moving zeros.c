//problem 03.moving zeros
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
        int j = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] != 0){
            arr[j++] = arr[i];
        }
    }
    
    while (j < n){
        arr[j++] = 0;
    }

    printf("Array after moving zeros:\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
