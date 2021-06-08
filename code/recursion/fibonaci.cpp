#include<iostream>
using namespace std;

int fib(int n){
    if (n==0 || n==1){
        return n;
    }

    int currentInt = fib(n-1) + fib(n-2);
    return currentInt;
}

int main(){
    int n;
    cin >> n;

    cout << fib(n);
}