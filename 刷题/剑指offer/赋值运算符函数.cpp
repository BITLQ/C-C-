///* 面试题1：赋值运算符函数 */
//
////为以下CMySring添加赋值运算符函数
//#include<iostream>
//
//using namespace std;
//
//class CMyString
//{
//public:
//	CMyString(char* pData = NULL);
//	CMyString(const CMyString& str);
//	~CMyString(void);
//
//	//CMyString& operator=(const CMyString& str)
//	//{
//	//	//检查自赋值
//	//	if(this == &str)
//	//		return *this;
//
//	//	delete m_Data;
//	//	m_Data = NULL;
//
//	//	//存在抛出异常，程序崩溃的风险；
//	//	m_Data = new char[strlen(str.m_Data) + 1];
//	//	strcpy(m_Data,str.m_Data);
//
//	//	return *this;
//	//}
//
//	//方法2
//	CMyString& operator=(const CMyString& str)
//	{
//		if(this != &str)
//		{
//			CMyString ptmp(str);
//			swap(this->m_Data,ptmp.m_Data);
//		}
//		return *this;
//	}
//
//	////现代写法
//	//CMyString& operator=(CMyString str)
//	//{
//	//	swap(this->m_Data,str.m_Data);
//	//	return *this;
//	//}
//
//private:
//	char* m_Data;
//};