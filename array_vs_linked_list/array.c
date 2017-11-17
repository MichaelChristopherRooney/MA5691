#include <stdlib.h>

#include "common.h"

// Note: to ensure fair cache profiling we still setup the linked list here as we do in the other tests.
// If this wasn't done then this code would have an advantage over the linked list code.
int main(void){
	struct node *cur = setup_list();
	long long *a = malloc(sizeof(long long) * SIZE);
	int n;
	int i;
	for(n = 0; n < NUM_PASSES; n++){
		for(i = 0; i < SIZE; i++){
			a[i] = i;
		}
	}

	return 0;
}
