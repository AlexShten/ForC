#include <stdio.h>
#include <stdint.h>

void swap16(unsigned char *, char);
void swap32(unsigned char *, char);
void swap64(unsigned char *, char);

int main(){

	char func;
	uint16_t value1;
	uint32_t value2;
	uint64_t value3, value;

	while (func > 3 || func < 1){
		printf("Please choose function number (1 - swap16, 2 - swap32, 3 - swap64)...\n");
		scanf("%hhd", &func);
	}

	printf("Please enter integer value\n");

	switch(func){

	case 1:
		scanf("%hd", &value1);
		swap16((unsigned char *)&value1, sizeof(value1));
		value = value1;
		break;

	case 2:
		scanf("%d", &value2);
		swap32((unsigned char *)&value2, sizeof(value2));
		value = value2;
		break;

	case 3:
		scanf("%lu", &value3);
		swap64((unsigned char *)&value3, sizeof(value3));
		value = value3;
		break;
	}	

	printf("Value after swap\n%lu\n", value);
}

void swap16(unsigned char * memp, char size)
{
	printf("Before swap:\n");	
	for (char x = 0; x < size; x++){

		printf("%u\t", memp + x);

	}	
	printf("\n");	
	for (char x = 0; x < size; x++){

		printf("%d\t\t", *(memp + x));

	}	
	printf("\n");

	for (char s = 1; s <= size/2; s++){		
		*(memp + (size - s)) += *(memp + (s - 1));
		*(memp + (s - 1)) = *(memp + (size - s)) - *(memp + (s - 1));
		*(memp + (size - s)) -= *(memp + (s - 1));
	}

	printf("After swap:\n");	
	for (char x = 0; x < size; x++){

		printf("%u\t", memp + x);

	}	
	printf("\n");	
	for (char x = 0; x < size; x++){

		printf("%d\t\t", *(memp + x));

	}	
	printf("\n");
}

void swap32(unsigned char * memp, char size)
{
	swap16(memp, size);

}

void swap64(unsigned char * memp, char size)
{
	swap16(memp, size);
}