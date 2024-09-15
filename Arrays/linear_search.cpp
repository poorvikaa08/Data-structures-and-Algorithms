#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }       
    }
    return 0;
}

int main(){

    int arr[10] = {23, 27, 64, -97, 35, 64, 58, 25, -35, 65};

    // int arr[100];
    // int size;

    // cin >> size;

    // for(int i=0; i<size; i++){
    //     cin >> arr[i];
    // }

    int key;
    cout << "Enter the key element to be searched: ";
    cin >> key;

    bool found = search(arr, 10, key);
    if(found){
        cout << "Search passed, key is present" << endl;
    } else{
        cout << "Search failed, key is absent" << endl;
    }

    return 0;
}