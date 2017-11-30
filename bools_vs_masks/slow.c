#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ITEMS 1000000
#define NUM_ITERATIONS 100
#define VALUE_SIZE 32

struct test_bool {
	bool values[32];
};

int main(void){
	struct timeval start_time; 
	struct timeval end_time;
	long long time_taken = 0L;
	struct test_bool *d = malloc(sizeof(struct test_bool) * NUM_ITEMS);
	int i;
	int n;
	gettimeofday(&start_time, NULL);
	for(n = 0; n < NUM_ITERATIONS; n++){
		for(i = 0; i < NUM_ITEMS; i++){
			d[i].values[1] = true;
		}
	}

	gettimeofday(&end_time, NULL);
	time_taken += (end_time.tv_sec - start_time.tv_sec) * 1000000L + (end_time.tv_usec - start_time.tv_usec);
	printf("Time: %lld microseconds\n", time_taken);
}
