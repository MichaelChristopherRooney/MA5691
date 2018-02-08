#include "common.h"

int main(void){
	init();
	int i, n;
	for(n = 0; n < NUM_PASSES; n++){
		for(i = 0; i < SIZE; i++){
			slow_arr[i].a = i;
			slow_arr[i].b = i + 1;
		}
	}
	return 0;
}
