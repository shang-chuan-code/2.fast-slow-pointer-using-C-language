/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-26 22:04:32
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-05-05 20:59:50
 * @FilePath: \2.fast-slow-pointer-using-C-language\main.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "countback.h"
#include "sharestr.h"


int main(int argc, void *args[])
{

    if(argc < 2 || strcmp(args[1], "1") == 0)
    {
        printf(" question 1 \n");
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
    else if (strcmp(args[1], "2") == 0)
    {
        printf(" question 2 \n");
        Node_Char *str1head = NULL;
        Node_Char *str1tail = NULL;
        Node_Char *str2head = NULL;
        Node_Char *str2tail = NULL;
        char data = 0;

        
        Node_Char * nodeI = list_node_init('i');
        Node_Char * nodeN = list_node_init('n');
        Node_Char * nodeG = list_node_init('g');

        str1tail =  list_char_add_tail(&str1head, 'l');
        str1tail =  list_char_add_tail(&str1tail, 'o');
        str1tail =  list_char_add_tail(&str1tail, 'a');
        str1tail =  list_char_add_tail(&str1tail, 'd');
        str1tail =  list_node_add_tail(&str1tail, nodeI);
        str1tail =  list_node_add_tail(&str1tail, nodeN);
        str1tail =  list_node_add_tail(&str1tail, nodeG);

        str2tail =  list_char_add_tail(&str2head, 'b');
        str2tail =  list_char_add_tail(&str2tail, 'e');
        str2tail =  list_node_add_tail(&str2tail, nodeI);
        str2tail =  list_node_add_tail(&str2tail, nodeN);
        str2tail =  list_node_add_tail(&str2tail, nodeG);

        list_share_str(str1head, str2head, &data);
        printf("share start = %c\n", data); 

    }
    

}