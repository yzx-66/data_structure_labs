//
// Created by yzx66 on 2019/11/27.
//

#ifndef LABS_QUESTIONLAB_3_H
#define LABS_QUESTION_H

#include "../stack/Stack.h"

class QuestionLab_3
{
public:
    QuestionLab_3(Stack* s);
    virtual ~QuestionLab_3();
    void showSexadecimal(int data);
    void showMatching(char* math);

private:
    Stack* s;
};


#endif //LABS_QUESTIONLAB_3_H
