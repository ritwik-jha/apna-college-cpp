#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int k){
    if (n==i){
        return -1;
    }

    if (arr[i]==k){
        return i;
    }
    firstOcc(arr, n, i+1, k);

}

int lastOcc(int arr[], int n, int i, int k){
    if (i==0){
        return -1;
    }

    if (arr[i]==k){
        return i;
    }
    lastOcc(arr, n, i-1, k);
}

int main(){
    int n, k;
    cin >> n;
    
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    cin >> k;

    cout << firstOcc(arr, n, 0, k) << endl;
    cout << lastOcc(arr, n, n-1, k) << endl;
}