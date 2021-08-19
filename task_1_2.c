#include <stdio.h>

struct RGB8{
		unsigned char R;
		unsigned char G;
		unsigned char B;
};

struct RGB5{
		unsigned char R:5;
		unsigned char G1:3;
		unsigned char G2:3;
		unsigned char B:5;
};

struct RGB5 convert(struct RGB8);

int main(){
		
		struct RGB8 rgb888;
	
		printf("Please enter value of red channel\n");
		scanf("%hhd", &rgb888.R);
		printf("Please enter value of green channel\n");
		scanf("%hhd", &rgb888.G);
		printf("Please enter value of blue channel\n");
		scanf("%hhd", &rgb888.B);
	
		struct RGB5 rgb565 = convert(rgb888);
		
		printf("%d.%d.%d\n", rgb888.R, rgb888.G, rgb888.B);
		printf("%d.%d.%d\n", rgb565.R, rgb565.G1 + rgb565.G2 * 8, rgb565.B);	
	
}

struct RGB5 convert(struct RGB8 rgb)
{
		struct RGB5 newRGB;
		char G;
	
		newRGB.R = (char)((float) rgb.R * 31.0 / 255.0 + 0.5 );		
		newRGB.B = (char)((float) rgb.B * 31.0 / 255.0 + 0.5 );
		G = (char)((float) rgb.G * 63.0 / 255.0 + 0.5 );
	
		if (G <= 7) {
				newRGB.G1 = G;
				newRGB.G2 = 0;
		} else {
				newRGB.G1 = G % 8;
				newRGB.G2 = G / 8;
		}
	
		return newRGB;
}