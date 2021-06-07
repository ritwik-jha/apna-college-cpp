#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int lastDigit;
    int newNum=0;
    int counter = 0;

    while(n>0){
        lastDigit = n%10;
        newNum = newNum + lastDigit*pow(8, counter);
        n = n/10;
        counter++;
    }

    cout << newNum;

}