#include<bits/stdc++.h>
using namespace std;

int main(){
	int times=0;
	priority_queue <int> pq;
	// input array
	int arr[3];
	int i;
	for (i=0; i<3; i++) cin>>arr[i];
	// insert array to pq
	for (i=0; i<3; i++){
		pq.push(arr[i]);
	}
	
	while (pq.top() > 1){
		int x = pq.top(); 
		pq.pop(); // when x = pq.top then remove pq.top from pq
		x/=2;  // operate x
		pq.push(x);
		times++; // then push in pq >> if it's all 1 the while will stop 
	}
	cout << times;
}
