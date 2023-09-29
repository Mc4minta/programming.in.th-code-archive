#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    //get string
    int length = 10000;
    char word[length];
    scanf("%s", &word);
    int realLength = strlen(word);
    //check the strings
    int a=0;
    int b=0;

   if (isupper(word[0])){
        for (int i = 0; i < realLength; i++){
            if (isupper(word[a])){
                a++;
            }
        }
        if (a==realLength){
            printf("All Capital Letter");
        }else{
            printf("Mix");
        }
        
    }else if(islower(word[0])){
        for (int j = 0; j < realLength; j++){
            if (islower(word[b])){
                b++;
            }
        }
        if (b==realLength){
            printf("All Small Letter");
        }else{
            printf("Mix");
        }
    }     
    return 0;
}