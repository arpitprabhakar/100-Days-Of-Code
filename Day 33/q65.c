//Search in a sorted array using binary search.
//  output:Found at index 3

#include <stdio.h>
int main() {    
    int n, i, target;
    int found = 0; 
    printf("Enter the number of elements in the array: ");
    int arr[100]; 
    printf("Enter the number of elements (max 100): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (n <= 0 || n > 100) {
        printf("Number of elements must be between 1 and 100.\n");
        return 1;
    }
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            found = 1; // Element found
            printf("Found at index %d\n", mid);
            break;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if(!found) {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}