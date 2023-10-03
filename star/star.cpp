#include<iostream>
using namespace std;

void printStar(int row){
	if (row%2 == 0){
		// even
		int space1 = 1;
		int star = 1;
		int space2 = (row/2)-1;
		for (int current=0; current<(row/2)-1; current++){
			// print - for space1 times > then space--
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			space1--;
			//print -* loop for star time >> then star++
			for (int i=0; i<star; i++){
				cout << "-*";
			}
			star++;
			// print - for space time > then space --
			for (int i=0; i<space2; i++){
				cout << "-";
			}
			space2--;
			// endl
			cout << endl;
		}
		// print *-----* for two times
		for (int current=0; current<2; current++){
			cout << "*"; // print first *
			for (int i=0; i<row-3; i++){
				cout << "-"; // print ------
			}
			cout << "*"; // print last *
			cout << endl; // end of row
		}
		space1 = 0;
		star = (row/2)-1;
		space2 = 1;
		for (int current=0; current<(row/2)-1; current++){
			//print - for space1 times >> then space1--
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			space1--;
			// print -* for star times >> then star--
			for (int i=0; i<star; i++){
				cout << "-*";
			}
			star--;
			// print - for space2 times >> then space2++
			for (int i=0; i<space2; i++){
				cout << "-";
			}
			space2++;
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
