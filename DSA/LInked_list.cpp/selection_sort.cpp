#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted portion
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Manually swap the found minimum element with the first element
        if (minIndex != i) {
            int temp = arr[i];      
            arr[i] = arr[minIndex]; 
            arr[minIndex] = temp;   
        }
    }
}

int main() {
    int arr[] = {9, 4, 7, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Call the selectionSort function
    selectionSort(arr, n);
    
    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
