/*
2.	Input an array of n integers. Sort the odd numbers in
increasing order and even numbers in decreasing order.
Ex:
 ____________________________________ 
| Input: 2 5 3 4 8 6 7 9 2           |
| Output: 8 3 5 6 4 2 7 9 2          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex2(int arr[], int n){
	//Your codes here
	
		
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex2(testcase, argc);
	for(int loop = 0; loop < 10; loop++)
      printf("%d ", testcase[loop]);
	return 0;
}


/*

gcc .\src\Exercise2.c -o .\bin\Ex2.exe

.\bin\Ex2.exe 2 5 3 4 8 6 7 9 2 
*/