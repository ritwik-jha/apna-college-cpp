#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    while (n != 0){
        
        n = n & (n-1);
        count++;
    }

    // and between n and n-1 removes the rightmost 1 from n and we continue this untill n becomes 0

    cout << count << endl;
}