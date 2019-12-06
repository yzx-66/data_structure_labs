//
// Created by yzx66 on 2019/12/3.
//

#ifndef LABS_TREE_H
#define LABS_TREE_H

#include "stdlib.h"


class TNode {
public:
    TNode(){this->left=this->right=NULL;}
    TNode(int data){this->data=data;this->left=this->right=NULL;}
    int data;
    TNode* right;
    TNode* left;
};

class Tree {
public:
    Tree();
    virtual void insert(int data)=0;
    void remove(int data);
    int query(int target);
    int findMax();
    int findMin();
    void display();

protected:
    TNode* tree;
};


#endif //LABS_TREE_H
