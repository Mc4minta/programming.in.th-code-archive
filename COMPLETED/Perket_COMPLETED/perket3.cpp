#include<bits/stdc++.h>
using namespace std;

int n;
int best = 1000000;
int s[10],b[10];
int diff(int a,int b){
    return abs(a-b);
}
int perket(int i, int sour, int bit){
    if (i==n){
        if (b>0 and diff(sour,bit) < best){
            best = diff(sour,bit);
        }   
    }else{
        perket(i+1,sour,bit);
        perket(i+1,sour*s[i],bit+=b[i]);
    }

}

int main(){
    cin >> n;
    int i=0;
    for (i=0; i<n; i++){
        cin >> s[i] >> b[i];
    }
    perket(0,1,0);
    cout << best;
    // cout << endl;
    // for (i=0; i<n; i++) cout << s[i] << " " << b[i] << endl;
}