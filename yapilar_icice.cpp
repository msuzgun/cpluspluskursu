#include <iostream>
using namespace std;

struct siparis{
	string urun_adi;
	double fiyat;
};

struct musteri{
	int musteri_ID;
	string isim;
	siparis sp; 
};



int main (){
	musteri ali,ayse;
	
	ali.musteri_ID=139;
	ali.isim="Ali";
	ali.sp.fiyat=1500;
	ali.sp.urun_adi="Kulaklik";
	
	ayse.musteri_ID=200;
	ayse.isim="Ayse";
	ayse.sp.fiyat=20000;
	ayse.sp.urun_adi="Telefon";

	musteri *musteri1=&ali;
	musteri *musteri2=&ayse;
	
	cout <<"ID:" <<musteri1->musteri_ID <<"\nisim:" <<musteri1->isim<<"\nurun:" << musteri1->sp.urun_adi <<"\nfiyat:" << musteri1->sp.fiyat<< endl;
	cout <<"\nID:" <<musteri2->musteri_ID <<"\nisim:" <<musteri2->isim<<"\nurun:" << musteri2->sp.urun_adi <<"\nfiyat:" << musteri2->sp.fiyat<< endl;

	return 0;
}




