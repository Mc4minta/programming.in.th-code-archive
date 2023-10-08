#include<bits/stdc++.h>
using namespace std;

bool primeCheck(int num[], int index){
	bool prime = true;
	double sq = sqrt(num[index]);
	int i;
	if (num[index] == 2) return true;
	for (i=2; i<=sq; i++){
		if (num[index]%i == 0){
			prime = false;
		}
	}
	return prime;
}


int main(){
	int n; cin >> n;
	int num[n];
	int i;
	for (i=0; i<n; i++) cin >> num[i];
	if (primeCheck(num,i)){
		cout << "T";
	}else if (num[i]%2 != 0){
		cout << "T";
	}else if (num[i]%2 == 0){
		cout << "F";
	}else {
		cout << "F";
	}
}

	//	if (num[i] == 2 or num[i] == 3){
	//		cout << "T";
	//	}else if (num[i]+1%6 == 0 or num[i]-1%6 == 0){
	//		cout << "T";
	//	}else if ()
