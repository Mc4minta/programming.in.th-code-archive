#include<stdio.h>

//declare a function for finding the max number
int findmax(int num[], int n) {

  // How it works
  // declare the int max and compare the first array and the next array and make the one that is greater in max then loop it again and again un till done

  int max, i;
  max = num[0];

  for (i = 1; i < n; i++) {
    if (num[i] >= max) {
      max = num[i];
    }
  }
  return max;
}

// declare the main function
int findmin(int num[], int n) {
  int min, i;
  min = num[0];
  for (i = 1; i < n; i++) {
    if (num[i] <= min) {
      min = num[i];
    }
  }
  return min;
}
int main() {
  //INPUT
  //declare variables
  int n, i, max, min;
  //input the quantity of number you want to input to the num array with a size of n
  scanf("%d", & n);
  int num[n];
  for (i = 0; i < n; i++) {

    scanf("%d", & num[i]);

  }

  //find and print min number
  min = findmin(num, n);
  printf("%d", min);

  //find and print max number
  max = findmax(num, n);
  printf("\n%d", max);

  return 0;
}
