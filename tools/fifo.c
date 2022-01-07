#include "fifo.h"

static struct fifo* fifo_new(struct node *node)
{
    struct fifo* fifo = xcalloc(1,sizeof(struct fifo));
    fifo->node = node;
    return fifo;
}
