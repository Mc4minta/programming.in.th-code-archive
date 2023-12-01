#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string num;
    cin >> num;
    int three=0, eleven=0;
    for (int i=0; i<num.size(); i++){
        int cur = num[i]-'0';
        three = (cur+(three*10))%3;
        eleven = (cur+(eleven*10))%11;

    }
    cout << three << " " << eleven;
}