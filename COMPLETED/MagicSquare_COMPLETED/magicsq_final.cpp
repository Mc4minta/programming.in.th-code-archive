#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int a[n][n]{},i,j;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            cin >> a[i][j];
            if (a[i][j] > (n*n)){
                cout << "No"; return 0;
            }
        }
    }
    
    bool yes=true;
    int d1=0,d2=0;
    for (int i=0; i<n; i++){
        d1+=a[i][i];
        d2+=a[i][n-1-i];
    }

    if (d1 != d2){
        yes=false;
    }

    
    for (int i=0; i<n; i++){
        int row=0,col=0;
        for (int j=0; j<n; j++){
            row+=a[i][j];
            col+=a[j][i];
        }
        if (row != col or row!=d1){
            yes=false;
        }
    }

    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            if (a[i][j] == a[i+1][j] or a[j][i] == a[j][i+1]){
                cout << "No"; return 0;
            }
        }
    }

    if (yes){
        cout << "Yes";
    }else{
        cout << "No"; 
    }

    return 0;

}