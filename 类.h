#pragma once
#pragma warning(disable:4996)
#include<iostream>
#include<string.h>
#include<list>
using namespace std;
class library
{
public:
	int id;//编号
	char name[20];//物品名称
	char writer[20];//作者
	void input();//输入基本信息
	void show();//输出基本信息
	library();
};
class book :public library
{
private:
	char book_chuban[20];//出版社
	char book_ISBN[20];//ISBN号
	int book_page;//页数
public:
	int n_b = 0;  //书本信息个数
	void input();//输入书品信息(同名覆盖)
	void show();//输出书品类信息（同名覆盖）
	book();
	friend class gongneng;
};
class vcd :public library
{
private:
	char vcd_chuping[20];//出品者
	char vcd_year[10];//出品年份
	char vcd_hour[10];//视频时长
public:
	int n_v = 0;  //光盘信息个数
	void input();//输入光盘信息（同名覆盖）
	void show();//输出光盘信息（同名覆盖）
	vcd();
	friend class gongneng;
};
class gongneng
{
private:
	list<book> bk;
	list<vcd> vc;
public:
	int menu();//菜单
	void tadd();//添加信息
	void add_book();//添加书本信息
	void add_vcd();//添加光盘信息
	void tfind();//查询物品信息
	void find_name();//按名字查询
	void find_id();//按编号查询
	void find_lei();//按类别查询
	void show();//显示物品库
	void change();//修改物品信息
	void delet();//删除物品信息
};