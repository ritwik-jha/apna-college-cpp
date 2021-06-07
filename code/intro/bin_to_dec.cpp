#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    int oringN = n;
    int dec = 0;
    int lastDigit;
    while (n>0){
        lastDigit = n%10;
        dec = dec*2 + lastDigit;
        n = n/10;
    }
    cout << oringN << " in decimal form: " << dec;
    return 0;
}