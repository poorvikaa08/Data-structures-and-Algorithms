#include<iostream>
using namespace std;

void selection_sort(int arr[], int size){

    for(int i = 0; i < (size-1); i++ ){
        int minIndex = i;         // Assume 0th index element is minimun

        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;      // change it to j
        }
        swap(arr[minIndex],arr[i]);
    }

}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}


int main(){
    int arr[100], size, key;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Input " << size << " elements into the array : ";

    for(int i=0; i < size; i++){
        cin >> arr[i];
    }
    
    cout << "Array: ";
    printArray(arr, size);

    cout << "Sorted Array :" ;
    selection_sort(arr, size);
    printArray(arr, size);

    return 0;
}