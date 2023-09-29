#include<stdio.h>

void printMatrix(int matrix[], int row, int col){
    int a=0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d ",matrix[a]);
            a++;
        }
        printf("\n");
    }
}

void getMatrix(int matrix[],int amount,int row,int col){
    int a,j,i;
    a=0;
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
//get dimension
    int m, n, mxn;
  scanf("%d %d", & m, & n);
  printf("M is %d and N is %d\n", m, n);
  mxn = m * n;
  int num[mxn];

    getMatrix(num,mxn,m,n);
    printf("\n");
    printMatrix(num,m,n);
    return 0;
}

