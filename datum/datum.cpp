#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,m;
    int gap = 0;
    cout << "Enter D and M: " << endl;
    cin >> d >> m;
    // calculate date from first of year
    int dayInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i=0; i<(m-1); i++){
        gap+=dayInMonth[i];
    }
    cout << "gap before add is " << gap << endl;
    gap+=(d-1);
    cout << "gap after add is " << gap << endl;
    return 0;
}