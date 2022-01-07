#ifndef FILO_H
#define FILO_H

#include "node.h"

struct filo
{
    struct node* node;
    struct filo* next;
}

struct filo *file_new(struct node* node);

struct filo* filo_add(struct filo* filo,struct node* node);

struct node* filo_peek(struct filo* filo);

struct filo* filo_pop(struct filo* filo);
