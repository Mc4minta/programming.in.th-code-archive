#include<bits/stdc++.h>
using namespace std;

int main(){	
	int n,m,l,k,c,total,ans;
	cin >> n >> m;
	cin >> l >> k;	
	cin >> c;
	int prc[n*m];
	for (int i=0; i<n*m; i++) cin >> prc[i];
	int sum=0;
	for (int i=0; i<n*m; i++) sum+=prc[i];
	total = sum + l*k*c;
	ans = total/c;
	if (total%c != 0) ans++;
	cout << ans;
}
