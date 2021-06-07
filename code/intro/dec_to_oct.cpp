#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dec_oct(int n){
    int counter = 0;
    int newNum = 0;
    while (n>0){
        int quo = n%8;
        float gradient = pow(10, counter);
        newNum = newNum + quo*gradient;
        n = n/8;
        counter++;
    }

    return newNum;
}

int main(){
    int n;
    cin >> n;

    cout << dec_oct(n);

    return 0;

}