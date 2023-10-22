#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int row,col; cin >> row >> col;
    char a[row+1][col+1];
    int i,j;
    for (i=1; i<=row; i++){
        for (j=1; j<=col; j++){
            cin >> a[i][j];
        }
    }

    int b[col+1];
    for (i=1; i<=col; i++) cin >> b[i];

            // brick zone
        for (j=1; j<=col; j++){
            for (int x=0; x<b[j]; x++){
                bool clear = true;
                for (i=1; i<=row; i++){
                    if (a[i][j] != '.'){
                        a[i-1][j] = '#'; clear = false; break;
                    }
                }
                if (clear){
                    a[row][j] = '#';
                }
            }
        }


    // output zone
    //cout << '\n';
    for (i=1; i<=row; i++){
        for (j=1; j<=col; j++){
            cout << a[i][j];
        }
        cout << '\n';
    }
    // for (i=1; i<=col; i++) cout << b[i] << " ";
}