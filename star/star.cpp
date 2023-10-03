#include<iostream>
using namespace std;

void printStar(int row){
	int space3;
	if (row%2 == 0){
		int space1 = row/2-1;
		int space2 = 1;
		// loop current for (row/2)+1
		for (int current=0; current < (row/2); current++){
			// print - for space1 times
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			// print * one times
			cout << "*";
			// print - for space2 times >> then space++ (if current != 0)
			if (current != 0){
				for (int i=0; i<space2; i++){
					cout << "-";
					space3 = i;
				}
				space2+=2;
			}
			// print * for one times ( if current row != 0)
			if (current != 0){
				cout << "*";
			}
			// print - for space3 times >> then space--;
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			space1--;
			cout << endl; // end of row
		}
		space1 = 0;
		space2 = space3+1;
		// loop current row/2
		for (int current=0; current<row/2; current++){
			//print - for space1 times
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			//print * one time
			cout << "*";
			//print - for space2 times >> space2-=2
			for (int i=0; i<space2; i++){
				cout << "-";
			}
			space2-=2;
			//print * one time
			if (current != (row/2)-1){
				cout << "*";
			}
			// print - for space1 times >> space1++; 
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			space1++;
			// endl
			cout << endl;
		}
		
	}else{
		// odd
		int space1 = row/2;
		int space2 = 1;
		// loop current for (row/2)+1
		for (int current=0; current < (row/2)+1; current++){
			// print - for space1 times
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			// print * one times
			cout << "*";
			// print - for space2 times >> then space++ (if current != 0)
			if (current != 0){
				for (int i=0; i<space2; i++){
					cout << "-";
				}
				space2+=2;
			}
			// print * for one times ( if current row != 0)
			if (current != 0){
				cout << "*";
			}
			// print - for space3 times >> then space--;
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			space1--;
			cout << endl; // end of row
		}
		space1 = 1;
		space2 = row-4;
		// loop current row/2
		for (int current=0; current<row/2; current++){
			//print - for space1 times
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			//print * one time
			cout << "*";
			//print - for space2 times >> space2-=2
			for (int i=0; i<space2; i++){
				cout << "-";
			}
			space2-=2;
			//print * one time
			if (current != (row/2)-1){
				cout << "*";
			}
			// print - for space1 times >> space1++; 
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			space1++;
			// endl
			cout << endl;
		}
	}
}

int main(){
	int row;
	cin >> row;
	
	printStar(row);
	
	return 0;
}
