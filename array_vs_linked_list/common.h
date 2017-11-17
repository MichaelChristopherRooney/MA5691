#include <stdlib.h>

struct node {
	long long value;
	struct node *next;
};

#define NUM_PASSES 1000
#define SIZE 1000
#define PADDING 4096

// I add padding to each malloc call to simulate two things:
// 1)	Nodes being disjoint due to being created at different times with 
//	other malloc calls in-between
// 2)	Nodes being disjoint due to malloc not returning adjacement addresses
//	for two adjacent calls (this is implementation dependent)
struct node * setup_list(void){
	struct node *head = malloc(sizeof(struct node));
	struct node *prev = head;
	int i;
	for(i = 0; i < SIZE; i++){
		struct node *cur = malloc(sizeof(struct node) + PADDING);
		prev->next = cur;
		prev = cur;
	}
	return head;
}
