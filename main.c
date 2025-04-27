/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-26 22:04:32
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-26 22:31:59
 * @FilePath: \2.fast-slow-pointer-using-C-language\main.c
 */
#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node *next;
}Node;






/**
 * @description: 找到倒数第k个节点
 * @param {Node} *head
 * @param {int} k
 * @return {*}
 */
int list_count_backwards(Node *head, int k, int* data)
{
    Node* fast = head;
    Node* slow = head;
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


int main(int argc, void *args)
{
    Node *head = NULL;
    Node *tail = NULL;
    int data = 0;
    tail =  list_add_tail(&head, 1);
    tail =  list_add_tail(&tail, 2);
    tail =  list_add_tail(&tail, 3);
    tail =  list_add_tail(&tail, 4);
    tail =  list_add_tail(&tail, 5);
    tail =  list_add_tail(&tail, 6);
    list_printf(head);
    list_count_backwards(head, 3, &data);
    printf("data = %d \n", data);
}