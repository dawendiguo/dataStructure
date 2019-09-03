#include "stack.h"
#include <stdio.h>

void testEmpty(stack s);
void listStack(stack s);

int main(){
      stack s;

      s = createStack();
      testEmpty(s);

      push(4,s);
      testEmpty(s);

      push(5,s);
      push(6,s);
      push(7,s);
      push(8,s);
      push(9,s);
      pop(s);
      pop(s);
      listStack(s);
}

void
testEmpty(stack s){

        printf("*** Start Testing ***\n");
        if(isEmpty(s))
                printf("\t stack is empty\n");
        else
                printf("\t stack is not empty\n");
        printf("*** End Testing ***\n");
}

void
listStack(stack s){
        int i = 1;

        printf("*** list stack ***\n");
        while(!isEmpty(s)){
            printf("\tGet %d Element from stack: %d\n",i,top(s));
            pop(s);
            i++;
        };
        printf("*** end list stack ***\n");
}
