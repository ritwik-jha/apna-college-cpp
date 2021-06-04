#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    // using new matrix 
    // space complexity => O(n)
    int trans_a[n][n];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            trans_a[i][j] = a[j][i];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << trans_a[i][j] << " ";
        }
        cout << endl;
    }

    // without using separate matrix
    // space complexity => O(1)
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << trans_a[i][j] << " ";
        }
        cout << endl;
    }

}