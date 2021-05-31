#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int arr_max = INT_MIN;
    int arr_min = INT_MAX;

    for (int i=0; i<n; i++){
        arr_max = max(arr_max, arr[i]);
        arr_min = min(arr_min, arr[i]);
    }

    cout << arr_max << "   " << arr_min << endl;
}