#include <iostream>
using namespace std;

struct ogrenci {
	string ad;
	string soyad;
	int ogrno;
};

int main (){
	
	ogrenci ogr1,ogr2,ogr3;
	ogr1.ad="Murat";
	ogr1.soyad="Suzgun";
	ogr1.ogrno=1;
	
	ogr2.ad="Ali";
	ogr2.soyad="Efe";
	ogr2.ogrno=2;
	
	
	cout << ogr1.ad << endl << ogr1.soyad << endl<< ogr1.ogrno<< endl;
	cout << ogr2.ad << endl << ogr2.soyad << endl<< ogr2.ogrno<< endl;

	return 0;
}
