#include<bits/stdc++.h>
using namespace std;

void printPq(priority_queue<int, vector<int>, greater<int> > pq){
	while (pq.empty() == false){
			cout << pq.top(); pq.pop();
		}
}

int main(){
	priority_queue<int, vector<int>, greater<int> > pq;
	int n,i;
	int cnt = 0;
	cin >> n;
	int arr[n];
	for (i=0; i<n; i++){
		cin >> arr[i]; pq.push(arr[i]);
	}
	if (pq.top() != 0){
		while (pq.empty() == false){
		cout << pq.top(); pq.pop();
		}
	}else{
		while (pq.top() == 0){
			cnt++;
			pq.pop();
		}
		cout << pq.top(); pq.pop();
		for (i=0; i<cnt; i++){
			cout << "0";
		}
		while (pq.empty() == false){
			cout << pq.top(); pq.pop();
		}
	}
}
