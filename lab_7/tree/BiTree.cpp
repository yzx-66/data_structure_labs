//
// Created by yzx66 on 2019/12/3.
//

#include "BiTree.h"

TNode* insert_bi_func(TNode* node,int data);

void BiTree::insert(int data) {
    Tree::tree=insert_bi_func(Tree::tree,data);
}


TNode* insert_bi_func(TNode* node,int data){
    if(node==NULL){
        node=new TNode(data);
    }else{
        if(data<node->data){
            node->left=insert_bi_func(node->left,data);
        } else if(data>node->data){
            node->right=insert_bi_func(node->right,data);
        }
    }
    return node;
}