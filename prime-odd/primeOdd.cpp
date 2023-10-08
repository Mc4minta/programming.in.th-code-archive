#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string num[n];
	int i;
	for (i=0; i<n; i++) cin >> num[i];
	for (i=0; i<n; i++){
		int m = num[i].length();
		if (num[i] == "2"){
			cout << "T" << endl;
		}else if (num[i][m-1]%2 == 0){
			cout << "F" << endl;
		}else{
			cout << "T" << endl;
		}
	}
}

	// if == '2' then true, if last digit can be divided by 2 then false, else true
