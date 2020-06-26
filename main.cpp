#pragma warning(disable:4996)
#include<iostream>
#include<string.h>
#include<list>
#include"类.h"
//using namespace std;

int gongneng::menu()   //主菜单函数
{
	int choice;
	while (1)
	{
		cout << "============================================" << endl;
		cout << "*              物品信息管理                *" << endl;
		cout << "*------------------------------------------*" << endl;
		cout << "*  1、添加物品信息       2、显示物品信息   *" << endl;
		cout << "*------------------------------------------*" << endl;
		cout << "*  3、查询物品信息       4、修改物品信息   *" << endl;
		cout << "*------------------------------------------*" << endl;
		cout << "*  5、删除图书信息       0、退出           *" << endl;
		cout << "*------------------------------------------*" << endl;
		cout << "请输入选择:";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			tadd();
			break;
		}
		case 2:
		{
			show();
			break;
		}
		case 3:
		{
			tfind();
			break;
		}
		case 4:
		{
			change();
			break;
		}
		case 5:
		{
			delet();
			break;
		}

		case 0:
			exit(0);
		}
	}
	return 0;
}
int main()
{
	gongneng g;
	g.menu();
	return 0;
}