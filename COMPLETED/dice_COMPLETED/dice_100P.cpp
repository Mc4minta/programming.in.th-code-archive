#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n; int ans[n];

    for (int i=0; i<n; i++){
        string str;
        cin >> str;
        int dice[6] = {1,2,3,5,4,6};
        for (int j=0; j<str.size(); j++){
            char ch = str[j]; 
            switch(ch){
                case 'F': 
					swap(dice[5],dice[1]);
					swap(dice[3],dice[0]);
					swap(dice[3],dice[1]);
					break;
                case 'B': 
					swap(dice[0],dice[1]);
					swap(dice[1],dice[3]);
					swap(dice[1],dice[5]);
					break;
                case 'L': 
					swap(dice[0],dice[2]);
					swap(dice[0],dice[5]);
					swap(dice[0],dice[4]);
					break;
                case 'R': 
                	swap(dice[0],dice[2]);
                	swap(dice[2],dice[5]);
                	swap(dice[4],dice[5]);
                	break;
                case 'C': 
                	swap(dice[1],dice[2]);
                	swap(dice[1],dice[4]);
                	swap(dice[3],dice[4]);
                	break;
                case 'D': 
                	swap(dice[1],dice[4]);
                	swap(dice[1],dice[3]);
                	swap(dice[1],dice[2]);
                	break;
            }  
        }
        ans[i] = dice[1];
    }
    for (int i=0; i<n; i++){
    	cout << ans[i] << " ";
	}
}
