#include "iostream"
//先删掉#include "windows.h"
//#include "string"
//#include "algorithm"
using namespace std;

//用这个函数将十进制数转化为二进制数
void decimal_to_binary_conversion(int decimal_number_converting) {
	int binary_number_converting;
	//方法一：除法取余
	if (decimal_number_converting == 0) { return; }

	//倒叙出栈
	decimal_to_binary_conversion(decimal_number_converting / 2);
	cout << decimal_number_converting % 2;

}
//注意!现在，我先来尝试写一个十进制转二进制的代码
int main() {
	//先删掉SetConsoleOutputCP(CP_UTF8);
	//void decimal_to_binary_conversion(int decimal_number_converting);
	//在开头定义一下我要用到的变量们
	    //十进制数
	int decimal_number;
	    //二进制数
	//int binary_number;

	//让用户输入一个十进制数
//注意!稍后要考虑该十进制数的范围问题
/*
注意！欸，那我稍后先解决十进制转多进制的问题与
各种进制互换的问题，还是先解决输入数字范围溢出的问题呢？
*/
	//先删掉cout << "请输入数字" << endl;
	cin >> decimal_number;

	//用这个函数将十进制数转化为二进制数
	
	//先删掉binary_number = decimal_to_binary_conversion(decimal_number);

	//最后输出得到的二进制数
	//先删掉cout << binary_number << endl;

	decimal_to_binary_conversion(decimal_number);
	cout << endl;
	system("pause");
	return 0;
}
