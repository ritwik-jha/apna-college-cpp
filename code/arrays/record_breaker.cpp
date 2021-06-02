#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n+2];
    for (int i=1; i<n+1; i++){
        cin >> arr[i];
    }
    arr[0]= 0;
    arr[n+1]=0;

    int maxVal = arr[0];
    int counter = 0;
    for (int i=1; i<n+1; i++){
        if (arr[i] > maxVal && arr[i]>arr[i+1]){
            counter++;
        }
        maxVal = max(maxVal, arr[i]);
    }

    cout << counter << endl;
}