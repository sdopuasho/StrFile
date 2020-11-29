// newstring.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//setlocale(LC_ALL, "Russia");
	int i;
	char a[300];
	ifstream fin ("newstring.txt");
	fin.getline(a, 300);
	fin.close();
	for (i = 0; i <= 300; i++) {
		if (i == 0) {
			a[i] = toupper(a[i]);
		}
		else {
			if (a[i] == '!' || a[i] == '.' || a[i] == '?') {
				i += 2;
				if (a[i] == '.') {
					i += 2;
					a[i] = toupper(a[i]);
				}
				else {
					a[i] = toupper(a[i]);
				}
			}
		}
	}
		ofstream css("new.txt");
		css << a;
		css.close();
	cout << a << endl;
	cout << endl;
	system("pause");
    return 0;
}

