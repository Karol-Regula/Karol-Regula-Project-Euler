//C
#include <stdio.h>
#include <stdlib.h>


int problem1(){
  int x = 0;
  int total = 0;
  while (x < 1000){
    if (x % 3 == 0 || x % 5 == 0){
      total += x;
      //printf("%d\n",x);
    }
    x++;
  }
  return total;
}

int problem2(){
  int x1 = 1;
  int x2 = 2;
  int total = 2;
  while (x1 < 4000000 && x2 < 4000000){
  }
  return total;
}

int main(){
  printf("This works? \n");
  
  int p1 = problem1();
  printf("Problem 1: %d \n", p1);

  //int p2 = problem2();
  //printf("Problem 2: %d \n", p2);
  
  return 0;
}


