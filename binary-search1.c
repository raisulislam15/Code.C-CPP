#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target, int i) {
    while (left <= right) {
          i++;
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    printf("Welcome to the Binary Search Program!\n");

    int size;
    printf("Enter the size of the array (at least 10): ");
    scanf("%d", &size);

    if (size < 10) {
        printf("Array size should be at least 10.\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d sorted integers: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target value to search for: ");
    scanf("%d", &target);

    int iterations = 0;
    int result = binarySearch(arr, 0, size - 1, target, &iterations);

    printf("\nOriginal Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nTarget Value: %d\n", target);

    if (result != -1) {
        printf("Binary Search Result: Element %d found at index %d.\n", target, result);

    } else {
        printf("Binary Search Result: Element %d not found in the array.\n", target);
    }
    return 0;
}
