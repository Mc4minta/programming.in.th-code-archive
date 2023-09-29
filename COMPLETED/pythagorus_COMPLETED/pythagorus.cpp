#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    double a,b,ans;
    cin >> a >> b;
    ans = sqrt((a*a)+(b*b));
    cout << fixed << setprecision(5) << ans;
    return 0;
}