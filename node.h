#ifndef FLAG1
#define FLAG1


#include"edge.h"
#include"main.h"

typedef struct node
{
int id;
struct node* nextNode;
edge* nextEdge;
struct node* prev;
int length;

}node;

node* nodeAllloc(int id1,node* pnode);


#endif