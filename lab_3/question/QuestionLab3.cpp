//
// Created by yzx66 on 2019/11/27.
//
#include "QuestionLab3.h"
#include "iostream"
#include <cstring>

using namespace std;


QuestionLab_3::QuestionLab_3(Stack* s){
    this->s=s;
}

QuestionLab_3::~QuestionLab_3(){
    delete s;
}


void QuestionLab_3::showSexadecimal(int data){
    while(data!=0){
        s->push(data%16);
        data/=16;
    }

    int num;
    while(s->getTop(num)){
        if(num<=9){
            cout<<num<<' ';
        }else{
            cout<<(char)('a'+num-10)<<' ';
        }
        s->pop();
    }
    cout<<endl;
}

void QuestionLab_3::showMatching(char* math){
    for(int i=0;i<strlen(math);i++){
        if(math[i]=='(' || math[i]=='[' || math[i]=='{'){
            s->push((int)math[i]);
            continue;
        }
        if(math[i]==')' || math[i]==']' || math[i]=='}'){
            int top;
            if(s->getTop(top)){
                if((math[i]==')'&&top=='(') || (math[i]==']'&&top=='[') || (math[i]=='}'&&top=='{')){
                    s->pop();
                    continue;
                }
            }
            cout<<"第"<<i+1<<"个括号'"<<math[i]<<"'不匹配"<<endl;
            return;
        }
    }
    cout<<"所有括号都匹配"<<endl;
}


