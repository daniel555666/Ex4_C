#ifndef FLAG2
#define FLAG2


typedef struct edge
{
    struct edge* next;
    int id;
    int w;
}edge;
edge* edgeAlloc(int id1,int w1,edge*);

#endif