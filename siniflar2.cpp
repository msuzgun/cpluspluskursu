#include <iostream>

using namespace std;

class araba {
	
	private:
		string marka;
		int hiz;		
	
	public:
		araba(){
			setHiz(0);
			setMarka("Bilinmiyor");
		}
		araba(string m, int h){
			setHiz(h);
			setMarka(m);
		}
		void bilgileriGoster(){
			cout<< "Marka:"<<marka<< " Hiz:"<<hiz<<"km/h"<<endl;
		}	
		void setHiz(int yeniHiz){
			if (yeniHiz<0)			
				hiz=0;
			else
				hiz=yeniHiz;
		}
		
		void setMarka(string yeniMarka){
			marka=yeniMarka;
		}
		
		int getHiz(){
			return hiz;
		}
		
		string getMarka(){
			return marka;
		}
		
	
};

int main (){
	araba benimArabam("Toyota",180);
	benimArabam.bilgileriGoster();
	araba araba2;
	araba2.bilgileriGoster();
	return 0;
}



