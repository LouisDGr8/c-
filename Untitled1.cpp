#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{	srand(time(NULL));

	int tab[100][4];
	
	int wartosc_x=0;
	
	float wynik=1;
	
	float suma=0;
	
	int roznica;
	int wynik_e,sciany_e,rzuty_e;
	
	
	int sciany;
	cout<<"Liczba scain kostki najwyzszej : ";
	cin>>sciany;
	
	int sciany_i;
	cout<<"Liczba scain kostki najnizszej : ";
	cin>>sciany_i;
	
	int przerwa;
	cout<<"Co ile scian jest nowa kostka : ";
	cin>>przerwa;
	
	int liczba;
	cout<<"\nOd ktorej liczby bedzie zdany test : ";
	cin>>liczba;
	
	int rzuty;
	cout<<"\nNajwyzsza ilosc wykonanych rzutow kostka : ";
	cin>>rzuty;
	
	for(sciany_i; sciany_i<=sciany; sciany_i=sciany_i+przerwa)
	{	
		for(int rzuty_i=1; rzuty_i<=rzuty; rzuty_i++)
		{				
			suma=(liczba-1)/sciany_i;
			for(int p=1;p<=rzuty_i-1;p++)
			{
				wynik=wynik*suma;
			}
			wynik=1-wynik;
			
			
			tab[wartosc_x][0]=wynik;			
			tab[wartosc_x][1]=sciany_i;			
   			tab[wartosc_x][2]=rzuty_i;
				
			cout<<tab[wartosc_x][0]<<endl;			
			cout<<tab[wartosc_x][1]<<endl;			
			cout<<tab[wartosc_x][2]<<endl;
							
			wartosc_x++;
		}
	}
	for (int i=0;i<=wartosc_x-2;i++)
	{
		for (int j=0;j<=wartosc_x-2;j++)
		{	
			if (tab[j][0]>tab[j+1][0])
			{
				swap(tab[j][0],tab[j+1][0]);
				swap(tab[j][1],tab[j+1][1]);
				swap(tab[j][2],tab[j+1][2]);
			}
		}
	}
	for(int k=0;k<=wartosc_x-1;k++)
	{
		cout<<"["<<tab[wartosc_x][1]<<"] sciany \n["<<tab[wartosc_x][2]<<"] rzuty \n"<<tab[wartosc_x][0]<<" na udana probe\n"<<endl;
	}
	
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

