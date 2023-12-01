#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int i,j;
    int arr[n]; 
    for (i=0; i<n; i++){
        cin >> arr[i];
    }  
    
    sort(arr, arr+n);

    int current_num=0;
    int max=0;
    int cnt=0;
    for (i=0; i<n; i++){
        if (arr[i] != current_num){
            current_num = arr[i];
            cnt=0;
        }
        cnt++;
        if (cnt > max){
            max = cnt;
        }
    }
    current_num=0;
    for (i=0; i<n; i++){
        if (arr[i] != current_num){
            current_num = arr[i];
            cnt=0;
        }
        cnt++;
        if (cnt == max){
            cout << current_num << " ";
        }
    }
}