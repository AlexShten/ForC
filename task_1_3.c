#include <stdio.h>

int main(){
		
		double Hm, Wm;
		double Pi, Ai;
		const double in = 0.0254;
	
		printf("Please enter heigh of the rectangle (in meters)\n");
		scanf("%lf", &Hm);
		printf("Please enter weigh of the rectangle (in meters)\n");
		scanf("%lf", &Wm);
	
		Pi = (2 * (Hm + Wm)) / in;
		Ai = (Hm * Wm) / in;
	
		printf("Perimeter of the rectangle (in inches):\n");
		printf("%.2f\n", Pi);
		printf("Area of the rectangle (in inches):\n");
		printf("%.2f\n", Ai);
}