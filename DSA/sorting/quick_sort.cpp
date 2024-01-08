#include <iostream>
#include <algorithm> // Include the <algorithm> header for std::swap
using namespace std;

void swap(int &a, int &b) { // Pass integers by reference to swap them
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int l, int r) {
    int pivot = arr[l];
    int i = l;
    int j = r;
    while (i < j) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]); // Swap pivot with arr[j]
    return j;
}

void quicksort(int arr[], int l, int r) {
    if (l < r) {
        int pivot = partition(arr, l, r);
        quicksort(arr, l, pivot - 1);
        quicksort(arr, pivot + 1, r);
    }
}

int main() {
    int arr[5] = {1, 3, 5, 2, 4};
    quicksort(arr, 0, 4);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
