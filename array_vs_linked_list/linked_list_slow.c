#include <stdlib.h>

#include "common.h"

int main(void){
	struct node *head = setup_list();
	int n;
	int i;
	for(n = 0; n < NUM_PASSES; n++){
		struct node *cur = head;
		for(i = 0; i < SIZE; i++){
			cur->value = i;
			cur = cur->next;
		}
	}

	return 0;
}

