#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream a("log.tex", ios::in);
	if (!a)
	{
		cout << "�ļ���ʧ��" << endl;
	}
	return 0;//lol
}