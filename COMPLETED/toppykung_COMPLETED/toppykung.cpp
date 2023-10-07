#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j;
	cin >> n;
	
	string jk[n];
	// input jk in jk
	for (i=0; i<n; i++){
		string temp;
		bool alr = false;
		cin >> temp;
		for (j=0; j<n; j++){
			if (temp == jk[j]) alr = true;
		}
		if (alr == false){
			jk[i] = temp;
		}
		
	} 
	
	// sort jk
	sort (jk,jk+n);
	
	//remove empty stirng
	int cnt=0;
	for (i=0; i<n; i++){
		if (!jk[i].empty()){
			jk[cnt++] = jk[i];
		}
	}			
	
	n = cnt;
	
	// check jk
	for (i=0; i<n; i++){
		cout << jk[i] << endl;
	}
}

/*
		TEST CASE
	INPUT
4
toppykung
krittisakchaiyakul
noob
nakornpathom
	
	OUTPUT
krittisakchaiyakul
nakornpathom
noob
toppykung

	INPUT
6
mai
hen
longsob
ma
pid
sala

	OUTPUT
hen
longsob
ma
mai
pid
sala

	INPUT
6
maidai
leoi
maidai
tong
maidai
nakornpathom

	OUTPUT
leoi
maidai
nakornpathom
tong
*/
