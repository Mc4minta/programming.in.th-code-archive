#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
	for (int i=0; i<n; i++) cout << arr[i] << " ";
	cout << endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	vector<vector<int> > perm;
	
	int i,j;
	int n,m;
	int f[n];
	int p[m];
	cin >> n;
	cin >> m;
	for (i=0; i<m; i++) cin >> p[i]; // input p
	for (i=0; i<n; i++) f[i] = i+1; // assign f
	display(f,n); 
	
	sort(f,f+n);
	
	
		
}

/*
	ios::sync_with_stdio(0);
	cin.tie(0);
	
				TEST CASE
	
	INPUT
4
3
1 2 3
	
	OUTPUT
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1	
	
	INPUT
4
2
3 2
	
	OUTPUT
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1



											*/
