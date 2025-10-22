#include <iostream>

using namespace std;

struct urun{
	int agirlik;
	float fiyat;
};


int main (){
	 
	urun elma;
	elma.agirlik=200;
	elma.fiyat=15;	
	cout << "Elmanin agirligi:"<<elma.agirlik<<"- fiyat:"<<elma.fiyat<<endl;
	
	urun *elma2=&elma;
	cout << "Elmanin agirligi:"<<elma2->agirlik <<"- fiyat:"<<elma2->fiyat<<endl;
	
	elma2->agirlik=400;
	cout << "Elmanin agirligi:"<<elma2->agirlik <<"- fiyat:"<<elma2->fiyat<<endl;
	cout << "Elmanin agirligi:"<<elma.agirlik<<"- fiyat:"<<elma.fiyat<<endl;
	return 0;
}
