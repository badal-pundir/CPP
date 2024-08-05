#include <iostream>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n) {
    int i = m - 1, j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (arr2[j] >= arr1[i]) {
            arr1[k--] = arr2[j--];
        } else {
            arr1[k--] = arr1[i--];
        }
    }

    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
}

int main() {
    int arr1[10] = {1, 3, 6, 0, 0, 0};
    int m = 3;

    int arr2[] = {2, 8, 9};
    int n = 3;

    mergeSortedArrays(arr1, m, arr2, n);

    // Print the merged array
    for (int i = 0; i < m + n; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
