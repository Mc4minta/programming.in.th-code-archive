#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int arr[n]; int i,j;
    for (i=0; i<n; i++) cin >> arr[i];
    int *pmx = max_element(arr,arr+n);
    int mx = *pmx;
    int cnt[mx+1]{};
    for (i=0; i<n; i++){
        cnt[arr[i]]++;
    }
    int *pmax_cnt = max_element(cnt, cnt+n);
    for (i=0; i<mx+1; i++){
        if (cnt[i] == *pmax_cnt){
            cout << i << " ";
        }
    }
}