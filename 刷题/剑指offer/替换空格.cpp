/*������4: �滻�ո� */

//ʵ��һ�����������ַ����е�ÿһ���ո��滻Ϊ%20������We are happy. 
//����� We%20are%20happy.

//�Լ����Ľⷨ
/*
#include<iostream>
#include<string>

using namespace std;

int main()
{
	char* arr = "We are happy.";

	//���ÿռ�ķ���
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

//���ϵĽⷨ


/*���ϵ�˼·�ǽ�ԭ�ַ����ȷ���һ����һ��������У���Ȼ���������㹻��
Ȼ�����ÿո�ĸ������¼�������Ĵ�С����������ָ�룬�Ӻ���ǰ�ƶ��ַ�����
�ﵽʱ�临�Ӷ�ΪO��n����Ч����

������C����
*/