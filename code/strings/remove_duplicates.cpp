#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    string tar;
    int index = 0;
    for (int i=0; i<s.length(); i++){
        for (int j=i+1; j<s.length(); j++){
            if (s[i]==s[j]){
                s.erase(j,1);
            }
        }
    }

    cout << s << endl;
}