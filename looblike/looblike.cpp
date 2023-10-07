#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
	for (int i=0;i<n;i++) cout << arr[i] << " ";
}

int main(){
	int i,j,n;
	cin >> n;
	int arr[n];
	for (i=0;i<n;i++) cin >> arr[i];
	sort(arr,arr+n);
	printArray(arr,n); cout << endl;
	// assign set with unique num
	set <int> set;
	for (i=0;i<n;i++){
		set.insert(arr[i]);
	}
	// cout << set.size() << endl;
	for (int x : set) cout << x << " ";
	// assign 0 to set
	int cnt[set.size()];
	for (i=0; i<set.size(); i++){
		cnt[i] = 1;
	}
	cout << endl;
	printArray(cnt,set.size()); cout << endl;
	//cout << endl ; printArray(cnt,n);
	
}
