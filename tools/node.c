#include "node.h"

struct *node node_new(enum operation, char* value)
{
    struct *node res = calloc(1,sizeof(struct node));
    res->value = value;

    if(!res)
        err(1,"not enough memory");

    return res;
}

void node_free(struct node* node)
{
    free(node);
}
