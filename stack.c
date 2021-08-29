/**
 * Copyright © 2021 ssaik. All rights reserved
 */

 #ifdef __cplusplus
 extern "C" {
 #endif /* __cpluspuls */

 /*
  * included files
  */
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "stack.h"

struct node *top = NULL;

unsigned long push_node(int data) {
	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = top;
	top = new_node;
	printf("node data %d was added\n", top->data);
	return (unsigned long)top;
}

unsigned long pop_node(void) { 
	struct node *top_node;
	top_node = top;
	top = top_node->next;
	printf("node data %d was poped out\n", top_node->data);
	free(top_node);
	return (unsigned long)top;
 }

 int count_node(void) {
 	int result = 0;
	struct node *index = top;
	while(index) {
		result++;
		index = index->next;
	} 
	printf("%d nodes in the stack\n", result);
	return result;
 }

void print_node(void) {
	struct node *index = top;
	while(index) {
		printf("%d\n", index->data);
		index = index->next;
	}
}

