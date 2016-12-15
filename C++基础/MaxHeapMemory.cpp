#include<iostream>

using namespace std;

unsigned maximum = 0;

int main()
{
	//更快一点
	unsigned block[] = {1024*1024, 1024, 1};

	int count = 0;

	for(int i = 0; i < 3; ++i)
	{
		for(count = 1; ; ++count)
		{
			void* blockptr = malloc(maximum + block[i]*count);

			if(blockptr)
			{
				maximum += block[i]*count;
				free(blockptr);
			}
			else
				break;
		}
	}

	cout<<maximum<<endl;

	system("pause");
	return 0;
}