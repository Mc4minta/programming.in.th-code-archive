#include<stdio.h>
void getMatrix(int matrix[],int amount,int row,int col){
    int a,j,i;
    for(j = 0; j < row; j++){
        for (int i = 0; i < col; i++){
            scanf("%d",&matrix[a]);
            a++;
            }
    }
}

void printArray(int array[],int amount){
      for (int k = 0; k < amount; k++){
        printf("%d", array[k]);
    }
}

int main(){
    int row = 3;
    int col = 3;
    int amount = row*col;
    int num[amount];
    getMatrix(num,amount,row,col); 
    printArray(num,amount);
    return 0;
}