/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-26 22:04:32
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-29 23:07:29
 * @FilePath: \2.fast-slow-pointer-using-C-language\main.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "countback.h"


int main(int argc, void *args)
{
    Node_Int *head = NULL;
    Node_Int *tail = NULL;
    int data = 0;
    tail =  list_int_add_tail(&head, 1);
    tail =  list_int_add_tail(&tail, 2);
    tail =  list_int_add_tail(&tail, 3);
    tail =  list_int_add_tail(&tail, 4);
    tail =  list_int_add_tail(&tail, 5);
    tail =  list_int_add_tail(&tail, 6);
    list_int_printf(head);
    list_count_backwards(head, 2, &data);
    printf("data = %d \n", data);
}