#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
     int a[n];

     for (int i=0; i<n; i++){
         cin >> a[i];
     }

     int maxLen = 2;
     int currLen = 2;
     int pd = a[1]-a[0];

     for (int i= 2; i<n; i++){
         if (pd==a[i]-a[i-1]){
             currLen++;
         }
         else{
             currLen = 2;
         }
         pd = a[i]-a[i-1];
         maxLen = max(maxLen, currLen);
     }

     cout << maxLen << endl;
}