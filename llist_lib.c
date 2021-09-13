#include "llist_lib.h"
#include <stdlib.h>

struct linklist * list_add(struct linklist * last_elem, int data){

	struct linklist * new_last = malloc(sizeof * new_last);
	
	new_last->data = data;
	new_last->previous_element = last_elem;
	
	return new_last;
}

struct linklist * list_contains(struct linklist * last_elem, int data){

	while (last_elem->previous_element != NULL){
		if (last_elem->data == data) return last_elem;
		else last_elem = last_elem->previous_element;
	}
	if (last_elem->data == data) return last_elem;
	else return 0;
}

struct linklist * list_remove(struct linklist * last_elem, struct linklist * del_elem){
	struct linklist * tmp = last_elem;

	if (del_elem != last_elem){
		
		while (tmp->previous_element != del_elem){
			tmp = tmp->previous_element;
		}
		if (del_elem->previous_element != 0) tmp->previous_element = del_elem->previous_element;
		else tmp->previous_element = NULL;
		
		free(del_elem);
		
		return last_elem;
	} else {
		
		tmp = del_elem->previous_element;
		
		free(del_elem);
		
		return tmp;	
	}
}