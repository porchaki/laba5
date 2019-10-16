#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
int k,l;
setlocale(LC_ALL, "rus");
cout<<"Введите трехзначное число"<<endl;
cin>>k;
l=k/100;
k = (k%100)*10+l;
cout<<k<<endl;
system("pause");

    return 0;
}