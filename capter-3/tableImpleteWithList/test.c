#include <stdio.h>
#include <stdlib.h>
#include "List.h"

void testEmpty(List l);

int
main(void){
        List list;

        list = creatList();
        printf("List size: %d\n",getSize(list));
        
        Insert(5,list,list);
        printf("List size: %d\n",getSize(list));

        Insert(4,list,list->Next);
        printf("List size: %d\n",getSize(list));
        Position p = Find(4,list);
        Insert(3,list,p);
        printf("List size: %d\n",getSize(list));
        p = Find(4,list);
        Insert(12,list,p);
        printf("List size: %d\n",getSize(list));
        Delete(4,list);
        printf("List size: %d\n",getSize(list));
        p = Find(4,list);
        if(p)
                printf("Find Element %d \n",p->Element);
        else
                printf("Element %d not found\n",4);
        p = Find(12,list);
        if(p)
                printf("Find Element %d \n",p->Element);
        else
                printf("Element not exists\n");
}

void testEmpty(List l){
        if(IsEmpty(l))
                printf("List is empty\n");
        else
                printf("List is not empty\n");
}
