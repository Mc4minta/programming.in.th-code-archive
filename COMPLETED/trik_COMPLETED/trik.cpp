#include<iostream>
using namespace std;
// A = 1/2
// B = 2/3
// C = 1/3
// ball is in 1 at start;
int main(){
    string order;
    int ball = 1;
    cin >> order;
    int length = order.length();

    for (int i = 0; i < length; i++){
        if(order[i]=='A'){
            if(ball==1){
                ball = 2;
            }else{
                ball = 1;
            }
        }else if(order[i]=='B'){   
            if(ball==2){
                ball = 3;
            }else{
                ball = 2;
            }
        }else{
            if(ball==1){
                ball = 3;
            }else{
                ball = 1;
            }
        }
    }
    
    cout << ball;

    return 0;
}