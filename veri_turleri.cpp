#include <iostream>
using namespace std;

union sensor{
	int digital;
	float analog;
} sn1;

int main (){
	
	sn1.analog	=10.54;
	cout << sn1.analog<<endl;
	sn1.digital =1;
	cout << sn1.digital<<endl;
	cout << sn1.analog<<endl;

	return 0;
}
