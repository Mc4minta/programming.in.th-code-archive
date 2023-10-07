#include<bits/stdc++.h>
using namespace std; 
                                         
int main(){
    int a,b,c,x;
    cin >> a >> b >> c;
    if (b-a > c-b){
    	x = b-a;
	}else if (c-b > b-a){
		x = c-b;
	}
	cout << x-1;
}
