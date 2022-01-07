#include "filo.h"
#include "xcalloc.h"

struct filo *file_new(struct node* node)
{
    struct filo = xcalloc(1,sizeof(struct filo));

    filo->node = node;
    
    return filo;
}

struct filo* filo_add(struct filo* filo,struct node* node)
{
    struct filo*new = filo_new(node);
    new->next = filo;

    return filo;
}

struct node* filo_peek(struct filo* filo)
{
    if(!filo)
        return NULL;
    return filo->next;
}
struct filo* filo_pop(struct filo* filo)
{
    if(!filo)
        return NULL;

    struct filo* next = filo->next;
    free(filo);
    return next;
}
