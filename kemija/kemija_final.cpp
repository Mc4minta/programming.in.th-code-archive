#include<bits/stdc++.h>
using namespace std;

bool vowel(string word,int index,char cv){
	// working surely
	bool vowel=false;
	char vw[5] = {'a','e','i','o','u'};
	int j;
	for (j=0; j<5; j++){
		if (word[index] == vw[j]) vowel = true;
		cv = vw[j];
	}
	return vowel;
}

string check(string word){
	string ans;
	int n = word.length();
	int i,j,cv;
	int vw=0;
	// process here // editing
	for (i=0; i<n; i++){
		if (vowel(word,i,cv)){
			ans.push_back(word[i]); i+=2;
		}else{
			ans.push_back(word[i]);
		}
	}
	return ans;
}

int main(){
	string word;
	getline(cin, word, '\n');
	string ans = check(word);
	cout << ans;
}


// test case 1
// zepelepenapa papapripikapa
// zelena paprika

// test case
// bas je dosadna ova kemija
