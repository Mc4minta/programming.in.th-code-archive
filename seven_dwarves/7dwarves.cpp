#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n = 9;
    int k = 7;
    vector<int> num;
    vector<vector<int>> comb;
    //input nine number
    for (int i = 0; i < n; i++){
        int input;
       cin >> input; 
       num.push_back(input);
    }

    for (int x : num){
        cout << x << endl;
    }


    return 0;
}