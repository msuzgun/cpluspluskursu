#include <iostream>
using namespace std;

union sensor{
	int digital;
	float analog;
}oku;

int main() {
	oku.analog=5.76;
	cout<< oku.analog<<endl;
	oku.digital=1;
	cout<< oku.digital;
	cout<< oku.analog<<endl;
    return 0;
}
