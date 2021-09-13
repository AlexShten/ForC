struct linklist {
	int data;
	struct linklist *previous_element;
};

struct linklist * list_add(struct linklist *, int);
struct linklist * list_contains(struct linklist *, int);
struct linklist * list_remove(struct linklist *, struct linklist *);