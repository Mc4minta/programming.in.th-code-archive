#include<bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // input zone
    int i,j;
    int m,n; cin >> m >> n;
    char table[m][n];
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            cin >> table[i][j];
            tolower(table[i][j]);
        }
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            cout << table[i][j];
        }
        cout << '\n';
    }
    
    
    
    

    

    
}