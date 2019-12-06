//
// Created by yzx66 on 2019/12/1.
//

#include "BTree.h"
#include "iostream"
#include <fstream>
#include "cstring"

#define PATH "C:\\EXCS\\CLION_exc\\labs\\lab_5\\resource\\"

using namespace std;

void create(Node* pNode,char data[100][3],int pRow,int rowSize);
void preDisplay_func(Node* node);
void midDisplay_func(Node* node);
void postDisplay_func(Node* node);

int row;

BTree::BTree(Node *tree) {
    this->tree=tree;
}

BTree::BTree(char *filename) {
    char filePath[50]=PATH;
    strcat(filePath,filename);
    ifstream f(filePath);
    if(!f)  return;

    char data[100][3];
    int rowSize=0;
    while(true){
        bool isEnd= false;
        for(int i=0;i<3;i++ ){
            f>>data[rowSize][i];
            if(data[rowSize][i]==NULL){
                isEnd= true;
                break;
            }
        }
        if(isEnd)  break;
        rowSize++;
    }
    f.close();

    row=1;
    this->tree=new Node(data[0][0]);
    create(this->tree,data,row++,rowSize);
}

void BTree::preDisplay() {
   preDisplay_func(this->tree);
   cout<<endl;
}

void BTree::midDisplay() {
    midDisplay_func(this->tree);
    cout<<endl;
}

void BTree::postDisplay() {
    postDisplay_func(this->tree);
    cout<<endl;
}

void create(Node* pNode,char data[100][3],int pRow,int rowSize){
    if(row>rowSize){
        return;
    }

    if(data[pRow-1][1]=='1'){
        Node* node=new Node(data[row-1][0]);
        pNode->lchild=node;
        create(node,data,row++,rowSize);
    }

    if(data[pRow-1][2]=='1'){
        Node* node=new Node(data[row-1][0]);
        pNode->rchild=node;
        create(node,data,row++,rowSize);
    }
}

void preDisplay_func(Node* node){
    if(node){
        cout<<node->data<<" ";
        preDisplay_func(node->lchild);
        preDisplay_func(node->rchild);
    }
}

void midDisplay_func(Node* node){
    if(node){
        midDisplay_func(node->lchild);
        cout<<node->data<<" ";
        midDisplay_func(node->rchild);
    }
}

void postDisplay_func(Node* node){
    if(node){
        postDisplay_func(node->lchild);
        postDisplay_func(node->rchild);
        cout<<node->data<<" ";
    }
}
