#include<iostream>
#include<string>
using namespace std;

void stringRev(string s){
    if (s.length() == 0){
        return;
    }
    string sub = s.substr(1);
    stringRev(sub);
    cout << sub[0] << endl;
}

int main(){
    string s;
    cin >> s;

    stringRev(s);
}