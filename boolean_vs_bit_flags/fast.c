#include <stdbool.h>
#include <stdlib.h>

#include "common.h"

#define BIT_FLAG_0 1
// etc
#define BIT_FLAG_16 65536
struct boolean_struct {
	int bit_flags;
};

int main(void){
	struct boolean_struct *s = malloc(sizeof(struct boolean_struct) * SIZE);
	int n, i;
	for(n = 0; n < NUM_PASSES; n++){
		for(i = 0; i < SIZE; i++){
			s[i].bit_flags = s[i].bit_flags | BIT_FLAG_0;
			s[i].bit_flags = s[i].bit_flags | BIT_FLAG_16;
		}
	}
}
