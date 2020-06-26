#pragma warning(disable:4996)
#include<iostream>
#include<string.h>
#include<list>
#include"类.h"

void library::show()
{
	cout << id << name << writer;
}
void book::show()
{
	library::show();
	cout << book_chuban << book_ISBN << book_page << endl;
}
void vcd::show()
{
	library::show();
	cout << vcd_chuping << vcd_year << vcd_hour << endl;
}
void gongneng::show()//显示信息函数
{
	list<book>::iterator p1;
	list<vcd>::iterator p2;
	cout << "图书:" << endl;
	for (p1 = bk.begin(); p1 != bk.end(); p1++)
	{
		p1->show();
	}
	cout << "光盘:" << endl;
	for (p2 = vc.begin(); p2 != vc.end(); p2++)
	{
		p2->show();
	}
	cout << "0.返回上一级" << endl;
	int choice;
	cin >> choice;
	if (choice == 0)
		menu();
}
