#include <iostream>
#define MAX_OGRENCI 3
using namespace std;

struct Ogrenci{
	int ogr_no;
	string isim;
	float ort;
};

int ogrenci_ekle(Ogrenci og[],int i){
	cout<< "Ogrenci Ekle"<<endl;
	cout<< "------------"<<endl;
	cout<< "Adi:";
	cin>>og[i].isim;
	cout<< "Nosu:";
	cin>>og[i].ogr_no;
	cout<< "Ortalamasi:";
	cin>>og[i].ort;
	return ++i;
}
void ogrenci_bul(Ogrenci og[]){
	int no,i;
	cout<< "Ogrenci Bul"<<endl;
	cout<< "------------"<<endl;
	cout<< "Bulunacak ogrencinin Nosu:";
	cin>>no;
	for (i=0;i<MAX_OGRENCI;i++){
		if (og[i].ogr_no==no){
		 	cout<< "Adi       :"<<og[i].isim <<endl;
			cout<< "Nosu      :"<<og[i].ogr_no<<endl;
			cout<< "Ortalamasi:"<<og[i].ort<<endl;	
		}
	}
	
}
void ogrenci_listele(Ogrenci og[]){
	cout<< "Ogrenci Listele"<<endl;
	cout<< "------------"<<endl;
	int i;
	for (i=0;i<MAX_OGRENCI;i++){
		cout<< "Adi       :"<<og[i].isim <<endl;
		cout<< "Nosu      :"<<og[i].ogr_no<<endl;
		cout<< "Ortalamasi:"<<og[i].ort<<endl;
		cout << "---------------"<<endl<<endl;
	}

}
void menu(){
	cout << "Ogrenci sistemi"<<endl;
	cout << "---------------"<<endl;
	cout << "[1] Ogrenci Ekle"<<endl;
	cout << "[2] Ogrenci Listele"<<endl;
	cout << "[3] Ogrenci Bul"<<endl;
	cout << "[4] Cikis"<<endl;
	cout << "Secim numarasini girin:";
}
int main(){
	Ogrenci ogr[MAX_OGRENCI];
	int sec,sira=0;
	
	do{
		system("cls");
		menu();
		cin >> sec;
		switch (sec){
			case 1:
				sira=ogrenci_ekle(ogr,sira);
				break;
			case 2:
				ogrenci_listele(ogr);
				break;
			case 3:
				ogrenci_bul(ogr);
				break;
			case 4:
				cout << "Cikis yapiliyor...";
				break;
			default:
				cout << "Yanlis secim yaptiniz...";
		}
		cout << "Devam etmek icin bir tusa basiniz...";
		cin.ignore();
		cin.get();
	}while(sec!=4);
	return 0;
}
