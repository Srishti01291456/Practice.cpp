#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow
        if (arr[mid] == key)
            return mid; // Element found
        if (arr[mid] < key)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }
    return -1; // Element not found
}
int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n]; // Declare an array of size n
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    int result = binarySearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
