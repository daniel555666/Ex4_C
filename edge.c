#include <stdio.h>
#include<stdlib.h>


typedef struct edge
{
    struct edge* next;
    int id;
    int w;
}edge;

edge* edgeAlloc(int id1,int w1,edge* nextE){

    edge* pe=(edge*)malloc(sizeof(edge));
    pe->id=id1;
    pe->w=w1;
    pe->next=nextE;

    return pe;
}

// void main(){
//     edge* p=edgeAlloc(1,2,NULL);
//     printf("%d%d",p->id,p->w);
// }
