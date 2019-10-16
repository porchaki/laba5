#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	double a;
	int b;
 setlocale(LC_ALL, "rus");
	cout<<"¬ведите размер файла в байтах"<<endl;
	cin>>a;
	b = a/1024;
	cout<<b<<" "<<" байт"<<endl;
	system("pause");
	return 0;
}

	
	