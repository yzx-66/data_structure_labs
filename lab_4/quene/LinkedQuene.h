//
// Created by yzx66 on 2019/11/27.
//

#ifndef LABS_LINKEDQUENE_H
#define LABS_LINKEDQUENE_H

#include "Quene.h"
#include "cstdlib"

class Node{
public:
    Node(){}
    Node(int data){this->data=data;this->next=NULL;}
    int data;
    Node* next;
};

class LinkedQuene: public Quene {
public:
    LinkedQuene();

    bool inQuene(int data) override;

    bool deQuene() override;

    bool getHead(int &data) override;

    bool isFull() override;

    bool isEmpty() override;

    ~LinkedQuene() override;

    int getLenth() override;

    void toString() override;

    void init() override;

private:
    Node* head;
    Node* tail;
    int lenth;
};


#endif //LABS_LINKEDQUENE_H
