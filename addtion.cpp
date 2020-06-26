#pragma warning(disable:4996)
#include<iostream>
#include<string.h>
#include<list>
#include"类.h"
void library::input()
{
	cin >> id >> name >> writer;
}
void book::input()
{
	library::input();
	cin >> book_chuban >> book_ISBN >> book_page;
}
void vcd::input()
{
	library::input();
	cin >> vcd_chuping >> vcd_year >> vcd_hour;
}
void gongneng::tadd()//添加信息（小菜单）
{
	int choice;
	cout << "请选择需要添加的物品信息种类" << endl << "1.图书" << endl << "2.光盘" << endl << "0.返回上一级" << endl << "请输入选择：";
	cin >> choice;
	while (choice != 0 && choice != 1 && choice != 2)
	{
		cout << "输入有误，请重新输入:";
		cin >> choice;
	}
	switch (choice)
	{
	case 1:
	{
		add_book();
		break;
	}
	case 2:
	{
		add_vcd();
		break;
	}
	case 0:
	{
		menu();
		break;
	}
	}
}
void gongneng::add_book()//添加图书信息
{
	book b;
	list<book>::iterator p1;  //图书链表迭代器						   
	list<vcd>::iterator p2;   //光盘链表迭代器
	b.input();
	int j = b.id;        //定义一个j来保存输入的编号方便后面进行重复对比
	/*进行编号是否重复查询*/
	for (p1 = bk.begin(); p1 != bk.end(); p1++)
	{
		if (p1->id == b.id)
		{
			cout << "输入编号重复！" << endl << "请重新输入书本信息：" << endl;
			b.input();
			while (b.id == j)
			{
				cout << "输入编号重复！" << endl << "请重新输入书本信息：" << endl;
				b.input();
			}
			break;

		}

	}
	for (p2 = vc.begin(); p2 != vc.end(); p2++)
	{
		if (p2->id == b.id)
		{
			cout << "输入编号重复！" << endl << "请重新输入书本信息：" << endl;
			b.input();
			while (b.id == j)
			{
				cout << "输入编号重复！" << endl << "请重新输入书本信息：" << endl;
				b.input();
			}
			break;
		}
	}
	/*查询结束*/
	bk.push_back(b);  //尾插
	cout << "添加成功！";
	b.n_b++;
	cout << "是否继续添加书本信息(Y/N):";
	char x;
	cin >> x;
	while (x != 'Y' && x != 'N')
	{
		cout << "输入有误，请重新输入:";
		cin >> x;
	}
	if (x == 'Y')
	{
		add_book();
	}
	if (x == 'N')
	{
		int c;
		cout << "1.返回上一级" << endl << "2.返回主菜单" << endl;
		cout << "请输入选择：";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			tadd();
			break;
		}
		case 2:
		{
			menu();
			break;
		}
		}
	}
}
void gongneng::add_vcd()//添加光盘信息
{
	vcd v;
	list<book>::iterator p1;
	list<vcd>::iterator p2;
	v.input();
	int j = v.id;
	for (p1 = bk.begin(); p1 != bk.end(); p1++)
	{
		if (p1->id == v.id)
		{
			cout << "输入编号重复！" << endl << "请重新输入光盘信息：" << endl;
			v.input();
			while (v.id == j)
			{
				cout << "输入编号重复！" << endl << "请重新输入光盘信息：" << endl;
				v.input();
			}
			break;
		}
	}
	for (p2 = vc.begin(); p2 != vc.end(); p2++)
	{
		if (p2->id == v.id)
		{
			cout << "输入编号重复！" << endl << "请重新输入光盘信息：" << endl;
			v.input();
			while (v.id == j)
			{
				cout << "输入编号重复！" << endl << "请重新输入光盘信息：" << endl;
				v.input();
			}
			break;
		}
	}
	vc.push_back(v);
	cout << "添加成功！";
	v.n_v;
	cout << "是否继续添加光盘信息(Y/N):";
	char x;
	cin >> x;
	while (x != 'Y' && x != 'N')
	{
		cout << "输入有误，请重新输入:";
		cin >> x;
	}
	if (x == 'Y')
	{
		add_vcd();
	}
	if (x == 'N')
	{
		int c;
		cout << "1.返回上一级" << endl << "2.返回主菜单" << endl;
		cout << "请输入选择：";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			tadd();
			break;
		}
		case 2:
		{
			menu();
			break;
		}
		}
	}

}