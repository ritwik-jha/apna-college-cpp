#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    cin >> a >> b;
    // instead of sending the values of the variables we send the address of the varibales using pointers 
    swap(&a,&b);
    cout << a << " " << b;
}