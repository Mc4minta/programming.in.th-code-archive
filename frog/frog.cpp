#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    int times=0;
    int distance=0;
    if (x <= y){
        while (distance<y){
                distance+=x;
                times++;
            }
    }else{
        times = 2;
    }
    cout << times;
}