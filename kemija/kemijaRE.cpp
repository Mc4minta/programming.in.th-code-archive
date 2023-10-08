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
		if (vowel(word,i,cv) && word[i+1] == 'p' && word[i+2] == cv){ // epe
			ans.push_back(cv);
		}else if(vowel(word,i,cv) && word[i-1] == 'p' && vowel(word,i+1,cv) == false){ // epl
		    ans.push_back(cv);
		}else if (word[i] == 'p'){
			if(i==0 || word[i-1] == ' '){
				ans.push_back(word[i]);
			}else if (vowel(word,i-1,cv)){
				if (vowel(word,i+1,cv) == false){
					ans.push_back(word[i]);
				}
			}
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
