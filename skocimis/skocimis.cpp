#include<bits/stdc++.h>
using namespace std;

int main(){
    // input a b c
    cout << "start: "<<endl;
    int num[3];
    for(int i=0; i<3; i++) cin >> num[i];
    int x=0;
    while (num[1]-num[0] != 0){
        num[1]++;
        x++;
    }  
    while (num[2]-num[1] != 0){
        num[2]--;
        x++;
    }
    cout << x;
    return 0;
}