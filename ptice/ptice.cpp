#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // input stirngs as vector
    // string act similar to array
    int n;
    string key;
    cin >> n;
    cin >> key;


    // Adrian = A B C loop
    // Bruno = B A B C loop
    // Goran = C C A A B B loop

    string adrian,bruno,goran;
    int counter;
    char myChar;

    // make adrian
    // Adrian = A B C loop
    counter = 1;
    for (int i = 0; i < n; i++){
        if (counter == 1){
            myChar = 'A';
        }else if (counter == 2){
            myChar = 'B';
        }else if (counter == 3){
            myChar = 'C';
            counter = 0;
        }
        adrian.push_back(myChar);
        counter++;
    }

    // make bruno
    // Bruno = B A B C loop
    counter = 1;
    for (int i = 0; i < n; i++){
        if (counter == 1){
            myChar = 'B';
        }else if (counter == 2){
            myChar = 'A';
        }else if (counter == 3){
            myChar = 'B';
        }else if (counter == 4){
            myChar = 'C';
            counter = 0;
        }
        bruno.push_back(myChar);
        counter++;
    }
    
    // make goran
    // Goran = C C A A B B loop
    counter = 1;
    for (int i = 0; i < n/2; i++){
        if (counter == 1){
            myChar = 'C';
        }else if (counter == 2){
            myChar = 'A';
        }else if (counter == 3){
            myChar = 'B';
            counter = 0;
        }
        goran.push_back(myChar);
        goran.push_back(myChar);
        counter++;
    }
    // check who have the most point
    int score;

    //check adrain
    score = 0;
    for (int i = 0; i < n; i++){
        if (adrian[i] == key[i]){
            score++;
        }
    }
    int adrainScore = score;
    
    //check bruno
    score = 0;
    for (int i = 0; i < n; i++){
        if (bruno[i] == key[i]){
            score++;
        }
    }
    int brunoScore = score;

    //check goran
        score = 0;
    for (int i = 0; i < n; i++){
        if (goran[i] == key[i]){
            score++;
        }
    }
    int goranScore = score;

//check who have the most score
    
    int maxScore = max(adrainScore, max(brunoScore, goranScore));
    
    vector<string> winners;
    if (adrainScore == maxScore){
        winners.push_back("Adrian");
    }
    
    if (brunoScore == maxScore){
        winners.push_back("Bruno");
    }
    
    if (goranScore == maxScore){
        winners.push_back("Goran");
    }
    
    cout << "Key is: " << key << endl;
    cout << "Key size is: " << n << endl;
    cout << endl;
    cout << "Adrain is: " << adrian << endl;
    cout << "Bruno is: " << bruno << endl;
    cout << "Goran is: " << goran << endl;
    cout << endl;
    cout << "Adrain score is: " << adrainScore << endl;
    cout << "Bruno score is: " << brunoScore << endl;
    cout << "Goran score is: " << goranScore << endl;
    cout << endl;
    cout << "Max score is: " << maxScore << endl;
    cout << "winner size is: " << winners.size() << endl;
    cout << "Winners is/are: " << endl;
    for (int i = 0; i < winners.size(); i++){
        cout << winners[i] << endl;
    }
    
    

    return 0;
}