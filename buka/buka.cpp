#include<bits/stdc++.h>
using namespace std; 

int main(){
 	// input as string
	string a,b;
	string oprt;
	cin >> a >> oprt >> b;   
	// * add zero for size b-1
	if (oprt == "*"){
		if (a == "0" || b == "0"){
			cout << 0;
			return 0;
		}else{
			cout << a;
			for (int i=0; i<b.length()-1; i++) cout << 0;
		}
	}
	// +
	if (oprt == "+"){
		int al = a.length(); int bl = b.length();
		if (a=="1" && b=="1"){
			cout << 2;
			return 0;
		}else if(a == "0" && b == "0"){
			cout << 0;
			return 0;	
		}else if (( a == "1" && b == "0") || ( a == "0" && b == "1")){
			cout << 1;
			return 0;
		}else if(al > bl){
			a[al-bl] = '1';
			cout << a;
		}else if(bl > al){
			b[bl-al] = '1';
			cout << b;
		}else {
			cout << "2";
			for (int i=0; i<(al-1); i++) cout << "0";
		}
	}
}
