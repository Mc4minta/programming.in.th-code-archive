#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int num[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> num[i][j];
        }
    }

    bool yes = true;
    int row,col; int sum=0;
    for (row=0; row<n; row++){
        sum+=num[row][0];
    }
    for (row=0; row<n; row++){
        int temp=0;
        for (col=0; col<n; col++){
            temp+=num[row][col];
        }
        if (temp != sum){
            cout << "No"; return 0;
        }
    }

    for (col=0; col<n; col++){
        int temp=0;
        for (row=0; row<n; row++){
            temp+=num[row][col];
        }
        if (temp != sum){
            cout << "No"; return 0;
        }
    }

    int temp=0;
    for (int i=0; i<n; i++){
        temp+=num[i][i];
    }

    if (temp != sum){
        cout << "No"; return 0;
    }

    cout << "Yes";
}
