#ifndef STACK_H_
#define STACK_H_

#include <stdbool.h>

typedef char info_t;

typedef struct Node
{
	info_t info;
	struct Node* prev;
} Node;

/*
 * Add value to stack and return pointer to new top.
 */
Node* push(Node** pTop, info_t value);

/* 
 * Delete element from top and return its value. It does not 
 * check if the stack is empty. It is to be checked before 
 * function call.
 */
info_t pop(Node** pTop);

/*
 * Return element of the top. It is responsibility of the calling function
 * to check if the stack is empty.
 */
info_t getTopValue(Node* top);

/*
 * Check if stack is empty.
 */
bool isEmpty(Node* top);

/*
 * Print stack on console.
 */
void PrintStack(Node* top);


#endif