#include <stdio.h>
#include <stdlib.h>

int find_max(int *, int);

int main(){

	srand(time(NULL));
	int rnd = 0;
	
	while (rnd == 0){
		rnd = rand() % 20;
	}
	
	int arnd[rnd];

	printf("Your array:\n");
	for (int x = 0; x < (sizeof(arnd) / sizeof(arnd[0])); x++){
		
		arnd[x] = rand() % 1000;	
		printf("%d\t", arnd[x]);
	}
	printf("\n");
	
	printf("Max element in this array is:\t");
	printf("%d\n", find_max(arnd,(sizeof(arnd) / sizeof(arnd[0]))));

}

int find_max(int * p, int size){

	int max = 0;

	for (int x = 0; x < size; x++){
		if (max < *(p+x)) max = *(p+x);
	}

	return max;
}