#ifndef FIFO_H
#define FIFO_H

#include <stdio.h>
#include "node.h"
#include "xcalloc.h"

struct fifo
{
    struct node* node;
    struct fifo* next;
};

static struct fifo fifo_new(enum operation);

#endif
