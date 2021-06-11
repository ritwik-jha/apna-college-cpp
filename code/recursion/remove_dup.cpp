#include<iostream>
#include<string>
using namespace std;

string removeDup(string s){
    if (s.length()==0){
        return "";
    }

    char firstEl = s[0];
    string rest = s.substr(1);

    if (firstEl == rest[0]){
        return removeDup(rest);
    }
    else{
        return firstEl + removeDup(rest);
    }
}

int main(){
    string s;
    cin >> s;

    cout << removeDup(s);
}