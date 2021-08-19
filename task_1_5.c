#include <stdio.h>

int main(){

		const char val = 10;
		long fact = 1;

		for (char x = 1; x <= val; x++){
				fact *= x;	
		}
	
		printf("Factorial of 10 is:\n");
		printf("%ld\n", fact);
}