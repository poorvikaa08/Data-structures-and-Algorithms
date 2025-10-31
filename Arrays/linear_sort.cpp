#include <iostream>
#include <vector>
#include <algorithm> // for max_element

using namespace std;

void countingSort(vector<int>& arr) {
    if (arr.empty()) return;

    // Find the maximum value in the array
    int maxVal = *max_element(arr.begin(), arr.end());

    // Create a count array to store occurrences
    vector<int> count(maxVal + 1, 0);

    // Count each element
    for (int num : arr) {
        count[num]++;
    }

    // Reconstruct the sorted array
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i]-- > 0) {
            arr[index++] = i;
        }
    }
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    countingSort(arr);

    cout << "Sorted array:   ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
