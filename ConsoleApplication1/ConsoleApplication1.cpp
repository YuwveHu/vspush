// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/xfeatures2d.hpp>
#include <iostream>
#include <vector>
#include <algorithm>

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	struct test{
		int a ;
		int b ;
		char c ;
		int d ;
	};
	enum test2{
		a=2,b,c=2,d,e=2
	}letter;
	test2 t3 = test2(3);
	cout << sizeof(test) << endl;
	cout << a << b << c << d << e << endl;
	cout << (t3==d) << endl;
	char a[20] = "it is a test";
	char b[10] = " yes";
	char c[40];
	//strcpy(c, a);
	//strcat(c, b);
	//cout << c << endl;
	//cout << strlen(c) << endl;
}