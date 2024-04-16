#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int c,s; cin >> c >> s;
	
	map<int,int> m;
	
	for (int i=0; i<s; i++){
		int a,b; cin >> a >> b;
		m[b] = a;
	}
	
	vector<bool> st(c+1,false);
	vector<queue<int>> q;

	char com;
	
	while(true){
		cin >> com;
		if(com == 'X'){
			cout << 0;
			break;
		}else if(com == 'E'){
			int x; cin >> x;
			if(!st[m[x]]){
				queue<int> tq;
				tq.push(x);
				q.push_back(tq);
				st[m[x]] = true;
			}else{
				for(int i=0; i<q.size(); i++){
					if(m[x] == m[q[i].front()]){
						q[i].push(x);
					}
				}
			}
		}else if(com == 'D'){
			if(!q[0].empty()){
				cout << q[0].front() << '\n';
				if(q[0].size() == 1){
					st[m[q[0].front()]] = false;
				}
				q[0].pop();
				if(q[0].empty()){
					q.erase(q.begin());
				}	
			}else{
				cout << "empty" << '\n';
			}
		}
	}	
	
	return 0;
}
