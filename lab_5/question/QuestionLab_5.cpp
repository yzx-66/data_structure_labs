//
// Created by yzx66 on 2019/12/1.
//
#include "QuestionLab_5.h"
#include "iostream"

using namespace std;

void displayTreeWithDataLevelByMid_func(Node* node,int level);
void calculateHeight_func(Node* node,int level,int& hight);
int calculateNodeNums_func(Node* node);
int calculateLeafNums_fuc(Node* node);
void calculateDegreeNumsEqualTwo_func(Node* node,int& num);
Node* showBrotherAndChildByEqualTarget_func(Node* node,char target);
int showLevelByEqualTarget_func(Node* node,char target,int level);
void changeArrayTree2LinkTree_func(Node* pNode,char tree[100],int pIndex,int size);
void exchangeLeftAndRight_func(Node* node);


void QuestionLab_5::displayTreeByThreeways(BTree bTree) {
    cout<<"先序输出：";  bTree.preDisplay();
    cout<<"中序输出：";  bTree.midDisplay();
    cout<<"后序输出：";  bTree.postDisplay();
}

void QuestionLab_5::displayTreeWithDataLevelByMid(BTree bTree) {
    displayTreeWithDataLevelByMid_func(bTree.tree,1);
}

int QuestionLab_5::calculateHeight(BTree bTree) {
    int hight=0;
    calculateHeight_func(bTree.tree,1,hight);
    return hight;
}

int QuestionLab_5::calculateNodeNums(BTree bTree) {
    return calculateNodeNums_func(bTree.tree);
}

int QuestionLab_5::calculateLeafNums(BTree bTree) {
    return calculateLeafNums_fuc(bTree.tree);
}

int QuestionLab_5::calculateDegreeNumsEqualTwo(BTree bTree) {
    int num=0;
    calculateDegreeNumsEqualTwo_func(bTree.tree,num);
    return num;
}

void QuestionLab_5::showBrotherAndChildByEqualTarget(BTree bTree, char target) {
    Node* parent=showBrotherAndChildByEqualTarget_func(bTree.tree,target);
    if(parent==NULL){
        cout<<"没有找到！"<<endl;
        return;
    }

    Node* resNode=NULL; Node* brother=NULL; Node* lChild=NULL; Node* rChild=NULL;
    bool isLeftBrother= false;

    if(parent->lchild->data == target){
        resNode=parent->lchild;
        brother=parent->rchild;
    } else{
        resNode=parent->rchild;
        brother=parent->lchild;
        isLeftBrother=true;
    }

    if(brother->lchild){
        lChild=resNode->lchild;
    }
    if(brother->rchild){
        rChild=resNode->rchild;
    }

    cout<<"父亲节点："<<parent->data<<"   "<<(isLeftBrother ? "左兄弟节点：" : "右兄弟节点：")<<brother->data<<"   "
    <<"左孩子节点："<<(lChild != NULL ? lChild->data : ' ')<<"   "<<"右孩子节点："<<(rChild!= NULL ? rChild->data : ' ')<<endl;
}

int QuestionLab_5::showLevelByEqualTarget(BTree bTree, char target) {
    return showLevelByEqualTarget_func(bTree.tree,target,1);
}

void QuestionLab_5::changeArrayTree2LinkTree(char *tree,int lenth) {
    Node* t=new Node(tree[1]);
    changeArrayTree2LinkTree_func(t,tree,1,lenth);
    BTree bTree=BTree(t);
    cout<<"转化为链式结构后先序遍历：";
    bTree.preDisplay();
}

void QuestionLab_5::exchangeLeftAndRight(BTree bTree) {
    exchangeLeftAndRight_func(bTree.tree);
    cout<<"左右子树转换后先序遍历：";
    bTree.preDisplay();
}

void displayTreeWithDataLevelByMid_func(Node* node,int level){
    if(node){
        displayTreeWithDataLevelByMid_func(node->lchild,level+1);
        cout<<"数据："<<node->data<<"  层数："<<level<<endl;
        displayTreeWithDataLevelByMid_func(node->rchild,level+1);
    }
}

void calculateHeight_func(Node* node,int level,int& hight){
    if(node){
        calculateHeight_func(node->lchild,level+1,hight);
        calculateHeight_func(node->rchild,level+1,hight);
        hight=hight<=level ? level : hight;
    }
}

int calculateNodeNums_func(Node* node){
    if(!node){
        return 0;
    }
    int l_node_num=calculateNodeNums_func(node->lchild);
    int r_node_num=calculateNodeNums_func(node->rchild);
    return l_node_num+r_node_num+1;
}

int calculateLeafNums_fuc(Node* node){
    if(!node){
        return 0;
    }

    if(node->rchild==NULL && node->lchild==NULL){
        return 1;
    }
    int l_leaf_num=calculateLeafNums_fuc(node->lchild);
    int r_leaf_num=calculateLeafNums_fuc(node->rchild);
    return l_leaf_num+r_leaf_num;
}

void calculateDegreeNumsEqualTwo_func(Node* node,int& num){
    if(node){
        if(node->lchild!=NULL && node->rchild!=NULL){
            num++;
        }
        calculateDegreeNumsEqualTwo_func(node->lchild,num);
        calculateDegreeNumsEqualTwo_func(node->rchild,num);
    }
}

Node* showBrotherAndChildByEqualTarget_func(Node* node,char target){
    if(!node){
        return NULL;
    }

    if(node->lchild!=NULL){
        if(node->lchild->data == target){
            return node;
        }
    }
    if(node->rchild!=NULL){
        if(node->rchild->data == target){
            return node;
        }
    }

    Node* l_res=showBrotherAndChildByEqualTarget_func(node->lchild,target);
    Node* r_res=showBrotherAndChildByEqualTarget_func(node->rchild,target);
    return l_res!=NULL ? l_res : r_res;
}

int showLevelByEqualTarget_func(Node* node,char target,int level){
    if(!node){
        return 0;
    }
    if(node->data == target){
        return level;
    }
    int l_res_level=showLevelByEqualTarget_func(node->lchild,target,level+1);
    int r_res_level=showLevelByEqualTarget_func(node->rchild,target,level+1);
    return l_res_level != 0 ? l_res_level : r_res_level;
}

void changeArrayTree2LinkTree_func(Node* pNode,char tree[100],int pIndex,int size){
   if(pIndex*2 <=size && tree[pIndex*2] != ' '){
       Node* node=new Node(tree[pIndex*2]);
       pNode->lchild=node;
       changeArrayTree2LinkTree_func(node,tree,pIndex*2,size);
   }

   if(pIndex*2+1 <= size && tree[pIndex*2+1] != ' '){
       Node* node=new Node(tree[pIndex*2+1]);
       pNode->rchild=node;
       changeArrayTree2LinkTree_func(node,tree,pIndex*2+1,size);
   }
}

void exchangeLeftAndRight_func(Node* node){
    if(!node){
        return;
    }

    Node* mid=node->lchild;
    node->lchild=node->rchild;
    node->rchild=mid;

    exchangeLeftAndRight_func(node->lchild);
    exchangeLeftAndRight_func(node->rchild);
}


