#include <iostream>

using namespace std;

int main (){
	
	int *p = new int; 
	*p = 10;
	
	int *dizi = new int[10];  
	
	delete p;
	delete [] dizi;
	return 0;
}
