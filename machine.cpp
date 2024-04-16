#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	priority_queue<int> pq;
	for (int i=0; i<n; i++){
		char temp; cin >> temp;
		if(temp == 'P'){
			int x; cin >> x;
			pq.push(x);
		}else{
			// temp == 'Q' // pop priority queue
			if(!pq.empty()){
				cout << pq.top() << '\n';
				pq.pop();
			}else{
				cout << "-1" << '\n';
			}
		}
	}
	return 0;
}


