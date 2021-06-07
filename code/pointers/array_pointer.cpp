#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    // &arr == arr 
    // *arr = 1
    // arr is an indexing pointer ie. arr+1 points to second element of arr
    // *(arr+1) will give the value of second index
    cout << arr+1 << " ";

    //for loop to print the elements of the arr
    for (int i=0; i<5; i++){
        cout << *(arr+i) << " ";
    }

    cout << endl;

    // for loop to print the memory addresses of all the elements of array
    for (int i=0; i<5; i++){
        cout << arr+i << " ";
    }
}