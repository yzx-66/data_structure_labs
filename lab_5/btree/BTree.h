//
// Created by yzx66 on 2019/12/1.
//

#ifndef LABS_BTREE_H
#define LABS_BTREE_H

#include <fstream>

typedef char T;

class Node{
public:
    Node(){}
    Node(T data){this->data=data;this->lchild=NULL;this->rchild=NULL;}
    T data;
    Node* lchild;
    Node* rchild;
};

class BTree {
public:
    BTree(char* filename);
    BTree(Node* tree);
    void preDisplay();
    void midDisplay();
    void postDisplay();

public:
    Node* tree;
};


#endif //LABS_BTREE_H
