#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<map>

//map�����븳ֵ
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����map����  ����key����
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//	//��������
//	map<int, int>m2(m);
//	printMap(m2);
//	//��ֵ
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//}

//map������ɾ��
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	//��һ�ֲ���
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	//�ڶ��ֲ���
//	m.insert(make_pair(2, 20));//�������
//	m.insert(make_pair(3, 30));
//	printMap(m);
//	//ɾ��
//	m.erase(m.begin());
//	m.erase(3);//����keyɾ��
//	printMap(m);
//	//���
//	m.clear();
//	printMap(m);
//}

//map����ͳ��
//void test01()
//{
//	//����
//	map<int, int>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	map<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//		cout << "�ҵ�Ԫ�� key = " << (*pos).first << " value = " << pos->second << endl;
//	else
//		cout << "δ�ҵ�" << endl;
//	//map����������ظ�keyԪ��
//}

//map��������
class MyCompare
{
public:
	bool operator()(int v1,int v2)const
	{
		//����
		return v1 > v2;
	}
};
void test01()
{
	map<int, int,MyCompare>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(5, 50));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}