struct my_array {
	int * arr;
	int size;	
};

void arr_push(struct my_array *, int);

int arr_find_first(struct my_array *, int);

void arr_remove(struct my_array *, int);