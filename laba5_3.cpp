#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	double a,b,k;
	int c;
 setlocale(LC_ALL, "rus");
	cout<<"������� ������ �������� � � B"<<endl;
	cin>>a>>b;
	c = a/b;
	k = a-c*b;
	cout<<"� ������� � ����������"<<" "<<c<<" "<<" ����� �������� B"<<endl<<"�� ������� ������������ ������� A"<<" "<<k;
	system ("pause");
	return 0;
}