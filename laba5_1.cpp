#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	double a;
	int b;
 setlocale(LC_ALL, "rus");
	cout<<"������� ������ ����� � ������"<<endl;
	cin>>a;
	b = a/1024;
	cout<<b<<" "<<"�����"<<endl;
	system("pause");
	return 0;
}

	
	