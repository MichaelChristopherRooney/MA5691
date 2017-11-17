#include "common.h"

int main(void){
	init();
	int i, n;
	for(n = 0; n < NUM_PASSES; n++){
		for(i = 0; i < SIZE; i++){
			fast_arr[i].a = i;
			fast_arr[i].b = i + 1;
		}
	}
	return 0;
}

