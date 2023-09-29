#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double r,taxi,euclid;
    double pi = M_PI;
    cin >> r;

    euclid = M_PI*(r*r);
    taxi = 2*(r*r);

    cout << fixed << setprecision(6) << euclid << endl;
    cout << fixed << setprecision(6) << taxi;
    
    return 0;
}