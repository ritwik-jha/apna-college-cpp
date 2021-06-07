#include<iostream>
#include<string>
#include<climits>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int arr[26] = {0};
    
    for (int i=0; i < s.length(); i++){
        int index = s[i] - 97;
        arr[index] += 1;
    }

    int maxCount = 0;
    char ans;
    int j = 0;
    for(j=0; j<26; j++){
        if (maxCount < arr[j]){
            maxCount = max(maxCount, arr[j]);
            ans = 'a' + j;
        }
    }
    string alphaStr = "abcdefghijklmnopqrstuvwxyz";
    cout << ans << endl;
    cout << maxCount << endl; 
}