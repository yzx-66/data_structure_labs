//
// Created by yzx66 on 2019/12/2.
//

#include "QuestionLab_6.h"
#include "iostream"

using namespace std;

void displayByThreeWays_pre(csNode* node);
void displayByThreeWays_pos(csNode* node);
void displayByThreeWays_lev(csNode* node,int level, char nodeArray[][20],int levelIndex[]);
void calculateHeight_func(csNode* node,int level,int& height);
void calculateNodeNums_func(csNode* node,int& nodeNums);
void calculateLeafNums_func(csNode* node,int& leafNums);
void calculateDegree_func(csNode* node,int brotherNum,int& degree);
void displayDataAndLevelByPre_func(csNode* node,int level);

void QuestionLab_6::displayByThreeWays(csNode* tree) {
    cout<<"先序遍历："; displayByThreeWays_pre(tree); cout<<endl;
    cout<<"后续遍历："; displayByThreeWays_pos(tree); cout<<endl;

    char nodeArray[10][20];
    int levelIndex[10];
    for(int i=0;i<10;i++) levelIndex[i]=0;

    cout<<"层次遍历："; displayByThreeWays_lev(tree,1,nodeArray,levelIndex); cout<<endl;

    for(int i=0;i<10;i++){
        if(levelIndex[i]!=0){
            cout<<"第"<<i<<"层元素为：";
            for(int j=1;j<=levelIndex[i];j++){
                cout<<nodeArray[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int QuestionLab_6::calculateHeight(csNode* tree) {
    int height=0;
    calculateHeight_func(tree,1,height);
    return height;
}

int QuestionLab_6::calculateNodeNums(csNode* tree) {
    int nodeNums=0;
    calculateNodeNums_func(tree,nodeNums);
    return nodeNums;
}

int QuestionLab_6::calculateLeafNums(csNode* tree) {
    int leafNums=0;
    calculateLeafNums_func(tree,leafNums);
    return leafNums;
}

int QuestionLab_6::calculateDegree(csNode* tree) {
    int degree=0;
    calculateDegree_func(tree,1,degree);
    return degree;
}

void QuestionLab_6::displayDataAndLevelByPre(csNode* tree) {
    displayDataAndLevelByPre_func(tree,1);
}

void displayByThreeWays_pre(csNode* node){
    if(node){
        cout<<node->data<<" ";
        displayByThreeWays_pre(node->firstChild);
        displayByThreeWays_pre(node->nextSibling);
    }
}
void displayByThreeWays_pos(csNode* node){
    if(node){
        displayByThreeWays_pos(node->firstChild);
        cout<<node->data<<" ";
        displayByThreeWays_pos(node->nextSibling);
    }
}
void displayByThreeWays_lev(csNode* node,int level, char nodeArray[][20],int levelIndex[]){
    if(node){
        nodeArray[level][++levelIndex[level]]=node->data;
        displayByThreeWays_lev(node->firstChild,level+1,nodeArray,levelIndex);
        displayByThreeWays_lev(node->nextSibling,level,nodeArray,levelIndex);
    }
}

void calculateHeight_func(csNode* node,int level,int& height){
    if(node) {
        height=level>height ? level : height;
        calculateHeight_func(node->nextSibling,level,height);
        calculateHeight_func(node->firstChild,level+1,height);
    }
}
void calculateNodeNums_func(csNode* node,int& nodeNums){
    if(node){
        nodeNums++;
        calculateNodeNums_func(node->nextSibling,nodeNums);
        calculateNodeNums_func(node->firstChild,nodeNums);
    }

}

void calculateLeafNums_func(csNode* node,int& leafNums){
    if(node){
        if(node->firstChild==NULL){
            leafNums++;
        }
        calculateLeafNums_func(node->nextSibling,leafNums);
        calculateLeafNums_func(node->firstChild,leafNums);
    }
}

void calculateDegree_func(csNode* node,int brotherNum,int& degree){
    if(node){
        if(node->nextSibling==NULL){
            degree=brotherNum>degree ? brotherNum : degree;
        }
        calculateDegree_func(node->nextSibling,brotherNum+1,degree);
        calculateDegree_func(node->firstChild,1,degree);
    }
}

void displayDataAndLevelByPre_func(csNode* node,int level){
    if(node){
        cout<<"["<<"层次："<<level<<"，值："<<node->data<<"]  ";
        displayDataAndLevelByPre_func(node->firstChild,level+1);
        displayDataAndLevelByPre_func(node->nextSibling,level);
    }
}

