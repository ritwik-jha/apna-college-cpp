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
    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << bin_coeff(i,j) << " ";
        }
        cout << endl;
    }
}