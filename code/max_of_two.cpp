#include<iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    if(m > n){
        cout << m;
    }
    else if (n > m){
        cout << n;
    }
    else{
        cout << "equal";
    }
}