#include "common.h"

int main(void){
	setup_lists();
	int n, i;
	for(n = 0; n < NUM_PASSES; n++){
		struct node *cur = head_with_pool;
		for(i = 0; i < SIZE; i++){
			cur->data = i;
			cur = cur->next;
		}
	}
	return 0;
}
