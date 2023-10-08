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

string check(string word,int n){
	// editing
	string ans;
	int i,j;
	char cv;
	for (i=0; i<n; i++){
		if (word[i] == 'p' and vowel(word,i+1,cv)){ // p but not with vowel next
			ans.push_back(word[i]);
		}else if (word[i] != 'p' and vowel(word,i,cv)){ // not p and vowel
			ans.push_back(word[i]);
		}else if (vowel(word,i,cv) and word[i+1] == 'p' and vowel(word,i+1,cv)){// is vowel p vowel
		 	ans.push_back(cv);
		}
	}
	return ans;
}

int main(){
	string word;
	getline(cin,word);
	int n = word.length();
	string ans = check(word,n);
	cout << ans;
	return 0;
}

// input
// zepelepenapa papapripikapa
// output
// zelena paprika

// input
// bapas jepe doposapadnapa opovapa kepemipijapa
// output
// bas je dosadna ova kemija
