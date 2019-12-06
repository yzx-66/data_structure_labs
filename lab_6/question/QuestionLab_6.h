//
// Created by yzx66 on 2019/12/2.
//

#ifndef LABS_QUESTIONLAB_5_H
#define LABS_QUESTION_H

#include "../tree/createTree.h"

class QuestionLab_6 {
public:
    void displayByThreeWays(csNode* tree);
    int calculateHeight(csNode* tree);
    int calculateNodeNums(csNode* tree);
    int calculateLeafNums(csNode* tree);
    int calculateDegree(csNode* tree);
    void displayDataAndLevelByPre(csNode* tree);
};

#endif //LABS_QUESTIONLAB_5_H
