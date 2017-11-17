#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *next;
	int data;
};

#define SIZE 1000
#define NUM_PASSES 10000
#define PADDING 1024

struct node *head_with_pool;
struct node *head_without_pool;

void setup_pool_list(){
	head_with_pool = malloc(sizeof(struct node) * SIZE);
	struct node *cur = head_with_pool;
	int i;
	for(i = 0; i < SIZE; i++){
		cur->next = head_with_pool + i;
		cur = cur->next;
	}
}

void setup_non_pool_list(){
	head_without_pool = malloc(sizeof(struct node) + PADDING);
	struct node *cur = head_without_pool;
	int i;
	for(i = 0; i < SIZE; i++){
		cur->next = malloc(sizeof(struct node) + PADDING);
		cur = cur->next;
	}
}

void setup_lists(){
	setup_pool_list();
	setup_non_pool_list();
}
