#include<iostream>
using namespace std;

void one(int n){
    int counter = 1;
    char frame;
    char peter = '#';
    char wendy = '*';
    cout << ".";
    for (int i = 0; i < n; i++){
        if (counter%3 == 0){
            frame = wendy;
        }else{
            frame = peter;
        }
            cout << "." << frame << "..";
        counter++;
    }
    cout << endl;
}

void two(int n){
    int counter = 1;
    char frame;
    char peter = '#';
    char wendy = '*';
    cout << ".";
    for (int i = 0; i < n; i++){
        if (counter%3 == 0){
            frame = wendy;
        }else{
            frame = peter;
        }
            cout << frame << ".";
            cout << frame << "."; 
        counter++;
    }
    cout << endl;
}

void mid(string word,int n){
    int counter = 1;
    int c=0;
    char frame;
    char peter = '#';
    char wendy = '*';
    for (int i = 0; i < n; i++){
        if (counter%3 == 0){
            frame = wendy;
            c++;
        }else if(c==1){
            frame = wendy;
            c = 0;
        }else{
            frame = peter;
        }
            cout << frame << "." << word[i] << ".";
        counter++;
    }
    if (c==0){
        frame = peter;
    }
    
    cout << frame << endl;
}

int main(){
    string word;
    cin >> word;
    int n = word.length();

    one(n);
    two(n);
    mid(word,n);
    two(n);
    one(n);


    // make a counter if it's exceed three do wendy and reset it when done
    // . + forloop . + frame + .. for length times = lines 1
    // . + forloop 2*(frame + .) = line 2
    // frame + . + word + . for length times + frame
    // line 2
    // line 1

    return 0;
}