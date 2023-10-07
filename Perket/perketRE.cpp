#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j;
	cin >> n;
	int taste[n][2];
	
	
	// input taste
	for (i=0; i<n; i++){
		for (j=0; j<2; j++){
			cin >> taste[i][j];
		}
	}
	
	// cal slab blab comb
	
	
}

/*
TEST CASE
	INPUT
1
3 10
	OUTPUT
7

	INPUT
2
3 8
5 8	
	OUTPUT
1
	
	INPUT
4
1 7
2 6
3 8
4 9	
	OUTPUT
1
*/

/*
int n;
cin >> n;
taste[n][2]

input taste (this case is n=3)
s1 b1
s2 b2
s3 b3

slab = sum of all row at col=0
blab = multi of all row at col=1

find combination of abs(slab-blab) >> comb[45]
and find min in the comb
cout << min comb

*/

/*
	// check slab blab
	for (int x : slab) cout << x << " ";
	cout << endl;	
	for (int x : blab) cout << x << " ";
*/
