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
    int r = 0;
    int c = m-1;
    while (r>=0 && c>=0){
        cout << a[r][c] << endl;
        if (a[r][c]==k){
            cout << "number found at row "<< r << "and column " << c << endl;
            break;
        }
        else if (a[r][c] > k){
            c--;
        }
        else {
            r++;
        }
    }

}