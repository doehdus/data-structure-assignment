#pragma once
#define Q_SIZE 4
typedef char element;  //큐 원소의 자료형을 char로 정의

typedef struct {
	element queue[Q_SIZE];  //큐의 배열
	int front;  //큐의 front 인덱스
	int rear;   //큐의 rear 인덱스
} QueueType;

QueueType* createQueue();  //큐 생성 함수
int isQueueEmpty(QueueType*Q);
int isQueueFull(QueueType* Q);
void enQueue(QueueType* Q, element item);
element deQueue(QueueType* Q);
element peek(QueueType* Q);
void printQ(QueueType* Q);