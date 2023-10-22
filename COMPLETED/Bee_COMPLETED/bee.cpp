#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // input year
    int key[25];
    for (int i=1; i<=25; i++){
        cin >> key[i];
        if (key[i] == -1) break;
    }

    //fill out ans
    int ans[25][2]{};
    ans[1][0] = 2; ans[1][1] = 4;
    for (int i=2; i<=24; i++){
        ans[i][0] = ans[i-1][1];
        ans[i][1] = ans[i-1][0] + ans[i-1][1] + 1;
    }

    // output zone
    for (int i=1; i<=25; i++){
        if (key[i] != -1){
            cout << ans[key[i]][0] << " " << ans[key[i]][1] << '\n';
        }else{
            break;
        }
    }
}