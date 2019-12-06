//
// Created by yzx66 on 2019/12/3.
//

#include "AvlTree.h"
#include "math.h"

TNode* insert_avl_func(TNode* node,int data);
void calculateHeight(TNode* node,int level,int& height);
bool isBalanceNode(TNode* node,int& type);
TNode* adjustTree(TNode* node);
TNode* adjustLL(TNode* node);
TNode* adjustLR(TNode* node);
TNode* adjustRR(TNode* node);
TNode* adjustRL(TNode* node);

void AvlTree::insert(int data) {
    Tree::tree=insert_avl_func(Tree::tree,data);
    Tree::tree=adjustTree(Tree::tree);//注意最后要让tree等于返回值
}

TNode* insert_avl_func(TNode* node,int data){
    if(node==NULL){
        return new TNode(data);
    }
    if(node->data > data){
        node->left=insert_avl_func(node->left,data);
    } else if(node->data < data){
        node->right=insert_avl_func(node->right,data);
    }
    return node;
}

TNode* adjustTree(TNode* node){
    if(node){
        int type;
        if(!isBalanceNode(node,type)){
            if(type==1){
                return adjustLL(node);
            }else if(type==2){
                return adjustLR(node);
            }else if(type==3){
                return adjustRR(node);
            } else if(type==4){
                return adjustRL(node);
            }
        }

        node->left=adjustTree(node->left);
        node->right=adjustTree(node->right);
        return node;//注意最后要返回这个该节点
    }
    return NULL;
}

void calculateHeight(TNode* node,int level,int& height){
    if(node){
        height=height>level ? height : level;
        calculateHeight(node->right,level+1,height);
        calculateHeight(node->left,level+1,height);
    }
}

bool isBalanceNode(TNode* node, int& type){
    if(node){
        int l_height=0;
        int r_height=0;
        calculateHeight(node->left,1,l_height);
        calculateHeight(node->right,1,r_height);

        if(l_height-r_height >= 2){
            TNode* l_first_node=node->left;
            int height1=0,height2=0;
            calculateHeight(l_first_node->left,1,height1);
            calculateHeight(l_first_node->right,1,height2);
            type=height1>height2 ? 1 : 2;
            return false;
        }else if(r_height-l_height>=2){
            TNode* r_firstNode=node->right;
            int height1=0,height2=0;
            calculateHeight(r_firstNode->left,1,height1);
            calculateHeight(r_firstNode->right,1,height2);
            type=height1>height2 ? 4 : 3;
            return false;
        }

        return true;
    }
    return true;
}


TNode* adjustLL(TNode* node){
    TNode *A=node,*A_r=A->right,*B=A->left,*B_l=B->left,*B_r=B->right;
    B->right=A;
    A->left=B_r;
    return B;
}
TNode* adjustLR(TNode* node){
    TNode *A=node,*A_r=A->right,*B=A->left,*B_l=B->left,*C=B->right,*C_l=C->left,*C_r=C->right;
    C->left=B;
    C->right=A;
    B->right=C_l;
    A->left=C_r;
    return C;
};
TNode* adjustRR(TNode* node){
    TNode *A=node,*A_l=A->left,*B=A->right,*B_l=B->left,*B_r=B->right;
    B->left=A;
    A->right=B_l;
    return B;
}
TNode* adjustRL(TNode* node){
    TNode *A=node,*A_l=A->left,*B=A->right,*B_r=B->right,*C=B->left,*C_l=C->left,*C_r=C->right;
    C->left=A;
    C->right=B;
    A->right=C_l;
    B->left=C_r;
    return C;
}