#include<iostream>
using namespace std;

int fact(int n){
    int fact_=1;
    for (int i=1; i<=n; i++){
        fact_ *= i;
    }

    return fact_;
}

int bin_coeff(int n, int r){
    float result=0;
    result = fact(n)/(fact(n-r)*fact(r));

    return result;
}

int main(){
    int n, r;
    cin >> n >> r;

    cout << bin_coeff(n,r);

    return 0;
}