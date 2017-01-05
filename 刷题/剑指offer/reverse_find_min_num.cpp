/*************************************************************************
	> File Name: Reverse_find_min_num.cpp
	> Author:   刘强
	> Mail: 849886839@qq.com 
	> Created Time: Wed 04 Jan 2017 04:44:18 PM PST
 ************************************************************************/

#include<iostream>
#include<cassert>
using namespace std;

//查找旋转数组中的最小数字；数组是递增序列
//（1，2，3，4，5）旋转前两个数字变为（3，4，5，1，2）

//解法0     直接循环比较，时间复杂度为O（n）
//解法一     数组递增的特性；

int find(int* arr,int len)
{
    assert(arr);
    assert(len >= 0);
    
    int index1 = 0;
    int index2 = len - 1;
    int midindex = 0;

    while(arr[index1] >= arr[index2])
    {
        if(index2 - index1 == 1)
        {
            midindex = index2;
            break;
        }

        midindex = (index1 + index2)>>1;
        if(arr[midindex] == arr[index1] && arr[index2] == arr[index2])
        {
            //无法判断，只能遍历数组；
            int min = arr[0];
            
            for(int i = 1; i < len; ++i)
            {
                if(arr[i] < min)
                    min = arr[i];
            }

            return min;
        }

        else if(arr[midindex] >= arr[index1])
            index1 = midindex;
        else if(arr[midindex] <= arr[index2])
            index2 = midindex;
    }

    return arr[midindex];
}

int main()
{
    //int arr[] = {3,4,5,1,2};
    int arr[] = {1};
    int str[] = {1,0,1,1,1};
    
    int ret = find(arr,sizeof(arr)/sizeof(arr[0]));
    int ret2 = find(str,sizeof(str)/sizeof(str[0]));
    
    cout<<ret<<endl;
    cout<<ret2<<endl;

    return 0;
}
