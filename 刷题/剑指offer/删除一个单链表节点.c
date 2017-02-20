/*************************************************************************
	> File Name: main.c
	> Author:   刘强
	> Mail: 849886839@qq.com 
	> Created Time: Sun 19 Feb 2017 11:30:09 PM PST
 ************************************************************************/
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>

//在O（1）的时间删除链表节点

typedef struct ListN
{
    int m_data;
    struct ListN* m_next;
}ListNode;

void DeleteNode(ListNode** phead,ListNode* DelNode)
{
    assert(*phead);
    assert(DelNode);
    
    int tmp = DelNode->m_data;
    DelNode->m_data = (*phead)->m_data;
    (*phead)->m_data = tmp;

    ListNode* del = (*phead)->m_next;
    (*phead)->m_next = del->m_next;

    free(del);
}

int main()
{
    ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    head->m_data = 0;
    head->m_next = NULL;
    
    ListNode* pre = head;
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
        newNode->m_data = i;
        newNode->m_next = NULL;
        pre->m_next = newNode;
        pre = pre->m_next;
    }
    
    DeleteNode(&head,head->m_next->m_next);

    pre = head->m_next;
    while(pre)
    {
        printf("%d\n",pre->m_data);
        pre = pre->m_next;
    }

    return 0;
}
