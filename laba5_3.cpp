#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	double a,b,k;
	int c;
 setlocale(LC_ALL, "rus");
	cout<<"Введите размер отрезков А и B"<<endl;
	cin>>a>>b;
	c = a/b;
	k = a-c*b;
	cout<<"В отрезке А помещается"<<" "<<c<<" "<<" целых отрезков B"<<endl<<"Не занятое пространство отрезка A"<<" "<<k;
	system ("pause");
	return 0;
}