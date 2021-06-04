#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Shape of matrix A"<< endl;
    cin >> n >> m;

    int a[n][m];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    cout << "Shape of matrix B"<<endl;
    int p, q;
    int b[p][q];

    for (int i=0; i<p; i++){
        for (int j=0; j<q; j++){
            cin >> b[i][j];
        }
    }

    int res[n][q];

    for (int i=0; i<n; i++){
        for (int j=0; j<q; j++){
            for(int k=0; k<m; k++){
            res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    
}