#include<bits/stdc++.h>
using namespace std;

int main(){
	int c,s; cin >> c >> s;
	map<int,int> m;
	for (int i=0; i<s; i++){
		int a,b;
		cin >> a >> b;
		m[b] = a;
	}
	
	char com; 
	cin >> com;
	
	vector<queue<int>> q;
	queue<int> out;
	queue<int> order;
	
	// m[x] = class; x = ID;
	
	while(cin >> com and com != 'X'){
		if (com == 'E'){
			int x; cin >> x;
			// if q class is empty then push
			if(q[m[x]].empty()){
				order.push(m[x]);
			}
			q[m[x]].push(x);
		}else if (com == 'D'){
			if(!q[order.front()].empty()){
				out.push(q[order.front()].front());
				q[order.front()].pop();
			}else{
				order.pop();
				out.push(0);
			}
		}
	}
	
	while(!out.empty()){
		cout << 
	}
	cout << 0;
	return 0;
}
