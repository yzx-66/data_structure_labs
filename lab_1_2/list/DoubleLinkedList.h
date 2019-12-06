//
// Created by yzx66 on 2019/12/4.
//

#ifndef LABS_DOUBLELINKEDLIST_H
#define LABS_DOUBLELINKEDLIST_H

#include <cstdlib>

struct DouNode{
    int data;
    DouNode* left;
    DouNode* right;
};

struct HeadNode{
    DouNode* next;
};

class DoubleLinkedList
{
public:
    DoubleLinkedList();
    virtual ~DoubleLinkedList();
    bool inert(int pos,int data);
    bool remov(int pos);
    bool query(int pos,int& res);
    int getLenth();
    void display();

private:
    HeadNode* head;
};


#endif //LABS_DOUBLELINKEDLIST_H
