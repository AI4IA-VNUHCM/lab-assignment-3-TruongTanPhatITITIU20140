/*
1.	Input an array of n integers. Write a function to check whether
the array is symmetric or not (optional: use recursive)
Ex:
 ____________________________________ 
| Input: 1 2 3 2 1                   |
| Output: symmetric                  |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int arr[], int n){
	//Your codes here
	//Your codes here
	int mid = n / 2;
	int i = 0, j = n - 1;
	int symmetric = 1;

	while (i < mid && j >= mid)
	{
		if (arr[i] != arr[j])
		{
			symmetric = 0;
			printf("Assymetric");
			break;
		}
		i++;
		j--;
	}
	if (symmetric)
		printf("symetric");
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex1(testcase, argc);
	
	return 0;
}
