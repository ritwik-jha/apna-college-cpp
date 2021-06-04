#include<iostream>
using namespace std;

int main(){
    char a[100];
    int n;
    cin >> n;
    cin.ignore();
    cin.getline(a,n);
    cin.ignore();

    int currLen = 0;
    int maxLen = 0;
    for (int i=0; i<n; i++){
        if (a[i] != ' '){
            currLen += 1;
        }
        else{
            maxLen = max(maxLen,currLen);
            currLen = 0;
        }
    }

    cout << maxLen;
}