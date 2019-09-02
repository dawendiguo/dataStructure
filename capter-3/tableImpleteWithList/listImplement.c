#include "List.h"
#include "stdio.h"
#include "stdlib.h"

/* Create a new empty List */

List creatList(void){
        List l;

        l = malloc(sizeof(struct Node));
        if(l == NULL)
                printf("Create List error\n");
        l->Next = NULL;
        MakeEmpty(l);
        return l;
        
}

/* empty List l*/

void
MakeEmpty(List l){
        if(l == NULL)
                printf("empty List error, no such List \n");
        else
                while(!IsEmpty(l))
                        l->Next = NULL;
}

/* Return true if l is empty */

int 
IsEmpty(List l){
        return l->Next == NULL;
}

/* Return true if p is the last positon in list l */
/* Parameter l is unused in this implementation */

int 
IsLast(Position p,List l){
        return p->Next == NULL;
}

/* Return Position of X in L; NULL if not found */

Position 
Find(ElementType X,List L){
        Position P;

        P = L->Next;
        while(P != NULL && P->Element != X )
                P = P->Next;
        return P;
}

/* Delete First occurrence of X from a list */
/* Assume use of a header node */

void
Delete(ElementType X,List L){
        Position P,TmpCell;

        P = FindPrevious(X,L);

        if(!IsLast(P,L)){
                TmpCell = P->Next;
                P->Next = TmpCell->Next;
                free(TmpCell);
        }
}

/* If X is not found, Then Next field of returned */
/* Position is Null */
/* Sssumes a header */
Position 
FindPrevious(ElementType X,List L){
        Position P;

        P = L;
        while(P->Next != NULL && P->Next->Element != X){
                P = P->Next;
        }
        return P;
}

/* Insert (after legal position P) */
/* Header implementation assumed */
/* Parameter L is unused in the implementation */

void 
Insert(ElementType X,List L,Position P){
        Position TmpCell;

        TmpCell = malloc(sizeof(struct Node));
        if(TmpCell == NULL)
                printf("Out of space!!!");

        TmpCell->Element = X;
        TmpCell->Next = P->Next;
        P->Next = TmpCell;
}

/* get list size */
int
getSize(List l){
        int i = 0;
        Position TmpCell = l->Next;


        while(TmpCell != NULL){
                i++;
                TmpCell = TmpCell->Next;
        };
        return i;
}
