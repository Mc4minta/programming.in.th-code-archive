#include<iostream>
#include <set>
using namespace std;

int main(){
    int n = 9;
    int num[n];
    for (int i = 0; i < n; i++){
       cin >> num[i]; 
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum+=num[i];
    }
    int a,b = 0;
    int first,second;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (sum - (num[a]+num[b]) == 100){
                first = num[a];
                second = num[b];
                break;
            } 
            b++;  
        }
        a++;
    }

    // we got the culprit index now so what now
    set<int> num2;
    for (int i = 0; i < n; i++){
        num2.insert(num[i]);
    }
    num2.erase(first);
    num2.erase(second);
    
    for (int ans : num2){
        cout << ans << endl;
    }

    

    return 0;
}