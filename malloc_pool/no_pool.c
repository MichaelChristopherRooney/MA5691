#include "common.h"

int main(void){
	setup_arrays();
	int n, i;
	for(n = 0; n < NUM_PASSES; n++){
		for(i = 0; i < SIZE; i++){
			array_without_pool[i]->x = 1;
			array_without_pool[i]->y = 1.0;
		}
	}
	return 0;
}
