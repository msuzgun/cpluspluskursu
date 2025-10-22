#include <iostream>

using namespace std;

int main (){
	int *p= new int;
	*p=5;
	cout << *p <<endl;
	delete p;
	cout << *p <<endl;
	
	int *dizi = new int[5];
	
	for (int i=0;i<5;i++)
		dizi[i]=i*2;
	
	for (int i=0;i<5;i++)
		 cout<< dizi[i] << " " ;
	
	cout<< endl;
	
	delete []dizi;
	for (int i=0;i<5;i++)
		 cout<< dizi[i] << " " ;
	
	return 0;
}
