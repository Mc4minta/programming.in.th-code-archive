#include<stdio.h>
#include<ctype.h>
#include<string.h>

void checkChar(char string[]){
    int length = strlen(string);
    printf("String's length is %d\n", length);
    int a=0;
    int b=0;
   if(isupper(string[0])){
        for (int i = 0; i < length; i++){
            if (isupper(string[a])){
                a++;
            }
        }  printf("a is %d\n", a);
        if (a==length){
            printf("All Capital Letter");
        }else{
            printf("Mix");
        }
    }else if(islower(string[0])){
        for (int j = 0; j < length; j++){
            if (islower(string[b])){
                b++;
            }
        } printf("b is %d\n", b);
        if (b==length){
            printf("All Small Letter");
        }else{
            printf("Mix");
        }
    }     
}

int main(){
    //get string
    int n = 10000;
    char word[n];
    printf("Enter your strings here:\n");
    scanf("%s", &word);

    checkChar(word);

    return 0;
}