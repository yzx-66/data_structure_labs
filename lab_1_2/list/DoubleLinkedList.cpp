//
// Created by yzx66 on 2019/12/4.
//

#include "DoubleLinkedList.h"
#include <iostream>

using namespace std;

DoubleLinkedList::DoubleLinkedList(){
    this->head=new HeadNode;
    this->head->next=NULL;
}

DoubleLinkedList::~DoubleLinkedList(){
    DouNode* firstNode=this->head->next;
    if(firstNode){
        DouNode* lastNode=firstNode->left;
        DouNode* node=firstNode;

        while(node!=lastNode){
            DouNode* delNode=node;
            node=delNode->right;
            delete delNode;
        }

        delete lastNode;
    }

    delete this->head;
}


bool DoubleLinkedList::inert(int pos, int data){
    DouNode* newNode=new DouNode;
    newNode->data=data;

    DouNode* firstNode=this->head->next;
    if(!firstNode){
        if(pos==1){
            this->head->next=newNode;
            newNode->right=this->head->next;
            newNode->left=this->head->next;
            return true;
        }else{
            return false;
        }
    }

    DouNode* node=firstNode;
    DouNode* lastNode=firstNode->left;
    DouNode* replaceNode=NULL;
    //Ë«Ïò¾Í²»ÓÃÕÒÇ°Ò»¸ö ¿ÉÒÔÖ±½ÓÍ¨¹ýÖ¸¶¨Î»ÖÃÕÒµ½Ç°Ò»¸ö
    int index=1;

    while(node!=lastNode){
        if(index==pos){
            replaceNode=node;
            break;
        }

        node=node->right;
        index++;
    }

    if(node==lastNode && index==pos){
        replaceNode=lastNode;
    }
    if(node==lastNode && index+1==pos){
        replaceNode=lastNode->right;
    }

    if(replaceNode!=NULL){
        if(pos==1){
            this->head->next=node;
        }
        newNode->left=replaceNode->left;
        newNode->right=replaceNode;
        replaceNode->left->right=newNode;
        replaceNode->left=newNode;

        return true;
    }

    return false;
}

bool DoubleLinkedList::remov(int pos){
    DouNode* firstNode=this->head->next;
    if(!firstNode){
        return false;
    }

    DouNode* lastNode=firstNode->left;
    DouNode* node=firstNode;
    DouNode* delNode=NULL;
    int index=1;

    while(node!=lastNode){
        if(pos==index){
            delNode=node;
            break;
        }

        node=node->right;
        index++;
    }

    if(node==lastNode && index==pos){
        delNode=lastNode;
    }

    if(delNode!=NULL){
        DouNode* leftNode=delNode->left;
        DouNode* rightNode=delNode->right;
        leftNode->right=rightNode;
        rightNode->left=leftNode;

        if(pos==1){
            this->head->next=rightNode;
        }

        delete delNode;
    }

    return false;

}

bool DoubleLinkedList::query(int pos,int& res){
    DouNode* firstNode=this->head->next;
    if(!firstNode){
        return false;
    }

    DouNode* lastNode=firstNode->left;
    DouNode* node=firstNode;
    int index=1;

    while(node!=lastNode){
        if(pos==index){
            res=node->data;
            return true;
        }

        node=node->right;
        index++;
    }

    if(node==lastNode && index==pos){
        res=node->data;
        return true;
    }

    return false;

}

int DoubleLinkedList::getLenth(){
    DouNode* firstNode=this->head->next;
    int len=0;

    if(!firstNode){
        return len;
    }

    DouNode* lastNode=firstNode->left;
    DouNode* node=firstNode;

    while(node!=lastNode){
        node=node->right;
        len++;
    }

    return ++len;
}


void DoubleLinkedList::display(){
    DouNode* firstNode=this->head->next;

    if(!firstNode){
        return;
    }

    DouNode* lastNode=firstNode->left;
    DouNode* node=firstNode;

    while(node!=lastNode){
        cout<<node->data<<" ";
        node=node->right;
    }

    cout<<lastNode->data<<endl<<endl;
}


