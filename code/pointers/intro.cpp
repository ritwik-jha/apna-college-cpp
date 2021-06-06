#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *aptr = &a;

    cout << aptr << endl;
    cout << *aptr << endl;
    cout << &a << endl;

    *aptr = 20;
    cout << a << endl;
    cout << &a << endl;
}