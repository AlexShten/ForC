#include <stdio.h>

int main(){
		
		double P, A;
		const double pi = 3.14159265;
		const char R = 6;	

		P = pi * R * R;
		A = pi * 2 * R;
	
		printf("Perimeter of the circle (R=6):\n");
		printf("%.4f\n", P);
		printf("Area of the circle (R=6):\n");
		printf("%.4f\n", A);
}