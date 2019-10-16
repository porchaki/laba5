#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	int c, k,a,b;
 setlocale(LC_ALL, "rus");
 cout<<"¬ведите двухзначное число"<<endl;
 cin>>a;
 b = (a%10)*10;
 c =a/10;
 k=b+c;
 cout<<k<<endl;
 system("pause");
 return 0;
}

	