#include<iostream>
#include<vector>

using namespace std;

void printTaste(vector<vector<int> > taste){
	cout << "Your taste are: " << endl;
	for (vector<int> sb : taste){
		for (int x : sb){
			cout << x << " ";
		}
		cout << endl;
	}
}

int main(){ 
	// input N
	int n;
	cout << "Enter amount of N: ";
	cin >> n;
	
	vector< vector<int> > taste;
	int s,b;
	vector<int> sb;
	cout << "Enter sour and bitter:" << endl;
	for (int inputRow = 0; inputRow < n; inputRow++){
		cin >> s >> b;
		sb.push_back(s);
		sb.push_back(b);
		taste.push_back(sb);
		sb.clear();
	}
	
	// printTaste(taste);
	
	// calculate sour and bitter
	
	
	
	return 0;
}
