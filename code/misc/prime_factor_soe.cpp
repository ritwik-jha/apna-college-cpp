#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //creating a smallest prime factor array storing the smallest prime factor for each index
    int spf[n+1] = {0};

    // initiallizing the spf array with initiall assumption that each elemet is its own smallest prime factor
    for (int i=2; i<=n; i++){
        spf[i] = i;
    }

    //updating the spf such that every multiple of i in the range becomes has spf = i 

    for (int i=2; i<=n; i++){
        for (int j=i*i; j<=n; j += i){
            if (spf[j]==j){
            spf[j] = i;
            }
        }
    }

    for (int i=2; i<=n; i++){
        cout << spf[i] << " ";
    }

    // now we just put toghether the least prime factors for n and keep on updating n by dividing it with its smallest prime factor.
    

    cout << endl;
    while (n>1){
        cout << spf[n] << " ";
        n = n/spf[n];
    }
}