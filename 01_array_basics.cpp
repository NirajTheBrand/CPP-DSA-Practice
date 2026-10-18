#include <iostream>
using namespace std;

// Function to find maximum element in an array
int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int numbers[] = {12, 45, 67, 23, 89, 34};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int maxNum = findMax(numbers, size);
    cout << "Maximum element in array is: " << maxNum << endl;

    return 0;
}
