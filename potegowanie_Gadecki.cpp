/* Zadanie dodatkowe z podstaw programowania
(2) Opracowa� program, kt�ry oblicza ca�kowit� pot�g� liczby
rzeczywistej. (Podstawa jest typu double, a wyk�adnik typu int,
przy czy zar�wno podstawa jak wyk�adnik mog� mie� dowolny
znak.
Dane wprowadzamy z klawiatury.

Wykonal Jakub Gadecki.

*/

#include <iostream>

using namespace std;

int main(){
	double a,c=1;
	int b,d;
	
	
	cout<<"\nPodaj wartosc podstawy: ";
	cin>>a;
	cout<<"\nPodaj wykladnik: ";
	cin>>b;
	
	if(b<0){
		b=-b;
		d=1;
	}
	
	while(b-->0){
		c*=a;

	}
	
	while(d--!=0) {
		c=1/c;
	}
	
	
	cout<<"\nWynik: "<<c<<"\n\n";
	
	system("PAUSE");
	return 0;
}
