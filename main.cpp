#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream a("log.tex", ios::in);
	if (!a)
	{
		cout << "文件打开失败" << endl;
	}
	return 0;//lol
}