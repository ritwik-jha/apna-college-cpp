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

    bool check[n];
    for (int i=0; i<n; i++){
        check[i] = false;
    }

    for (int i=0; i<n; i++){
        if (arr[i] > 0){
            check[arr[i]] = true;
        }
    }

    for (int i=0; i<n; i++){
        cout << check[i] << " ";
    }

    cout << endl;

    for(int i =1; i<n; i++){
        if (check[i]==false){
            cout << i << endl;
            break;
        }
    }
}