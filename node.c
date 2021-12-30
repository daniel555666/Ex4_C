#include<stdio.h>
#include<stdlib.h>
#include "edge.h"
#include<limits.h>
#include"main.h"



typedef struct node
{
int id;
struct node* nextNode;
edge* nextEdge;
struct node* prev;
int length;

}node;

node* nodeAllloc(int id1,node* pnode){

    node* pn=(node*)malloc(sizeof(node));
    pn->length=INT_MAX;
    pn->nextNode=pnode;
    pn->nextEdge=NULL;
    pn->id=id1;
    pn->prev=NULL;

    return pn;
}

// void main(){
//     node* p=nodeAllloc(8,NULL);
//     printf("%d",p->id);
