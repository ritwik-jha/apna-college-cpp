#include<iostream>
using namespace std;

bool palindrome(int n,char a[]){
    for (int i=0; i<n; i++){
        if (a[i] != a[n-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    char a[n+1];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    if (palindrome(n,a)){
        cout << "palindrome" << endl;
    }
    else{
        cout << "Not palindrome" << endl;
    }
}