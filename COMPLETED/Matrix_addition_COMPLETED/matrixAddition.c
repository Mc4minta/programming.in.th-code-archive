#include<stdio.h>
#include<math.h>

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

void getMatrix(int matrix[], int amount, int row, int col) {
  int a, j, i;
  a = 0;
  for (j = 0; j < row; j++) {
    for (int i = 0; i < col; i++) {
      scanf("%d", & matrix[a]);
      a++;
    }
  }
}

void printArray(int array[], int amount) {
  for (int k = 0; k < amount; k++) {
    printf("%d", array[k]);
  }
}

int main() {
  int m, n, mxn;
  scanf("%d %d", & m, & n);
  mxn = m * n;
  int num1[mxn];
  int num2[mxn];

  //receive matrix
  getMatrix(num1, mxn, m, n);
  getMatrix(num2,mxn,m,n);

  //add matrix
  int ans[mxn];
  int a=0;
  for (int i = 0; i < mxn; i++){
    ans[a] = num1[a] + num2[a];
    a++;
  }
  printMatrix(ans,m,n);
  return 0;
}