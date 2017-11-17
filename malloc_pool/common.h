#include <stdio.h>
#include <stdlib.h>

struct example {
	int x;
	//int *q;
	//char name[20];
	double y;
};

#define SIZE 1000
#define NUM_PASSES 10000
#define PADDING 4096

int pool_counter = 0;

struct example *array_from_pool[SIZE];
struct example *array_without_pool[SIZE];

void setup_pool_array(){
	struct example *pool = malloc(sizeof(struct example) * SIZE);
	int i;
	for(i = 0; i < SIZE; i++){
		array_from_pool[i] = pool + i;
	}
}

void setup_non_pool_array(){
	int i;
	for(i = 0; i < SIZE; i++){
		array_without_pool[i] = malloc(sizeof(struct example) + PADDING);
	}
}

void setup_arrays(){
	setup_pool_array();
	setup_non_pool_array();
}
