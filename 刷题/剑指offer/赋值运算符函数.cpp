///* ������1����ֵ��������� */
//
////Ϊ����CMySring��Ӹ�ֵ���������
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
//	//	//����Ը�ֵ
//	//	if(this == &str)
//	//		return *this;
//
//	//	delete m_Data;
//	//	m_Data = NULL;
//
//	//	//�����׳��쳣����������ķ��գ�
//	//	m_Data = new char[strlen(str.m_Data) + 1];
//	//	strcpy(m_Data,str.m_Data);
//
//	//	return *this;
//	//}
//
//	//����2
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
//	////�ִ�д��
//	//CMyString& operator=(CMyString str)
//	//{
//	//	swap(this->m_Data,str.m_Data);
//	//	return *this;
//	//}
//
//private:
//	char* m_Data;
//};