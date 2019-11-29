#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void main()
{
	typedef struct _datas {
		int year, month, day;
	}dates;
	typedef struct _order {
		char num[11];
		dates date;
		int amount;
	}order;
	order o1 = { "AHK08A1024",{2008,10,5},886686688 };
	order o2 = { "USA08A1025",{2008,11,12},1234567 };
	order o3 = { "UNK08A1028",{2008,12,30},98765432 };
	
	cout << "               ***********************" << endl;
	cout << "               *       訂單資料      *" << endl;
	cout << "               ***********************" << endl;
	cout << "===============================================" << endl;
	cout << "訂單編號         訂貨日期         訂貨金額" << endl;
	cout << "===============================================" << endl;
	printf("%-10s  %8d/%02d/%02d     NT%10d\n", o1.num, o1.date.year, o1.date.month, o1.date.day, o1.amount);
	printf("%-10s  %8d/%02d/%02d     NT%10d\n", o2.num, o2.date.year, o2.date.month, o2.date.day, o2.amount);
	printf("%-10s  %8d/%02d/%02d     NT%10d\n", o3.num, o3.date.year, o3.date.month, o3.date.day, o3.amount);
	cout << endl;
	system("PAUSE");
}