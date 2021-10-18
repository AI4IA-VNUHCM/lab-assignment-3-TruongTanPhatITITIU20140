/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int in_arr[], int n){
	//Your codes here
		int i;
	int in_max = 1, in_len = 1, in_maxIdx = 0;
	int de_max = 1, de_len = 1, de_maxIdx = 0;
	for (int i = 1; i < n; i++)
	{
		if (in_arr[i] > in_arr[i - 1])
			in_len++;
		else
		{
			if (in_max < in_len)
			{
				in_max = in_len;
				in_maxIdx = i - in_max;
			}
			in_len = 1;
		}

		if (in_arr[i] < in_arr[i - 1])
			de_len++;
		else
		{
			if (de_max < de_len)
			{
				de_max = de_len;
				de_maxIdx = i - de_max;
			}
			de_len = 1;
		}
	}
	printf("Increasing ");
	for (i = in_maxIdx; i < in_max + in_maxIdx; i++)
		printf("%d ", in_arr[i]);
	printf("Decreasing ");
	for (i = de_maxIdx; i < de_max + de_maxIdx; i++)
		printf("%d ", in_arr[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex3(testcase, argc);
	
	return 0;
}
