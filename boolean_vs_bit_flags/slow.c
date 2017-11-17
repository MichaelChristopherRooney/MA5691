#include <stdbool.h>
#include <stdlib.h>

#include "common.h"

struct boolean_struct {
	bool bools[16];
};

int main(void){
	struct boolean_struct *s = malloc(sizeof(struct boolean_struct) * SIZE);
	int n, i;
	for(n = 0; n < NUM_PASSES; n++){
		for(i = 0; i < SIZE; i++){
			s[i].bools[0] = true;
			s[i].bools[9] = true;
		}
	}
}
