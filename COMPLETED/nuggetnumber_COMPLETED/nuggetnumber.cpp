#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int i,j,k,x;
    set <int> a;

    for (i=0; i<=n; i++){
        for (j=0; j<=n; j++){
            for (k=0; k<=n; k++){
                x = 6*i + 9*j + 20*k;
                if (x <= n and x != 0){
                    a.insert(x);
                }
            }
        }
    }
    if (a.size() == 0){
        cout << "no"; return 0;
    }else{
        for (auto &x : a){
            cout << x << '\n';
        }
    }
}