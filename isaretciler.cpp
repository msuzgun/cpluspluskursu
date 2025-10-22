#include <iostream>

using namespace std;

int main (){
	int a=10;
	int *p=&a;
	cout <<"a:"      <<a<< endl;
	cout <<"a adres:"<<&a<< endl;
	cout <<"p degeri:"<<p<< endl;
	cout <<"p referans ettigi adresteki deger:"<<*p<< endl;
	return 0;
}
