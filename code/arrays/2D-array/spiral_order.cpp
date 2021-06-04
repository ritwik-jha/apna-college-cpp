#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    int row_s = 0;
    int row_e = n-1;
    int col_s = 0;
    int col_e = m-1;

    for (int i=col_s; i<=col_e; i++){
        cout << a[row_s][i] << " ";
    }
    row_s++;
}