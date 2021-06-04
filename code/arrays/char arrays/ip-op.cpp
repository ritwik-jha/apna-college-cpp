#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char a[n+1];

    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}