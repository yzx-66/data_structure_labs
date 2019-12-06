//
// Created by yzx66 on 2019/11/27.
//

#ifndef LABS_QUESTIONLAB_4_H
#define LABS_QUESTION_H

#include "../quene/Quene.h"

class QuestionLab_4 {
public:
    QuestionLab_4(Quene* q);
    void testInQuene_And_CheckIsFull();
    void testInQuene_99_datas();
    void testInQuene_And_DeQuene_And_ToString();

private:
    Quene* quene;
};


#endif //LABS_QUESTIONLAB_4_H
