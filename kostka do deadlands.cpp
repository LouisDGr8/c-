#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{	srand(time(NULL));

	int tab[100][4];
	
	int wartosc_x=0;
	
	double wynik=0;
	
	double roznica;
	int wynik_e,sciany_e,rzuty_e;
	
	
	double sciany;
	cout<<"Liczba scain kostki najwyzszej : ";
	cin>>sciany;
	
	double sciany_i;
	cout<<"Liczba scain kostki najnizszej : ";
	cin>>sciany_i;
	
	double przerwa;
	cout<<"Co ile scian jest nowa kostka : ";
	cin>>przerwa;
	
	double liczba;
	cout<<"\nOd ktorej liczby bedzie zdany test : ";
	cin>>liczba;
	
	double rzuty;
	cout<<"\nNajwyzsza ilosc wykonanych rzutow kostka : ";
	cin>>rzuty;
	
	for(sciany_i; sciany_i<=sciany; sciany_i=sciany_i+przerwa)
	{	
		for(double rzuty_i=1; rzuty_i<=rzuty; rzuty_i++)
		{				
			wynik=(1-pow((liczba-1)/sciany_i,rzuty_i))*100;
			cout<<wynik;
//			cout<<"["<<sciany_e<<"] sciany \n["<<rzuty_e<<"] rzuty \n"<<wynik<<" na udana probe\n"<<endl;

//			wynik_e=(int)wynik;
//			sciany_e=(int)sciany_i;
//			rzuty_e=(int)rzuty_i;
			
//			tab[wartosc_x][0]=wynik;			
//			tab[wartosc_x][1]=sciany_i;			
//			tab[wartosc_x][2]=rzuty_i;
//				
//			cout<<tab[wartosc_x][0]<<endl;			
//			cout<<tab[wartosc_x][1]<<endl;			
//			cout<<tab[wartosc_x][2]<<endl;
//							
//			wartosc_x++;
		}
	}
//	for (int i=0;i<=wartosc_x-2;i++)
//	{
//		for (int j=0;j<=wartosc_x-2;j++)
//		{	
//			if (tab[j][0]>tab[j+1][0])
//			{
//				swap(tab[j][0],tab[j+1][0]);
//				swap(tab[j][1],tab[j+1][1]);
//				swap(tab[j][2],tab[j+1][2]);
//			}
//		}
//	}
//	for(int k=0;k<=wartosc_x-1;k++)
//	{
//		cout<<"["<<tab[wartosc_x][1]<<"] sciany \n["<<tab[wartosc_x][2]<<"] rzuty \n"<<tab[wartosc_x][0]<<" na udana probe\n"<<endl;
//	}
	
	int koniec;
	cout<<"Jeszcze raz losowac?[1][0]\n"<<endl;
	cin>>koniec;
	if(koniec==1)
	{	
		main();
	}
	system("pause");
	return 0;
}

