#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *aptr = &a;
    int **q = &aptr;

    //           value      address
    //   a         5        0x61ff08
    //   aptr   0x61ff08    0x61ff04
    //   q      0x61ff04    
 
    cout << aptr << endl;
    cout << q << endl;
    cout << *q << endl;
    cout << **q << endl;
}