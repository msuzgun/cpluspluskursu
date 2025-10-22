#include <iostream>
#define MAX_OGR 10
using namespace std;

struct Ogrenci{
	int no;
	string ad_soyad;
	float ort;
};

int main (){
	Ogrenci ogr[MAX_OGR];
	// Ogrenci kayit islemi
	for (int i=0; i<3;i++){
		cout<< "Ad Soyad giriniz:";
		cin >> ogr[i].ad_soyad; 
		cout<< "No giriniz:";
		cin >> ogr[i].no; 
	}

	// Ogrenci kayit listeleme	
	for (int i=0; i<3;i++){
		cout<< "Ad Soyad :"<<  ogr[i].ad_soyad<< endl;
		cout<< "No       :"<<  ogr[i].no<< endl<< "-----------"<< endl;	
	}
	

	return 0;
}
