#pragma once
typedef int element; //스택 원소(element)의 자료형을 int로 정의

typedef struct stackNode{ //스택의 노드를 구조체로 정의
	element data;
	struct stackNode* link; // 구조체 포인터가 들어옴 일반포인터 일반변수에 주소값 (pointer 변수)
							// 주소는 데이터타입에 상관없이 4바이트, 일반 포인터변수는 데이터타입이 달라도 
							// 구조체와 구조체를 연결하겠다 link로. 
}stackNode;

stackNode* top; //스택의 top노드를 지정하기 위해 포인터 top 선언

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();