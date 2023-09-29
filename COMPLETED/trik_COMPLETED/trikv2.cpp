#include<iostream>
using namespace std;

int main(){
    string order;
    int ball = 1;
    cin >> order;
    int length = order.length();

    int a = 0;
    for (int i = 0; i < length; i++){
            if(order[a]=='A'){
                if(ball==1){
                    ball = 2;
                }else if(ball==2){
                    ball = 1;
                }
            }else if(order[a]=='B'){
                if(ball==2){
                    ball=3;
                }else if(ball==3){
                    ball=2;
                }
            }else if(order[a]=='C'){
                if(ball==1){
                    ball=3;
                }else if(ball==3){
                    ball=1;
                }
            }
        a++;   
    }
    
    cout << ball;
    
    return 0;
}