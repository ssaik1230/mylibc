/**
 * Copyright © 2021 ssaik. All rights reserved
 */

#ifndef _STACK_H_INCLUDED
#define _STACK_H_INCLUDED   

#ifdef __cplusplus
extern "C" {
#endif /* __cpluspuls */

/* 
 * included files
 */

/* 
 * Pre-processor Definitions
 */

/* 
 * Public Types
 */ 
struct node {
	int data;
	struct node *next;
};

/*
 * Public Function Prototypes
 */
unsigned long push_node(int data);
unsigned long pop_node(void);
int count_node(void);
void print_node(void);

#ifdef __cplusplus
}
#endif /* __cpluspuls */

#endif /* _STACK_H_INCLUDED */ 
