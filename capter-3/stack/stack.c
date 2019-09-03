#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

/* stack is empty return ture */

int 
isEmpty(stack s){
        return s->next == NULL;
}

stack 
createStack(void){
        stack s;

        s = malloc(sizeof(struct node));

        if(s == NULL)
                printf("create error for stack \n");
        s->next = NULL;
        makeEmpty(s);
        return s;
}

void
makeEmpty(stack s){
        if(s == NULL)
                printf("must use createStack first\n");
        else
                while(!isEmpty(s))
                        pop(s);
}

void
push(ElementType x,stack s){
        ptrToNode tmpCell;

        tmpCell = malloc(sizeof(struct node));
        if(tmpCell == NULL)
                printf("OUt of space");
        else{
                tmpCell->element = x;
                tmpCell->next = s->next;
                s->next = tmpCell;
        }
}

ElementType
top(stack s){
        if(!isEmpty(s))
                return s->next->element;
        printf("Empty stack\n");
        return 0;
}

void pop(stack s){
        ptrToNode firstCell;

        if(isEmpty(s))
                printf("Empty stack\n");
        else{
                firstCell = s->next;
                s->next = s->next->next;
                free(firstCell);
        }
}
