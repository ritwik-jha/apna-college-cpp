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

    int cummSum[n];
    cummSum[0] = arr[0];
    for (int i = 1; i<n; i++){
        cummSum[i] = cummSum[i-1] + arr[i];
    }

    for (int i = 0; i<n; i++){
        cout << cummSum[i] << " ";
    }

    
}