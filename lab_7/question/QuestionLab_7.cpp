//
// Created by yzx66 on 2019/12/3.
//

#include "QuestionLab_7.h"


int QuestionLab_7::bSearch(int *data,int size, int target) {
    int left=0,right=size-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(target > data[mid]){
            left=mid+1;
        } else if(target < data[mid]){
            right=mid-1;
        } else{
            return mid;
        }
    }
    return -1;
}
