/*
 * Author		: Aditya Sagam
 * Description  : Program to sort N numbers using insertion sort technique
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int arrSize, loopVar, i, j, key;
	int array[10];
	
	printf("Enter the number of elements you need to sort:\t");
	fflush(stdout);	// flush the output stream to clear output buffer
	scanf("%d", &arrSize);
	
	printf("Enter %d elements:", arrSize);
	fflush(stdout);

	for( loopVar=0; loopVar<arrSize; loopVar++){	// scan elements
		scanf("%d", &array[loopVar]);
	}
	
	for( j=1; j<arrSize; j++){
		i = j-1;
		key = array[j];

		while( i >= 0  && array[i] > key ){	// keep moving elements larger than key to the right
			array[i+1] = array[i];
			i = i-1;
		}
		array[i+1] = key;
	}

	printf("\nSorted order:\n");	// print the sorted array
	for( loopVar=0; loopVar<arrSize; loopVar++){
		printf("\n%d", array[loopVar]);
	}
	return 0;
} 
