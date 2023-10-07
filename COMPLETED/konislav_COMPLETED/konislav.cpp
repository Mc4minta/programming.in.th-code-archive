#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=4;
	int num[n];
	for (int i=0; i<n; i++) cin >> num[i];
	sort (num,num+n);
	cout << num[0]*num[2];
}
