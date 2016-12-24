/*面试题5： 从尾到头打印出每个节点的值 */

//自己做的思路： 递归的打印，正向递归，即反向打印；
//缺点：增加函数调用栈帧的开销

//采用以下类似思路，非递归的思路是采用栈的方法
#include<iostream>

using namespace std;

char* arr = "abcdef";

void Display(char* arr)
{
	if(*arr == '\0')
		return;
	Display(arr+1);
	cout<<*arr;
}

void test()
{
	Display(arr);
	cout<<endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}