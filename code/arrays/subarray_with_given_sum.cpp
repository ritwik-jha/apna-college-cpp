  #include<iostream>
  using namespace std;

  int main(){
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i=0; i<n; i++){
      cin >> a[i];
    }

    int csum[n+1];
    csum[0] = a[0];
    for (int i=1; i<n; i++){
      csum[i] = csum[i-1] + a[i];
    }

    for (int i=0; i<n; i++){
      cout << csum[i] << " ";
    }

    cout << endl;
    
    int st = 0;
    int en = 1;
    while(st < en){
        if (csum[en]-csum[st]==k){
            cout << st+1 << " " << en << endl;
            break;
        }
        else if (csum[en]-csum[st]>k){
            st++;
        }
        else{
            en++;
        }
    }
  }