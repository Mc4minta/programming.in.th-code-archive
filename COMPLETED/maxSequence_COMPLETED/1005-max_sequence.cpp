#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> sub;
	vector<int> arr(n);
	for (int i=0; i<n; i++) cin >> arr[i];
	
	int start=0,sum=0,best=0;
	
	for (int j=0; j<n; j++){
		start = j;
		sum=0; 
		for (int i=j; i<n; i++){
			sum+=arr[i];
			if(sum>best){
				sub.clear();
				best=sum;
				sub.emplace_back(start,i);
			}else if(sum==best and sum>0){
				sub.emplace_back(start,i);
			}
		}
	}
	
	if (best==0){
		cout << "Empty sequence";
		return;
	}
	
	for(auto in : sub){
		for (int i=in.first; i<=in.second; i++){
			cout << arr[i] << " ";
		}
		cout << '\n';
	}
	cout << best;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}

// every time we iterate to new i 
	// we set the start index to that num at that i index
	// and we add the fuck of everything
	// we check if the sum is greater that best
	// if it's not we just do nothing
	// if it's we will update the best to that sum
	// and instead of pushing every number 
	// we push the start index and i index instead
	// so we have the index of the seq instead of number
	// we use two nested forloop to have every calculate
	// every first loop iteration is the new start so new sum too because the sequence just ended
	// so we set sum to 0 every new iteration
	// if best == 0 there is no possible sequence


