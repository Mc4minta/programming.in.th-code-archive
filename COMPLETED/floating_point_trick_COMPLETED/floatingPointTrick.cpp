#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int q; cin >> q;
    long double a;
    for (int i=0; i<q; i++){
        cin >> a; cout << fixed << setprecision(0) << pow (2,a) << '\n';
    }
}