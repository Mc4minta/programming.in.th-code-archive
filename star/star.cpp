#include<iostream>
using namespace std;

void printStar(int row){
	if (row%2 == 0){
		// even
		int space1 = (row/2)-2;
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
		space1 = 1;
		star = (row/2)-1;
		space2 = 0;
		for (int current=0; current<(row/2)-1; current++){
			//print - for space1 times >> space ++
			for (int i=0; i<space1; i++){
				cout << "-";
			}
			space1++;
			//print *- for star times >> star--
			for (int i=0; i<star; i++){
				cout << "*-";
			}
			star--;
			//print - for space2 times >> space2++
			for (int i=0; i<space2; i++){
				cout << "-";
			}
			space2++;
			cout << endl; // end of row
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
			int realrow = current+1;
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
			if (current != realrow){
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
