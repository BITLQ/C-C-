/*面试题4: 替换空格 */

//实现一个函数，把字符串中的每一个空格替换为%20，例如We are happy. 
//输出： We%20are%20happy.

//自己做的解法
/*
#include<iostream>
#include<string>

using namespace std;

int main()
{
	char* arr = "We are happy.";

	//采用空间的方法
	string s;

	char* tmp = arr;
	while(*tmp != '\0')
	{
		if(*tmp == ' ')
		{
			s += "%20";
		}
		else
		{
			s.push_back(*tmp);
		}
		++tmp;
	}

	cout<<s.c_str()<<endl;
	system("pause");
	return 0;
}*/

//书上的解法


/*书上的思路是将原字符串先放在一个大一点的数组中，当然这个数组得足够大，
然后利用空格的个数重新计算数组的大小，利用两个指针，从后往前移动字符串，
达到时间复杂度为O（n）的效果；

适用于C语言
*/