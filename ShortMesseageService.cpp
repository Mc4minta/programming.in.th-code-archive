#include<bits/stdc++.h>
using namespace std;

const int S = 7;
map<char,int> sc; // int key for finding score
map<char,bool> st; // char key for finding status

void solve(string x){
	//	vector<int> score(S,0); // kep score all
	// A = 65
	// intitialize char as zero
	// intilize bool as false
	
	for (int i=0; i<x.length(); i++){
		sc[x[i]]++;
	}
	
	// score debug
	cout << '\n' << "Score test: " << '\n';
	for (int i='A'; i<='G'; i++){
		cout << char(i) << " " << sc[i] << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	for (int i='A'; i<'G'; i++){
		st[i] = false;
		sc[i] = 0;
	}
	
	while(true){
		string x; cin >> x;
		if(x == "!"){
			break;
		}else{
			solve(x);
		}
	}
	return 0;
}


