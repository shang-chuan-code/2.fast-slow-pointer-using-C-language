/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-27 22:35:39
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-05-05 20:59:27
 * @FilePath: \2.fast-slow-pointer-using-C-language\src\countback.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "sharestr.h"

int list_char_printf(Node_Char *head, int *len)
{
    Node_Char *tmp = head;

    while(NULL != tmp)
    {
        printf("str data = %c ", tmp->data);    
        tmp = tmp->next;
        (*len) ++;
    }
    printf("\nstr len = %d\n", *len);

    return 0;
}


Node_Char *list_char_add_tail(Node_Char **tail, char data)
{
    Node_Char *node = (Node_Char *)malloc(sizeof(Node_Char));
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



Node_Char *list_node_add_tail(Node_Char **tail, Node_Char *share)
{

    if(NULL == *tail)
    {
        *tail = share;
        return *tail;
    }

    (*tail)->next = share;
    return (*tail)->next;

}

Node_Char *list_node_init(char data)
{
    Node_Char *node = (Node_Char *)malloc(sizeof(Node_Char));
    node->data = data;
    node->next = NULL;
    
    return node;

}
/**
 * @description: 找到倒数第k个节点
 * @param {Node_Int} *head
 * @param {int} k
 * @return {*}
 */
int list_share_str(Node_Char *str1head, Node_Char *str2head, char *data)
{
    int strlen1 = 0;
    int strlen2 = 0;
    int difflen = 0;
    Node_Char * fastList = NULL;
    Node_Char * slowList = NULL;


    list_char_printf(str1head, &strlen1);
    list_char_printf(str2head, &strlen2);

    
    if(strlen1 > strlen2)
    {
        difflen = strlen1 - strlen2;
        fastList = str1head;
        slowList = str2head;
    }else
    {
        difflen = strlen2 - strlen1;
        fastList = str2head;
        slowList = str1head;
    }
    printf("difflen = %d \n", difflen);


    for(int i=0; i<difflen; i++)
    {
        fastList = fastList->next;
    }

    while (NULL != fastList)
    {
     
        if(fastList == slowList)
        {
            *data = fastList->data;
            break;
        }

        fastList = fastList->next;
        slowList = slowList->next;
    }
    

    return 0;
}