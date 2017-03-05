全排列解决表示所给数字最大位的数；
#include<iostream>

using namespace std;

int arr[1000];
int n = 0;

void Display()
{
	int flag = 1;
	for(int i = 0;i < n; ++i)
	{
		if(arr[i] != 0 && flag == 1)
		{
			flag = 0;
			cout<<arr[i];
		}
		else if(flag == 0)
		{
			cout<<arr[i];
		}
	}
	cout<<endl;
}

void R_maxnum(int len)
{
	if(len >= n)
	{
		return ;
	}

	for(int i = 0; i < 10; ++i)
	{
		arr[len] = i;
		Display();
		R_maxnum(len+1);
	}
}

int main()
{
	cin>>n;

	R_maxnum(0);

	system("pause");
	return 0;
}