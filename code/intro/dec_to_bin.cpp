#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dec_bin(int n){
    int counter = 0;
    int newNum = 0;
    while (n>0){
        int quo = n%2;
        float gradient = pow(10, counter);
        newNum = newNum + quo*gradient;
        n = n/2;
        counter++;
    }

    return newNum;
}

int main(){
    int n;
    cin >> n;

    cout << dec_bin(n);

    return 0;

}