#include<iostream>
#include <vector>
using namespace std;

void findCombinations(vector<int>& num, vector<int>& combination, int i, int k,vector<vector<int>>& result){

    if(k==0){
        result.push_back(combination);
        return;
    }
    
    if (i == num.size()){
        return;
    }
    

    combination.push_back(num[i]);
    findCombinations(num, combination, i+1, k-1, result);

    combination.pop_back();
    findCombinations(num,combination,i+1,k, result);

}

int main(){
    int n = 9;
    int k = 7;
    vector<int> num;
    vector<int> combination;
    vector<vector<int>> result;
    //input nine number
    for (int i = 0; i < n; i++){
        int input;
       cin >> input; 
       num.push_back(input);
    }

    findCombinations(num,combination,0,k,result);

    for( const vector<int>& comb : result){
        for (int x : comb){
            cout << x << " ";
        }
            cout << endl;
    }
    
    
    

    return 0;
}