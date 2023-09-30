#include<iostream>
#include<vector>
using namespace std;

int main(){
    // input two int
    int a,b,n,gcd,d = 1;
    cin >> a >> b;

    // check if n = a or b
    if (a >= b){
        n = b;
    }else if (b >= a){
        n = a;
    }

    // make for loop that increment number and try to devide by them two
    for (int i = 0; i < n; i++)
    {
        if (a%d == 0 && b%d == 0){
                gcd = d;
        }
        d++;
    }
    
    // out put great common divisor
    cout << gcd;

    return 0;
}