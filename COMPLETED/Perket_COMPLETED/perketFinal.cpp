#include<bits/stdc++.h>
using namespace std;


    
int n,s[10],b[10],best=1000000;

void recur(int i, int sour, int bitter){
	if (i==n){
		if (bitter > 0 and abs(sour - bitter) < best){
			best = abs(sour - bitter);
		}
	}else{
		recur(i+1, sour, bitter);   			// not choosing
		recur(i+1, s[i]*sour, b[i]+bitter);     // choosing // *s +b
	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> s[i];
		cin >> b[i];
	}
	recur(0,1,0); // sour have tobe 1 because it will be multiply
	cout << best;
}
