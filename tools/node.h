#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <err.h>

enum operation
{
    TOK_CAT,
    TOK_ECHO,
    TOK_HEAD,
    TOK_QUIT,
    TOK_AND,
    TOK_OU,
    TOK_PAR
};

struct node
{
    enum operation token;
};

struct *node node_new();

void node_free(struct node* node);

#endif
