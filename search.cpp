#pragma warning(disable:4996)
#include<iostream>
#include<string.h>
#include<list>
#include"类.h"
void gongneng::tfind() //查询函数（小菜单）
{
	int choice;
	cout << "请选择查询方式：" << endl << "1.按名字查询" << endl << "2.按编号查询" << endl << "3.按类别查询" << endl << "0.返回上一级" << endl << "请输入选择：";
	cin >> choice;
	while (choice != 0 && choice != 1 && choice != 2 && choice != 3)
	{
		cout << "输入有误，请重新输入:";
		cin >> choice;
	}
	switch (choice)
	{
	case 1:
	{
		find_name();
		break;
	}
	case 2:
	{
		find_id();
		break;
	}
	case 3:
	{
		find_lei();
		break;
	}
	case 0:
	{
		menu();
		break;
	}
	}
}
void gongneng::find_name()//按名称查找
{
	char pname[20];
	int flag = 0;
	list<book>::iterator p1;
	list<vcd>::iterator p2;
	cout << "请输入名字：";
	cin >> pname;
	for (p1 = bk.begin(); p1 != bk.end(); p1++)
	{
		if (strcmp(p1->name, pname) == 0)
		{
			p1->show();
			flag = 1;
			break;
		}
	}
	for (p2 = vc.begin(); p2 != vc.end(); p2++)
	{
		if (flag == 1)
			break;
		if (strcmp(p2->name, pname) == 0)
		{
			p2->show();
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "未查找到该名字的物品！" << endl;
	}
	int choice;
	cout << "1.继续查找" << endl << "2.返回上一级" << endl << "0.返回主菜单" << endl << "请输入选择：";
	cin >> choice;
	while (1)
	{
		if (choice == 1 || choice == 2 || choice == 0)
			break;
		else
		{
			cout << "输入错误，请重新输入：";
			cin >> choice;
		}
	}
	switch (choice)
	{
	case 1:
	{
		find_name();
		break;
	}
	case 2:
	{
		tfind();
		break;
	}
	case 0:
	{
		menu();
		break;
	}
	}
}
void gongneng::find_id()//按编号查找
{
	int pid;
	int flag = 0;
	list<book>::iterator p1;
	list<vcd>::iterator p2;
	cout << "请输入编号：";
	cin >> pid;
	for (p1 = bk.begin(); p1 != bk.end(); p1++)
	{
		if (p1->id == pid)
		{
			p1->show();
			flag = 1;
			break;
		}
	}
	for (p2 = vc.begin(); p2 != vc.end(); p2++)
	{
		if (flag == 1)
			break;
		if (p2->id == pid)
		{
			p2->show();
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "未查找到该编号的物品！" << endl;
	}
	int choice;
	cout << "1.继续查找" << endl << "2.返回上一级" << endl << "0.返回主菜单" << endl << "请输入选择：";
	cin >> choice;
	while (1)
	{
		if (choice == 1 || choice == 2 || choice == 0)
			break;
		else
		{
			cout << "输入错误，请重新输入：";
			cin >> choice;
		}
	}
	switch (choice)
	{
	case 1:
	{
		find_id();
		break;
	}
	case 2:
	{
		tfind();
		break;
	}
	case 0:
	{
		menu();
		break;
	}
	}
}
void gongneng::find_lei()//按类别查找
{
	int plei;
	list<book>::iterator p1;
	list<vcd>::iterator p2;
	cout << "1.图书类" << endl << "2.光盘类" << endl << "请输入选择：";
	cin >> plei;
	if (plei == 1)
	{
		for (p1 = bk.begin(); p1 != bk.end(); p1++)
		{
			p1->show();
		}
	}
	if (plei == 2)
	{
		for (p2 = vc.begin(); p2 != vc.end(); p2++)
		{
			p2->show();
		}
	}
}