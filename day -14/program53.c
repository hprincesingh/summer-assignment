#include <stdio.h>

int main() {
    int arr[100], n, target;
    int found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Element found at index %d\n", found+1);
    else
        printf("Element not found\n");

    return 0;
}