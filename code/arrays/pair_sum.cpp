#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    cin >> k;

    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int st = 0; // starting pointer
    int en = n-1; // ending pointer

    while (st < en){
        if (arr[st]+arr[en] == k){
            cout << arr[st] << " " << arr[en] << endl;
            break;
        }
        else if(arr[st]+arr[en] < k){
            st++;
        }
        else{
            en--;
        }
    }



}