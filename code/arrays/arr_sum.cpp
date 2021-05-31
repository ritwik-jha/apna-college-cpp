#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum_ = 0;

    for (int i=0; i<n; i++){
        sum_ = sum_ + arr[i];
    }

    cout << sum_ << endl;
}