#include <iostream>

using namespace std;

class araba {

	private:
		string marka;
		int hiz;		
	
	public:
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
	araba benimArabam;
	benimArabam.setMarka("Opel");
	benimArabam.setHiz(180);
	
	cout<< benimArabam.getMarka()<<endl;
	cout<< benimArabam.getHiz()<<endl;
	benimArabam.bilgileriGoster();
	
	benimArabam.setHiz(-100);
	benimArabam.bilgileriGoster();
	
	benimArabam.setHiz(100);
	benimArabam.bilgileriGoster();
	
	return 0;
}



