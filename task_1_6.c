#include <stdio.h>

int main(){

	int val;	

	printf("Enter a number:\n");
	scanf("%d", &val);	

	printf("The following numbers are divisible by the entered number without a remainder:\n");

	for (int x = 1; x <= 500; x++){
		if (x % val == 0) printf("%d\t", x);	
	}		

	printf("\n");
}