#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i < size; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int binarySearch(int arr[], int size, int key){
    int start = 0, end = size - 1; 
    int mid = start + (end-start)/2;          // start+end/2 could lead to run time error 

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        
        if(key > arr[mid]){     //go to right part
            start = mid + 1;
        }else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;    
    } 
    return -1;
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

    cout << "Enter the key element: ";
    cin >> key;

    int index = binarySearch(arr, size, key);

    if (index == -1){
        cout << "Key doesn't exist" << endl;
    }else {
        cout << "Search successful, key element exists in the array at position " << index << endl;
    }
    return 0;
}