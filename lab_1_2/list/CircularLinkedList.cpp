//
// Created by yzx66 on 2019/12/4.
//

#include "CircularLinkedList.h"
#include <iostream>

using namespace std;

CircularLinkedList::CircularLinkedList(){
    this->head=new Node;
    this->head->next=NULL;
}

CircularLinkedList::~CircularLinkedList(){
    Node* firstNode=this->head->next;
    if(firstNode){
        Node* node=firstNode->next;

        while(node!=firstNode){
            Node* delNode=node;
            node=delNode->next;
            delete delNode;
        }

        delete firstNode;
    }

    delete this->head;
}

bool CircularLinkedList::inert(int pos, int data){
    Node* newNode=new Node;
    newNode->data=data;

    Node* firstNode=this->head->next;
    if(!firstNode){
        if(pos-1==0){
            this->head->next=newNode;
            newNode->next=this->head->next;
            return true;
        }else{
            return false;
        }
    }

    Node* node=this->head;
    int index=0,times=0;

    while(node!=firstNode || times!=2){
        if(index==pos-1){
            newNode->next=node->next;
            node->next=newNode;
            return true;
        }

        node=node->next;
        if(node==firstNode){
            times++;
        }
        index++;
    }

    return false;
}

bool CircularLinkedList::remov(int pos){
    Node* firstNode=this->head->next;
    if(!firstNode){
        return false;
    }
    if(pos==1 && firstNode->next==firstNode){
        delete firstNode;
        this->head->next=NULL;
        return true;
    }

    Node* node=this->head;
    int index=0,times=0;

    while(node!=firstNode || times!=2){
        if(index==pos-1){
            Node* delNode=node->next;
            node->next=delNode->next;
            delete delNode;

            if(pos==1){
                while(node->next!=firstNode){
                    node=node->next;
                }
                node->next=this->head->next;
            }

            return true;
        }

        node=node->next;
        if(node==firstNode){
            times++;
        }
        index++;
    }

    return false;

}

bool CircularLinkedList::query(int pos,int& res){
    Node* firstNode=this->head->next;
    if(!firstNode){
        return false;
    }

    Node* node=firstNode;
    int index=1;
    do{
        if(index==pos){
            res=node->data;
            return true;
        }

        node=node->next;
        index++;
    }while(node!=firstNode);

    return false;
}


int CircularLinkedList::getLenth(){
    Node* firstNode=this->head->next;
    int len=0;

    if(!firstNode){
        return 0;
    }

    Node* node=firstNode;
    do{
        len++;
        node=node->next;
    }while(node!=firstNode);

    return len;
}

void CircularLinkedList::display(){
    Node* firstNode=this->head->next;

    if(!firstNode){
        return;
    }

    Node* node=firstNode;
    do{
        cout<<node->data<<" ";
        node=node->next;
    }while(node!=firstNode);

    cout<<endl<<endl;
}


