/*������5�� ��β��ͷ��ӡ��ÿ���ڵ��ֵ */

//�Լ�����˼·�� �ݹ�Ĵ�ӡ������ݹ飬�������ӡ��
//ȱ�㣺���Ӻ�������ջ֡�Ŀ���

//������������˼·���ǵݹ��˼·�ǲ���ջ�ķ���
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