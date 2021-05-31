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

int bin_dec(int n){
    int dec = 0;
    int lastDigit;
    int counter = 0;
    while (n>0){
        lastDigit = n%10;
        float gradient = pow(2, counter);
        dec = dec + lastDigit*gradient;
        n = n/10;
    }

    return dec;
}

int main(){
    int n1 , n2;
    cin >> n1 >> n2;

    int dec1 = bin_dec(n1);
    int dec2 = bin_dec(n2);

    int sum_ = dec1 + dec2;
    cout << bin_dec(n1) << bin_dec(n2) << endl;
    cout << dec_bin(sum_) << endl;
}