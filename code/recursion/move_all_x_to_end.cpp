#include<iostream>
#include<string>
using namespace std;

string moveX(string s){
    if (s.length()==0){
        return "";
    }

    char firstEl = s[0];

    if (firstEl == 'x'){
        return moveX(s.substr(1))+firstEl;
    }
    else{
        return firstEl+moveX(s.substr(1));
    }

}

int main(){
    string s;
    cin >> s;
    cout << moveX(s);
}