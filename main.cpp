#include <iostream>
using namespace std;

// function to print array
void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

// function to heapify array
void heapify(int array[], int size, int i) {
    int larger_idx = i;
    int left_idx = 2 * i + 1;
    int right_idx = 2 * i + 2;

    // left child is larger than root
    if ((left_idx < size) && (array[left_idx] > array[larger_idx])) {
        larger_idx = left_idx;
    }

    // right child is larger than root
    if ((right_idx < size) && (array[right_idx] > array[larger_idx])) {
        larger_idx = right_idx;
    }

    // root is not the largest
    if (larger_idx != i) {
        swap(array[i], array[larger_idx]);
        heapify(array, size, larger_idx);
    }
}

// function to sort array by heap sort algorithm
void heap_sort(int array[], int size) {
    // build heap
    for (int i = size/2 - 1; i >= 0 ; i--) {
        heapify(array, size, i);
    }

    // extract an element one by one from heap
    for (int i = size - 1; i > 0 ; i--) {
        // move current root to end
        swap(array[0], array[i]);

        // call max heapify on the reduced heap
        heapify(array, i, 0);
    }
}

int main() {
    int array[] = {4, 10, 1, 12, 11, 13, 5, 6, 8};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Input array: ";
    print_array(array, size);

    heap_sort(array, size);

    cout << "Sorted array: ";
    print_array(array, size);

    return 0;
}
