#include<iostream>
using namespace std;

// getting bit at ith position
int getBit(int n, int i){
    return (n & 1<<i);
}

int setBit(int n, int i){
    return (n | 1<<i);
}

int clearBit(int n, int i){
    int mask = ~(1<<i);
    return (n & mask);
}

int main(){
    int n = 1110;
    int i = 1;

    cout << getBit(n, i)<<endl;
    cout << setBit(n, i)<<endl;
}