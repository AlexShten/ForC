#include <stdlib.h>
#include "array_lib.h"

void arr_push(struct my_array * input, int data){

	int * temp;

	if (input->size == 0){
		input->size++;
		input->arr = malloc(input->size * sizeof(int));
		input->arr[0] = data;		
	}
	else {
		input->size++;
		temp = malloc(input->size * sizeof(int));
		
		for (int x = 0; x < input->size-1; x++){
			temp[x] = input->arr[x];
		}
		temp[input->size-1] = data;
		
		free(input->arr);		
		input->arr = temp;
	}
}

int arr_find_first(struct my_array * input, int data){

	for (int x = 0; x < input->size; x++){		
		if (input->arr[x] == data) return x;
	}
	
	return -1;		
}

void arr_remove(struct my_array * input, int index){

	input->size--;
	
	int * temp = malloc(input->size * sizeof(int));
	int ind =0 ;
	
	for (int x = 0; x < input->size; x++){
		if (ind == index) ind++;
		temp[x] = input->arr[ind];
		ind++;
	}
	
	free(input->arr);
	input->arr = temp;	
}

