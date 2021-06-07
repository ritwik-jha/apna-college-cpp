#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    s1.append(s2);
    cout << s1 << endl;


}