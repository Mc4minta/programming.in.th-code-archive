#include<iostream>
using namespace std;

void printStar(int row){
	int space,star;
	if (row%2 == 0){
		// even
		space = (row/2) - 1;
		for (int current=0; current<row/2; current++){
			for (int i=0; i<space; i++){
				cout << "-";
			}
			space--; // done printing --
			cout << endl; // end of row
		}	
	}else{
		//odd
		cout << "Num is odd";
	}
}

int main(){
	int row;
	cin >> row;
	
	printStar(row);
	
	return 0;
}