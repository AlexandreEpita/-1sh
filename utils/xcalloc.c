#include "xcalloc"

void * xcalloc(size_t size, size_t size_elt)
{
    void *res = calloc(size,size_elt);

    if(!res)
        err(1,"not enough memory");

    return res;
}
