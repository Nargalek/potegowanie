/* Zadanie dodatkowe z podstaw programowania
(2) Opracowaæ program, który oblicza ca³kowit¹ potêgê liczby
rzeczywistej. (Podstawa jest typu double, a wyk³adnik typu int,
przy czy zarówno podstawa jak wyk³adnik mog¹ mieæ dowolny
znak.
Dane wprowadzamy z klawiatury.

Wykonal Jakub Gadecki.

*/

#include <iostream> //deklaracja input output stream do wyduku i odczytu liczb

using namespace std;

int main(){
	double a,c=1; //deklaracja zmiennych a - podstawa, c - zmienna wynikowa
	int b,d; //deklaracja zmiennych b - wykladnik, d - zmienna pomocnicza
	
	
	cout<<"\nPodaj wartosc podstawy: "; //wyswietlenie prosby o podanie podstawy
	cin>>a;		//odczyt wartosci podstawy
	cout<<"\nPodaj wykladnik: "; //wyswietlenie prosby o podanie wykladnika
	cin>>b; //odczyt wartosci wykladnika
	if(!cin)cout<<"\nTylko liczby moga zostac uzyte!\n"; //sprawdza czy zmienna moze zostac uzyta (musi byc liczba)
	else if(a==0)cout<<"\nWynik: 0\n"; //sprawdza czy podstawa jest zerem
	else if(a<0 && b==0)cout<<"\nWynik: -1\n"; //sprawdza ujemna podstawa czy ma wykladnik 0
	else{
	if(b<0){		//wyrazenie dajace wartosc bezwzgledna ujemnego wykladnika
		b=-b;
		d=1;
	}
	while(b-->0){	//petla potegujaca
		c*=a;
	}
	while(d--!=0) {	//petla obliczajaca wynik jesli wykladnik byl ujemny
		c=1/c;
	}

	
	cout<<"\nWynik: "<<c<<"\n\n"; //wstrzumujemy program i czekamy na reakcje
	}
	system("PAUSE");//czynimy zadosc funkcji main()
	return 0;
}
