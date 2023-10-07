#include<bits/stdc++.h>
using namespace std;

bool vowel(string word,int index,char cv){
	bool vowel=false;
	char vw[5] = {'a','e','i','o','u'};
	int j;
	for (j=0; j<5; j++){
		if (word[index] == vw[j]) vowel = true;
		cv = vw[j];
	}
	return vowel;
}

string check(string word,int n){
	string ans;
	int i,j;
	char cv;
	
	
	
	return ans;
}

int main(){
	string word;
	getline(cin,word);
	int n = word.length();
	string ans = check(word,n);
	cout << ans;
}

// input
// zepelepenapa papapripikapa
// output
// zelena paprika

// input
// bapas jepe doposapadnapa opovapa kepemipijapa
// output
// bas je dosadna ova kemija

