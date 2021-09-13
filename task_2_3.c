#include <stdio.h>
#include <stdlib.h>
#include "array_lib.h"

int main(){
	
	struct my_array data_arr = {NULL, 0};
	

	for (int x = 0; x < 5; x++){

		arr_push(&data_arr, x);

		printf("%d\t",data_arr.arr[x]);
		printf("%d\t",data_arr.size);
		printf("\n");
	}
	printf("\n");
	
	printf("%d",arr_find_first(&data_arr, 3));
	printf("\n\n");
	
	arr_remove(&data_arr, 3);
	
	for (int x = 0; x < 4; x++){

		printf("%d\t",data_arr.arr[x]);
		printf("%d\t",data_arr.size);
		printf("\n");
	}
	printf("\n");

}