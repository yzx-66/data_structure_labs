//
// Created by yzx66 on 2019/12/1.
//

#ifndef LABS_QUESTION_H
#define LABS_QUESTIONLAB_5_H

#include "../btree/BTree.h"

class QuestionLab_5 {

public:
    void displayTreeByThreeways(BTree bTree);
    void displayTreeWithDataLevelByMid(BTree bTree);
    int calculateHeight(BTree bTree);
    int calculateNodeNums(BTree bTree);
    int calculateLeafNums(BTree bTree);
    int calculateDegreeNumsEqualTwo(BTree bTree);
    void showBrotherAndChildByEqualTarget(BTree bTree,char target);
    int showLevelByEqualTarget(BTree bTree,char target);
    void changeArrayTree2LinkTree(char tree[100],int lenth);
    void exchangeLeftAndRight(BTree bTree);
};


#endif //LABS_QUESTION_H
