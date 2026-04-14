#pragma once
#define cQ_SIZE 4

typedef char element; //큐 원소의 자료형을 char로 정의

typedef struct {
	element queue[cQ_SIZE]; //큐의 배열
	int front; //큐의 front
	int rear; //큐의 rear
} QueueType;

QueueType* createQueue();
int isCQueueEmpty(QueueType* cQ);
int isCQueueFull(QueueType* cQ);
void enCQueue(QueueType* cQ, element item);
element deCQueue(QueueType* cQ);
element peekCQ(QueueType* cQ);
void printCQ(QueueType* cQ);
