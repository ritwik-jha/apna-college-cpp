#include<iostream>
using namespace std;

int main(){
    int n, lastDigit;
    cin >> n;
    int newNum = 0;

    while (n>0){
        lastDigit =  n%10;
        newNum = newNum*10 + lastDigit;
        n = n/10;
    }

    cout << newNum << endl;

    return 0;
}