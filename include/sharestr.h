/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-27 22:37:58
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-05-05 20:58:19
 * @FilePath: \2.fast-slow-pointer-using-C-language\include\countback.h
 */
#ifndef _SHARE_STR_H_
#define _SHARE_STR_H_


typedef struct node_char
{
    char data;
    struct node_char *next;
}Node_Char;

Node_Char *list_char_add_tail(Node_Char **tail, char data);
Node_Char *list_node_init(char data);
Node_Char *list_node_add_tail(Node_Char **tail, Node_Char *share);

int list_char_printf(Node_Char *head, int *len);
int list_share_str(Node_Char *str1head, Node_Char *str2head, char *data);





#endif