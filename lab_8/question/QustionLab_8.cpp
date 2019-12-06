//
// Created by yzx66 on 2019/12/4.
//

#include "QustionLab_8.h"
#include "stdlib.h"

void quickSort_func(int *p,int left,int right);
void heapAdjust(int data[], int StartIndex, int size);
void mergeSort_func(int arr[], int l, int r);
void mergeSort_func(int arr[], int n);
void merge(int arr[], int l, int mid, int r);

void QustionLab_8::shellSort(int *data, int size) {
    int dh=10;
    while(dh>=1){
        for(int i=0;i<size;i+=dh){
            for(int j=i;j>0;j-=dh){
                if(data[j]<data[j-dh]){
                    int mid=data[j];
                    data[j]=data[j-dh];
                    data[j-dh]=mid;
                }
            }
        }
        dh/=2;
    }
}

void QustionLab_8::quickSort(int *data, int size) {
    quickSort_func(data,0,size-1);
}

void QustionLab_8::heapSort(int *data, int size) {
    int i = 0;
    //将Hr[0,Length-1]建成大根堆
    for (i = size / 2 - 1; i >= 0; i--){
        heapAdjust(data, i, size);
    }

    for (i = size - 1; i > 0; i--){
        //与最后一个记录交换
        int tmpData = data[0];
        data[0] = data[i];
        data[i] = tmpData;
        //将H.r[0..i]重新调整为大根堆
        heapAdjust(data, 0, i);
    }
}

void QustionLab_8::mergeSort(int *data, int size) {
    mergeSort_func(data,size);
}

void quickSort_func(int *p,int left,int right){
    int target=p[left],left_index=left,right_index=right;
    while(left_index<right_index){
        while(left_index<right_index){
            if(p[right_index]>target){
                p[left_index]=p[right_index];
                break;
            }
            right_index--;
        }
        while(left_index<right_index){
            if(p[left_index]<target){
                p[right_index]=p[left_index];
                break;
            }
            left_index++;
        }
    }
    p[left_index]=target;
    if(left_index+1<=right)
        quickSort_func(p,left_index+1,right);
    if(left_index-1>=left)
        quickSort_func(p,0,left_index-1);
}

void heapAdjust(int data[], int StartIndex, int size){
    while (2 * StartIndex + 1 < size){
        int MaxChildrenIndex = 2 * StartIndex + 1;
        if (2 * StartIndex + 2 < size){
            //比较左子树和右子树，记录最大值的Index
            if (data[2 * StartIndex + 1] < data[2 * StartIndex + 2]){
                MaxChildrenIndex = 2 * StartIndex + 2;
            }
        }
        if (data[StartIndex] < data[MaxChildrenIndex]){
            //交换i与MinChildrenIndex的数据
            int tmpData = data[StartIndex];
            data[StartIndex] = data[MaxChildrenIndex];
            data[MaxChildrenIndex] = tmpData;
            //堆被破坏，需要重新调整
            StartIndex = MaxChildrenIndex;
        }else{
            //比较左右孩子均大则堆未破坏，不再需要调整
            break;
        }
    }
}

//归并排序整个数组
void mergeSort_func(int arr[], int n){
    //如果数组为空或只有一个元素，不需要排序
    if(arr == NULL || n < 2){
        return;
    }
    mergeSort_func(arr,0,n-1);
}

//递归
void mergeSort_func(int arr[], int l, int r){
    if(l == r){
        return;
    }
    int mid = (l + r) / 2;
    //左半部分归并排序
    mergeSort_func(arr, l, mid);
    //右半部分归并排序
    mergeSort_func(arr, mid+1, r);
    //左右部分归并
    merge(arr, l, mid, r);
}

//归并过程
void merge(int arr[], int l, int mid, int r){
    int help[r-l+1];//辅助数组
    int i = 0;
    int lIndex = l;
    int rIndex = mid+1;
    while(lIndex <= mid && rIndex <= r){
        help[i++] = arr[lIndex] < arr[rIndex] ? arr[lIndex++]:arr[rIndex++];
    }
    //左边和右边肯定有一边到头了，不可能同时，因为每次只移动一边
    while(lIndex <= mid){
        help[i++] = arr[lIndex++];
    }
    while(rIndex <= r){
        help[i++] = arr[rIndex++];
    }
    //将排好序的辅助数组赋值给原始数组，不需要返回值
    for(i = 0; i < r-l+1; i++){
        arr[l+i] = help[i];
    }
}


