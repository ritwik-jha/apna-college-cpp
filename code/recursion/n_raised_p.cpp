#include<iostream>
using namespace std;

int nTop(int n, int p){
    if (p==0){
        return 1;
    }

    return n*nTop(n,p-1);
}

int main(){
    int n, p;
    cin >> n >> p;

    cout << nTop(n,p);
}