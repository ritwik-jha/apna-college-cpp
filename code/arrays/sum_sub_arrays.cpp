#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum_;
    for (int i=0; i<n; i++){
        sum_ = 0;
        for (int j=i; j<n; j++){
            sum_ = sum_ + arr[j];
            cout << sum_ << endl;
        }
        cout << endl;
    }
}