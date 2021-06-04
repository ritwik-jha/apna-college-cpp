#include<iostream>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    int a[n][m];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (a[i][j]==k){
                cout << "element found at row " << i << " and column " << j << endl;
            }
        }
    }

}