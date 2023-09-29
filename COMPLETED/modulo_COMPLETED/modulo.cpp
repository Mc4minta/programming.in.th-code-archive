#include<iostream>
#include<set>
using namespace std;

int main(){
    int n = 10;
    int a = 1;
    int num[n],mod[n];
    for (int i = 0; i < n; i++){
        cin >> num[i]; // input 10 number
    }

    for (int i = 0; i < n; i++){
        mod[i] = num[i]%42; // mod the 10 number
    }

    set<int> final;

    // use insert function because insert won't included duplicate things

    for (int i = 0; i < n; i++){
        final.insert(mod[i]);
    }

    int ans = final.size();
    cout << ans;

    return 0;
}