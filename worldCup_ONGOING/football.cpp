#include<bits/stdc++.h>
using namespace std;

struct info{
    string name;
    int p=0;
    int g;
    int lg;
};

int main(){
   ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n=4;
    struct info team[n];
    int i,j;
    for (i=0; i<n; i++) cin >> team[i].name;

    int input[n][n];

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            cin >> input[i][j];

            team[i].p += input[i][j];
        }
    }
    
}