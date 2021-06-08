#include<iostream>
using namespace std;

void DecTillN(int n){
    if (n==0){
        cout << 0 << endl;
        return;
    }
    cout << n << endl;
    return DecTillN(n-1);
}

void IncTillN(int n){
    if (n==0){
        cout << 0 << endl;
        return;
    }
    IncTillN(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;

    DecTillN(n);
    IncTillN(n);
}