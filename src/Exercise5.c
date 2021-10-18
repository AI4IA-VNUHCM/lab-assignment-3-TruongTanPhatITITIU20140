/*
5. Write a function to move all positive element of an array upfront
Ex:
______________________________________
| Input: 2 -3 4 6 -7 9 8 -2          |
| Output: 2 4 6 9 8 -3 -7 -2         |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int arr[], int i, int j)
{
	int store = arr[i];
	arr[i] = arr[j];
	arr[j] = store;
}

void Ex5(int arr[], int n){
	//Your codes here
	for (int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++){
			if(arr[i] < 0 && arr[j] >0){
				swap(arr,i,j);
				break;
			}
		}
    }
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex5(testcase, argc);
	for(int loop = 0; loop < argc; loop++)
      printf("%d ", testcase[loop]);	
	return 0;
}
