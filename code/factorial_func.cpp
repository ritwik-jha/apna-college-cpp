#include<iostream>
using namespace std;

int fact(int n){
    int fact_=1;
    for (int i=1; i<=n; i++){
        fact_ *= i;
    }

    return fact_;
}

int main(){
    int n;
    cin >> n;

    cout << fact(n);
    return 0;
}