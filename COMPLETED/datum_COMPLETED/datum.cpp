#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,m;
    int gap = 0;
    //cout << "Enter D and M: " << endl;
    cin >> d >> m;
    // calculate date from first of year
    int dayInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i=0; i<(m-1); i++){
        gap+=dayInMonth[i];
    }
    //cout << "gap before add is " << gap << endl;
    gap+=(d-1);
    //cout << "gap after add is " << gap << endl;
    // print day
    int r = gap%7;
    //cout << "gap mod 7 is " << r << endl;
    //string day[7] = {"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
    map <int, string> ans;
    ans[0] = "Thursday";
    ans[1] = "Friday";
    ans[2] = "Saturday";
    ans[3] = "Sunday";
    ans[4] = "Monday";
    ans[5] = "Tuesday";
    ans[6] = "Wednesday";

    cout << ans[r];
    
    return 0;
}