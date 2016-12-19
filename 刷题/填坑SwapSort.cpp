//题目： 将ABCDE 换成对应下标 3 0 4 1 2
//利用类似快速排序的填坑法，需要三个变量：
//n 保存已经放好的值， tmp 保存坑值， index 保存 tmp下标；

#include<iostream>
#include<cassert>

using namespace std;

void SwapSort(int* Arr, int* Pos, int n)
{
	assert(Arr);

	for(int i= 0; i < n; ++i)
	{	
		int tmp = Arr[i];
		int index = i;
		int j = i;

		while(n--)
		{
			if(index == Pos[j])
			{
				Arr[j] = tmp;
				if(n == 0)
					return;
				else
					break;
			}

			Arr[j] = Arr[Pos[j]];
			j = Pos[j];
		}
	}
}


//解法2
void SwapSortTwo(int* Arr, int* Pos, int n)
{
	assert(Arr);
	assert(Pos);

	for(int i = 0; i < n - 1; ++i)
	{
		if(i < Pos[i])
		{
			std::swap(Arr[i],Arr[Pos[i]]);
		}
		else if(i > Pos[i])
		{
			std::swap(Arr[i],Arr[Pos[Pos[i]]]);
			Pos[i] = Pos[Pos[i]];
		}
	}
}
int main()
{
	int Arr[] = {0,1,2,3,4};
	int Pos[] = {3,0,1,4,2};
	//int Pos[] = {3,4,1,0,2};
	//int Pos[] = {0,1,2,3,4};

	SwapSort(Arr,Pos,5);

	for(int i = 0; i < 5; ++i)
	{
		cout<<Arr[i]<<" ";
	}
	cout<<endl;

	system("pause");
	return 0;
}