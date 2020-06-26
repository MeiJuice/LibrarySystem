#pragma warning(disable:4996)
#include<iostream>
#include<string.h>
#include<list>
#include"类.h"
void gongneng::change()
{
	int pid;
	int flag = 0;
	int bid, vid;
	list<book>::iterator p1, p3;
	list<vcd>::iterator p2, p4;
	cout << "请输入编号：";
	cin >> pid;
	for (p1 = bk.begin(); p1 != bk.end(); p1++)
	{
		if (p1->id == pid)
		{
			/*验证编号重复性*/
			cout << "请确认修改后的物品编号：";
			cin >> bid;
			for (p3 = bk.begin(); p3 != bk.end(); p3++)
			{
				if (p3->id == bid)
				{
					cout << "输入编号重复！" << endl << "请重新确认物品编号：" << endl;
					cin >> bid;
					int j = bid;
					while (bid == j)
					{
						cout << "输入编号重复！" << endl << "请重新确认物品编号：" << endl;
						cin >> bid;
					}
					break;
				}
			}
			for (p4 = vc.begin(); p4 != vc.end(); p4++)
			{
				if (p4->id == bid)
				{
					cout << "输入编号重复！" << endl << "请重新确认物品编号：" << endl;
					cin >> bid;
					int k = bid;
					while (bid == k)
					{
						cout << "输入编号重复！" << endl << "请重新确认物品编号：" << endl;
						cin >> bid;
					}
					break;
				}
			}
			/*验证完成*/
			cout << "请输入修改后的物品信息：" << endl;
			p1->input();
			while (p1->id != bid)
			{
				cout << "请保证编号与确定的一致！" << endl << "请输入修改后的物品信息：" << endl;
				p1->input();
			}
			cout << "修改成功！" << endl;
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
			cout << "请确认物品编号：";
			cin >> vid;
			for (p3 = bk.begin(); p3 != bk.end(); p3++)
			{
				if (p3->id == vid)
				{
					cout << "输入编号重复！" << endl << "请重新确认物品编号：" << endl;
					cin >> vid;
					int x = vid;
					while (vid == x)
					{
						cout << "输入编号重复！" << endl << "请重新确认物品编号：" << endl;
						cin >> vid;
					}
					break;
				}
			}
			for (p4 = vc.begin(); p4 != vc.end(); p4++)
			{
				if (p4->id == vid)
				{
					cout << "输入编号重复！" << endl << "请重新确认物品编号：" << endl;
					cin >> vid;
					int y = vid;
					while (vid == y)
					{
						cout << "输入编号重复！" << endl << "请重新确认物品编号：" << endl;
						cin >> vid;
					}
					break;
				}
			}
			cout << "请输入修改后的物品信息：" << endl;
			p2->input();
			while (p2->id != vid)
			{
				cout << "请保证编号与确定的一致！" << endl << "请输入修改后的物品信息：" << endl;
				p2->input();
			}
			cout << "修改成功！" << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "未查找到该编号的物品！" << endl;
	}
}
void gongneng::delet()
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
			bk.erase(p1);
			cout << "删除成功！";
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
			vc.erase(p2);
			cout << "删除成功！";
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "未查找到该编号的物品！" << endl;
	}
}