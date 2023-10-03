#include<iostream>

using namespace std;

void printArray2(int array[5][4]){
	for (int row=0; row<5; row++){
		for (int col=0; col<4; col++){
			cout << array[row][col];
		}
		cout << endl;
	}
}

void printArray(int array[5]){
	for (int i=0; i<5; i++){
		cout << array[i];
		cout << endl;
	}
}

int main(){
	// array[row][col];
	int score[5][4];
	for (int row=0; row<5; row++){
		for (int col=0; col<4; col++){
			cin >> score[row][col];
		}
	}
	
	// printArray2(score);
	
	// sum the same row and add to allSum array;
	int sum =0;
	int allSum[5];
	for (int row=0; row<5; row++){
		for (int col=0; col<4; col++){
			sum+= score[row][col];
		}
		allSum[row] = sum;
		sum = 0;
	}
	
	// printArray(allSum);
	
	// find max
	int winner;
	int max = allSum[0];
	for (int i=0; i<5; i++){
		if (allSum[i] > max){
			max = allSum[i];
			winner = i+1;
		}
	}
	
	cout << "Winner is number: " << winner;
	cout << endl << "With score = " << max;
	
	return 0;
}
		

