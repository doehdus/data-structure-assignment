#pragma once
#define STACK_SIZE 100

typedef int element;
element stack[STACK_SIZE]; //400바이트할당

int isStackEmpty();
int isStackFull();
void push(element item);
element pop();
element peek();
void printStack();