// 365 gün 6 saat den dolayı her 4 yılda bir 366 gün yani bir yıl 4 ün tam katı ise artık yıldır 
#pragma warning(disable:4996) 
#include<iostream>
#include<time.h>


#define _CRT_SECURE_NO_WARNINGS  // libary eski kaldığından dolayı hata vermemesi için bunu tanımladım
using namespace std;

void gelecekArtikYillariHesapla(int year);
void gecmisArtikYillariHesapla(int year);


void gelecekArtikYillariHesapla(int year) {

	cout << " \nGelecek artik yillar " << endl;
	for (int i = year; i < year+1000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			cout << i << "\t";
		}
	}
}

void gecmisArtikYillariHesapla(int year) {

	cout << "\nGecmis Artik yillar" << endl;
	for (int i = year; i >0; i--)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			cout << i << "\t";
		}
		
	}
	
}

int main() {

	time_t now = time(0);
	tm*ltm = localtime(&now);//bu yıl sistemden aldığımız bilgilere göre ..
	int year = 1900 + ltm->tm_year;
	cout << "Bu yil : " << year << endl;
	gecmisArtikYillariHesapla(year);
	gelecekArtikYillariHesapla(year);

	system("pause");
	return 0;

}

