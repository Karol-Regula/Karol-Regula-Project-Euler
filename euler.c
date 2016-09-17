//C
//Have to compile with "gcc euler.c -lm"
#include <math.h>
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
	if (x2 > x1){
	    x1 = x1 + x2;
	    if (x1 % 2 == 0){
		total += x1;
	    }
	}else{
	    x2 = x1 + x2;
	    if (x2 % 2 ==0){
		total += x2;
	    }
	}
	//printf("%d, %d \n", x1, x2);
    }
    return total;
}

long problem3(long n){
    double temp = sqrt(n);  
    long answer = temp;
    long tester = 2;
    long isPrime = 1;
    while (answer > 0){
	if (n % answer == 0){//is a factor, test for primeness
	    tester = 2;
	    while (tester < answer){
		//long x = answer % tester;
		//printf("%ld, %ld, %ld \n",answer, tester,x);
		if (answer % tester == 0){
		    isPrime = 0;
		    tester = answer;//stops loop
		}
		tester++;
	    }
	    if (isPrime == 1){
		return answer;
	    }
	}
	answer--;
	isPrime = 1;
    }
    return 0;
}

int main(){

    int p1 = problem1();
    printf("Problem 1: %d \n", p1);

    int p2 = problem2();
    printf("Problem 2: %d \n", p2);

    int p3 = problem3(600851475143);
    printf("Problem 3: %d \n", p3);
  
    return 0;
}
