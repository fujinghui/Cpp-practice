typedef struct Node{
    char element;
    struct Node * next;
}Node, *LinkedList;


//链式表的初始化
void Initialize(LinkedList & l);
//尾插入
void InsertAtEnd(LinkedList & l, char c);
//链式表的输出
void Output(LinkedList l);
//获取链式表的长度
int Length(LinkedList l);
//判断链式表是否为空
int IsEmpty(LinkedList l);
//获取某个位置的元素
int GetCharAt(LinkedList l, int loc);
//获取元素所在的位置
int GetIndexOf(LinkedList l, char c);
//在指定位置之前插入元素
int InsertAtLoc(LinkedList & l, int loc, char c);
//删除某个位置的元素
int DropAtLoc(LinkedList & l, int loc);
//销毁线性表
void DropLinkedList(LinkedList & l);



#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
void Initialize(LinkedList & l){
    l = (LinkedList) malloc (sizeof(Node));
    l->next = NULL;
}

void InsertAtEnd(LinkedList & l, char c){
    Node * p = l;
    while(p->next){
        p = p->next;
    }
    
    Node * q = (Node *) malloc (sizeof(Node));
    q->element = c;
    q->next = NULL;
    
    p->next = q;
}

void Output(LinkedList l){
    Node * p = l->next;
    while(p){
        printf("%c ", p->element);
        p = p->next;
    }
}

int Length(LinkedList l){
    Node * p = l->next;
    int len = 0;
    while(p){
        len++;
        p = p->next;
    }
    return len;
}

int IsEmpty(LinkedList l){
    return l->next == NULL;
}

int GetCharAt(LinkedList l, int loc){
    if(loc < 1 || loc > Length(l)){
        return FALSE;
    }
    
    int i = 1;
    Node * p = l->next;
    while(p){
        if(i == loc){
            return p->element;
        }
        p = p->next;
        i++;
    }
    return FALSE;
}

int GetIndexOf(LinkedList l, char c){
    int i = 0;
    Node * p = l->next;
    while(p){
        if(p->element == c){
            return i + 1;
        }
        p = p->next;
    }
    
    return FALSE;
}

int InsertAtLoc(LinkedList & l, int loc, char c){
    int i = 1;
    if(loc > Length(l)){
        return FALSE;
    }
    
    Node * p = l;
    while(i < loc){
        i++;
        p = p->next;
    }
    
    Node * q = (Node *)malloc(sizeof(Node));
    q->element = c;
    q->next = p->next;
    p->next = q;
    return TRUE;
}

int DropAtLoc(LinkedList & l, int loc){
    if(loc > Length(l)){
        return FALSE;
    }
    
    int i = 1;
    Node * p = l;
    while(i < loc){
        p = p->next;
        i++;
    }
    
    p->next = p->next->next;
    return TRUE;
}

void DropLinkedList(LinkedList & l){
    Node * p = l;
    Node * q = p;
    while(p){
        p = p->next;
        free(q);
        q = p;
    }
}

int main(){
    LinkedList l;
    Initialize(l);
    printf("Initialize linkedlist.");
    InsertAtEnd(l, 'a');
    InsertAtEnd(l, 'b');
    InsertAtEnd(l, 'c');
    InsertAtEnd(l, 'd');
    InsertAtEnd(l, 'e');
    
    printf("\nAfter Insert at end: ");
    Output(l);
    
    printf("\nThe linkedlist's length is: %d",Length(l));
    if(IsEmpty(l)){
        printf("\nThe linkedlist is empty");
    } else {
        printf("\nThe linkedlist is not empty");
    }
    
    
    if(GetCharAt(l, 3)){
        printf("\nThe 3-th element is: %c", GetCharAt(l, 3));
    }
    
    if(GetIndexOf(l, 'a')){
        printf("\nThe element 'a' is at %d-th", GetIndexOf(l, 'a'));
    }
    
    if(InsertAtLoc(l, 4, 'f') == 0){
        printf("\nInsert location is invaild.");
    }
    
    printf("\nAfter insert at 4-th: ");
    Output(l);
    
    printf("\nDrop 3-th element: ");
    DropAtLoc(l, 3);
    
    Output(l);
    
    printf("\nDestory linkedlist.");
    DropLinkedList(l);
    return 0;
}
