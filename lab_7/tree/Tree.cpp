//
// Created by yzx66 on 2019/12/3.
//

#include "Tree.h"
#include "iostream"

using namespace std;

int query_func(TNode* node,int targe);
int findMax_func(TNode* node);
int findMin_func(TNode* node);
void display_func(TNode* node);
TNode* remove_func(TNode* node,int data);



Tree::Tree() {
    this->tree=NULL;
}

int Tree::query(int target) {
    return query_func(this->tree,target);
}

void Tree::remove(int data) {
    remove_func(this->tree,data);
}

int Tree::findMax() {
    return findMax_func(this->tree);
}

int Tree::findMin() {
    return findMin_func(this->tree);
}

void Tree::display() {
    display_func(this->tree);
}

int query_func(TNode* node,int targe){
    if(node){
        if(node->data > targe){
            return query_func(node->left,targe);
        } else if(node->data < targe){
            return query_func(node->right,targe);
        } else{
            return targe;
        }
    }
    return -1;
}

int findMax_func(TNode* node){
    if(node){
        if(node->right){
            return findMax_func(node->right);
        } else{
            return node->data;
        }
    }
}
int findMin_func(TNode* node){
    if(node){
        if(node->left){
            return findMin_func(node->left);
        } else{
            return node->data;
        }
    }

}
void display_func(TNode* node){
    if(node){
        display_func(node->left);
        cout<<node->data<<" ";
        display_func(node->right);
    }
}

TNode* remove_func(TNode* node,int data){
    if(node==NULL){
        cout<<"未找到删除的节点";
        return NULL;
    }else{
        if(data<node->data){
            node->left=remove_func(node->left,data);
            //remove_func(node->left,data);
            return node;
        }else if(data>node->data){
            node->right=remove_func(node->right,data);//还要考虑到单链下删除
            //remove_func(node->right,data);
            return node;
        }
        else{
            if(node->left && node->right){
                int min=findMin_func(node->right);
                node->data=min;
                node->right=remove_func(node->right,min);//不能用node代替t
                //node->right=remove_func(node->right,node->data);
                return node;
            }else{
                TNode* res;
                if(node->left==NULL){
                    res=node->right;
                }else if(node->right==NULL){
                    res=node->left;
                }else {
                    res=NULL;
                }
                delete node;
                return res;
            }
        }
    }
}



