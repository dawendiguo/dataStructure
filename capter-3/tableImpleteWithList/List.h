#ifndef _List_H

struct Node;
typedef struct Node *PtrNode;
typedef PtrNode List;
typedef PtrNode Position;
typedef int ElementType;

List creatList(void);
void MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P,List L);
Position Find(ElementType X, List L);
void Delete(ElementType X,List L);
Position FindPrevious(ElementType X,List L);
void Insert(ElementType X,List L,Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
ElementType Retrieve(Position P);
int getSize(List L);

#endif    /* _List_H */

/* Place in the implementation file */
struct Node {
        ElementType Element;
        Position Next;
};
