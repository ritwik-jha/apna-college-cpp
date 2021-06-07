#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int hcf = -1;
    int n = max(a,b);
    int i = 1;
    for (i=1; i<n; i++){
        if (a%i==0 && b%i==0){
            hcf = max(i, hcf);
        }
    }

    cout << hcf << endl;
}