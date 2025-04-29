/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-27 22:37:58
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-29 23:07:10
 * @FilePath: \2.fast-slow-pointer-using-C-language\include\countback.h
 */
#ifndef _COUNT_BACK_H_
#define _COUNT_BACK_H_


typedef struct node_int
{
    int data;
    struct node_int *next;
}Node_Int;


Node_Int *list_int_add_tail(Node_Int **tail, int data);
int list_count_backwards(Node_Int *head, int k, int* data);
int list_int_printf(Node_Int *head);

#endif