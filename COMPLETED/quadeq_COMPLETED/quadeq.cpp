#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int aa,bb,cc; cin >> aa >> bb >> cc;
    // A = ac, B = ad+bc, C = bd
    for (int a=1; a<=aa; a++){
        for (int b=-abs(cc); b<=abs(cc); b++){
            for (int c=1; c<=aa; c++){
                for (int d=-abs(cc); d<=abs(cc); d++){
                    if ((a*c)==aa and (a*d)+(b*c)==bb and (b*d)==cc){
                        printf("%d %d %d %d",a,b,c,d);
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No Solution";
    return 0;
}
