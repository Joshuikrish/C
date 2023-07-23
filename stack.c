#include <stdio.h>

#define MAXSIZE 10

int stack[MAXSIZE];
int top = -1;

int isempty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

int isfull() {
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}

int peek() {
    if (isempty()) {
        printf("Stack is empty.\n");
        return -1;  // Return a sentinel value indicating empty stack
    } else {
        return stack[top];
    }
}

int pop() {
    int data;
    if (isempty()) {
        printf("Stack is empty.\n");
        return -1;  // Return a sentinel value indicating empty stack
    } else {
        data = stack[top];
        top = top - 1;
        return data;
    }
}

void push(int data) {
    if (isfull()) {
        printf("Stack is full.\n");
    } else {
        top = top + 1;
        stack[top] = data;
    }
}

int main() {
    push(3);
    push(10);
    push(7);

    int topElement = peek();
    if (topElement != -1)
        printf("Element at the top of stack is: %d\n", topElement);

    int poppedElement = pop();
    if (poppedElement != -1)
        printf("Popped element is: %d\n", poppedElement);

    topElement = peek();
    if (topElement != -1)
        printf("Element at the top of stack is: %d\n", topElement);

   
 return 0;
}
