#include <stdio.h>
#include <stdlib.h>
#include "countback.h"

int list_printf(Node_Int *head)
{
    Node_Int *tmp = head;

    while(NULL != tmp)
    {
        printf("list data = %d\n", tmp->data);    
        tmp = tmp->next;
    }

    return 0;    
}

Node_Int *list_add_tail(Node_Int **tail, int data)
{
    Node_Int * node = (Node_Int *)malloc(sizeof(Node_Int));
    node->data = data;
    node->next = NULL;

    if(NULL == *tail)
    {
        *tail = node;
        return *tail;
    }

    (*tail)->next = node;
    return (*tail)->next;
}


/**
 * @description: 找到倒数第k个节点
 * @param {Node_Int} *head
 * @param {int} k
 * @return {*}
 */
int list_count_backwards(Node_Int *head, int k, int* data)
{
    Node_Int* fast = head;
    Node_Int* slow = head;
    int i;
    for(i=0; i<k; i++)
    {
        if(NULL == fast) return -1;
        fast = fast->next;
    }

    while (NULL != fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    
    *data = slow->data;
    return 0;
}