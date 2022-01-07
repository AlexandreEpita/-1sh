#include "fifo.h"

static struct fifo* fifo_new(struct node *node)
{
    struct fifo* fifo = xcalloc(1,sizeof(struct fifo));
    fifo->node = node;
    return fifo;
}

struct fifo *fifo_add(struct fifo* fifo, struct node* node)
{
    struct fifo*new = fifo_new(node);

    if(!fifo)
        return new;
    struct fifo*ite = fifo;

    while(ite->next)
    {
        ite = ite->next;
    }

    return fifo;
}

struct node* fifo_peek(struct*fifo fifo)
{
    if(!fifo)
        return NULL;
    return fifo->node;
}

void fifo_pop(struct fifo*fifo)
{
    if(!fifo)
        return NULL;
    
    struct fifo* next = fifo->next;
    free(fifo);
}
