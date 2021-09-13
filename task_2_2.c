#include <stdio.h>
#include <stdlib.h>
#include "llist_lib.h"


int main(){
	
	struct linklist * last_elem = NULL;
	struct linklist * rem = NULL;
	struct linklist * temp = NULL;
	
	
	for (int x = 0; x < 10; x++){

		last_elem = list_add(last_elem, x * 2);

		printf("%u\t",last_elem);
		printf("%d\t",last_elem->data);
		printf("%u\t",last_elem->previous_element);
		printf("\n");
	}
	printf("\n");
	
	rem = list_contains(last_elem, 1);
	printf("%u\n", rem);
	
	if (rem != 0) last_elem = list_remove(last_elem, rem);
	
	printf("\n");
	printf("\n");
	
	temp = last_elem;
	while (temp->previous_element != NULL){
		printf("%u\t",temp);
		printf("%d\t",temp->data);
		printf("%u\t",temp->previous_element);
		printf("\n");
		temp = temp->previous_element;
	}
	printf("%u\t",temp);
	printf("%d\t",temp->data);
	printf("%u\t",temp->previous_element);
	printf("\n");
}