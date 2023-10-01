#include<iostream>
#include<map>
using namespace std;
    // A<B<C
    // A is min and C is max;
int main(){
//declare variables
    int n= 3;
    int a,b,c,num[n];
    string word;

// in put A B C to the array number
    for (int i = 0; i < n; i++){
        cin >> num[i];
    } 
// input strigns in to strings array
    cin >> word;
//findABC
    int max = num[0];
    int mean;
    int min = num[0];
    //find max (C)
    int counter = 0;
    for (int i = 0; i < n; i++){
        if(num[counter]>max){
            max = num[counter];
        }
        counter++;
    }
    //find min (A)
    counter = 0;
    for (int j = 0; j < n; j++){
        if(num[counter]<min){
            min = num[counter];
        }
        counter++;
    }
    a = min;
    c = max;
    // find mean (B)
    counter = 0;
    for (int k = 0; k < n; k++){
        if(num[counter] > a && num[counter] < c){
            b = num[counter];
        }
        counter++;
    }

// output a b c
    /* cout << endl << "a is " << a;
    cout << endl << "b is " << b;
    cout << endl << "c is " << c; */
    
//make a map of abc and strings
    map<char, int>dic;

    dic['A'] = a;
    dic['B'] = b;
    dic['C'] = c;

// iterate the char in the strings word 
// each one print the corresponding int in the that char dic
    for(char letter : word){
        cout << dic[letter] << " ";
    }
    
//print num that match the dic;
    
    return 0;
}
