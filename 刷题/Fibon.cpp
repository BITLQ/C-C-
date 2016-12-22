#include<iostream>

using namespace std;

int Fibon_elem(int pos)
{
	int tmp,num1,num2;
	num1 = num2 = tmp = 1;
	
	if(pos <= 0 || pos > 1024)
	{
		throw -1;
	}
	
	for(int i = 3; i <= pos; ++i)
	{
		tmp = num1 + num2;
		num1 = num2;
		num2 = tmp;
	}
	
	return tmp;
}
void test(int*& ptr)
{
	ptr = new int();
}


int Fibon_R(int pos)
{

}

int main()
{
	/*try{
		cout<<Fibon_elem(5)<<endl;
	}
	catch(...)
	{
		cout<<"·Ç·¨ÊäÈë"<<endl;
	}*/

	/*int* ptr = NULL;

	test(ptr);

	cout<<ptr<<endl;
	
	delete ptr;*/
	system("pause");
	return 0;
}