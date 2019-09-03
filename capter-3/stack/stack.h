#ifndef _STACK_H

struct node;
typedef struct node *ptrToNode;
typedef ptrToNode stack;
typedef int ElementType;

int isEmpty(stack s);
void makeEmpty(stack s);
stack createStack(void);
void disposeStack(stack s);
void push(ElementType x,stack s);
ElementType top(stack s);
void pop(stack s);

#endif

/* place in implementation file */
/* stack implementation is a linked list with a header */

struct node{
        ElementType element;
        ptrToNode next;
};
