#include<iostream>
using namespace std;

bool checkSort(int arr[], int n, int i){
    if (i==n){
        return true;
    }

    bool restArray = checkSort(arr, n, i+1);
    return (arr[i]<arr[i+1] && restArray);

}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << checkSort(arr, n, 0);
}