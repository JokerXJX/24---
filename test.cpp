#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<map>

//map构造与赋值
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
//	//创建map容器  按照key排序
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//	//拷贝构造
//	map<int, int>m2(m);
//	printMap(m2);
//	//赋值
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//}

//map插入与删除
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
//	//第一种插入
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	//第二种插入
//	m.insert(make_pair(2, 20));//制造对组
//	m.insert(make_pair(3, 30));
//	printMap(m);
//	//删除
//	m.erase(m.begin());
//	m.erase(3);//按照key删除
//	printMap(m);
//	//清空
//	m.clear();
//	printMap(m);
//}

//map查找统计
//void test01()
//{
//	//查找
//	map<int, int>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	map<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//		cout << "找到元素 key = " << (*pos).first << " value = " << pos->second << endl;
//	else
//		cout << "未找到" << endl;
//	//map不允许插入重复key元素
//}

//map容器排序
class MyCompare
{
public:
	bool operator()(int v1,int v2)const
	{
		//降序
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