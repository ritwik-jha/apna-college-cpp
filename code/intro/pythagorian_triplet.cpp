#include<iostream>
using namespace std;

void check_triplet(int x, int y, int z){
    int a = max(x, max(y,z));
    int b, c;
    if (a==x){
        b = y;
        c = z;
    }
    else if (a==y){
        b = x;
        c = z;
    }
    else {
        b = x;
        c = y;
    }

    if (a*a==b*b+c*c){
        cout << "Pythagorial triplet";
    }
    else {
        cout << "Not a pythagorial triplet";
    }
    cout << endl;
}

int main(){
    int x, y, z;
    cin >> x >> y >> z;

    check_triplet(x,y,z);

    return 0;
}