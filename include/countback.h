#ifndef _COUNT_BACK_H_
#define _COUNT_BACK_H_


typedef struct node_int
{
    int data;
    struct node *next;
}Node_Int;

Node_Int *list_add_tail_int(Node_Int **tail, int data);




#endif