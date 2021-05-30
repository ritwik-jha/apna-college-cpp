#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int lastDigit;
    int newNum=0;

    while(n>0){
        lastDigit = n%10;
        newNum = newNum + lastDigit*8;
        n = n/10;
    }

    cout << newNum;

}