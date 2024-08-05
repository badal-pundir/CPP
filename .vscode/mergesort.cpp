#include<iostream>
using namespace std;

void merge(int arr1[], int arr2[], int size1, int size2) {
  int i = 0, j = 0, k = 0; // Initialize indices
  while (i < size1 && j < size2) {
    if (arr1[i] <= arr2[j]) { // Compare elements
      arr1[k++] = arr1[i++]; // Copy smaller element and increment both indices
    } else {
      int temp = arr1[i]; // Temporarily store larger element
      arr1[i++] = arr2[j++]; // Replace with smaller element and increment both indices
      // Shift remaining elements of arr1 one position to the right
      while (i < size1) {
        arr1[k++] = temp; // Insert stored element at the end
        temp = arr1[i++]; // Store next element for shifting
      }
    }
  }
  // Copy remaining elements of arr2 if any
  while (j < size2) {
    arr1[k++] = arr2[j++];
  }
}
/*
void merge(int arr1[], int arr2[], int size1, int size2) {
  int i = 0, j = 0, k = 0; // Initialize indices
  while (i < size1 && j < size2) {
    if (arr1[i] <= arr2[j]) { // Compare elements
      arr1[k++] = arr1[i++]; // Copy smaller element and increment both indices
    } else {
      int temp = arr1[i]; // Temporarily store larger element
      arr1[i++] = arr2[j++]; // Replace with smaller element and increment both indices
      // Shift remaining elements of arr1 one position to the right
      while (i < size1) {
        arr1[k++] = temp; // Insert stored element at the end
        temp = arr1[i++]; // Store next element for shifting
      }
    }
  }
  // Copy remaining elements of arr2 if any
  while (j < size2) {
    arr1[k++] = arr2[j++];
  }
}*/
int main(){
    // int arr1[] = {1, 3, 4, 6, 7};
    // int arr2[] = {2, 5, 8, 9, 10};

    // int size = 5;
    // int j= 0;
    // int k = 0;
    // for (int i = 0; i<size ; i++){

    //     if(arr1[j]<arr2[k]){
    //         cout << arr1[j] << " ";
    //         j += 1;
    //     }
    //     else{
    //         cout << arr2[k] << " ";
    //         k += 1;
    //     }
    // }

    // while(true){
    //     if(j<size){
    //     cout << arr1[j] << " ";
    //     j += 1;        
    //     continue;
    //     }
    //     if(k<size){
    //     cout << arr2[k] << " ";
    //     k += 1;
    //     continue;
    //     }
    //     if((j == size) & (k == size))
    //         break;
    // }
// Optimized code

/*
  int arr1[] = {1, 3, 4, 6, 7};
  int arr2[] = {2, 5, 8, 9, 10};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);

  merge(arr1, arr2, size1, size2);

  // Print the merged array
  for (int i = 0; i < size1 + size2; i++) {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;
*/
  int arr1[] = {1, 3, 4, 6, 7};
  int arr2[] = {2, 5, 8, 9, 10};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);

  merge(arr1, arr2, size1, size2);

  // Print the merged array
  for (int i = 0; i < size1 + size2; i++) {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}

