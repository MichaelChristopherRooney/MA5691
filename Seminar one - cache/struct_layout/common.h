#include <stdlib.h>

#define SIZE 10000
#define NUM_PASSES 1000
#define STRING_SIZE 100

struct fast {
	int a;
	int b;
	char *c;
};

struct slow {
	int a;
	int b;
	char c[STRING_SIZE];
};

struct fast *fast_arr;
struct slow *slow_arr;

void init(){
	fast_arr = malloc(sizeof(struct fast) * SIZE);
	int i;
	for(i = 0; i < SIZE; i++){
		fast_arr[i].c = malloc(STRING_SIZE);
	}
	slow_arr = malloc(sizeof(struct slow) * SIZE);
}

