#include <iostream>
using namespace std;

enum deger {
	LOW,
	MEDIUM,
	HIGH
} oku;

int main() {
	oku=MEDIUM;
	
	switch(oku){
		case 0:
			cout<< "Dusuk";
			break;
		case 1:
			cout<< "Orta";
			break;
		case 2:
			cout<< "Yuksek";
			break;	
	}
    return 0;
}
