#include<iostream>
#include "funkcje.h"
using namespace std;
int b=4;
double c=3.1;
int main()
{
  int tablica[5]={11,12,13,14,15};
  cout<<"tablica[3]="<<tablica[3]<<endl;
dodaj_jeden(tablica,5);
  cout<<"*(tablica+3)="<<*(tablica+3)<<endl;
  cout<<"adres tablicy:"<<tablica<<endl;
  cout<<"adres drugiego elementu:"<<tablica+1<<endl;


//cout<<"Projekt wieloplikowy"<<endl;
//cout<<"c=  "<<c<<endl;
//cout<<"c^2=  "<<kwadrat_prez_wart(c)<<endl;
//cout<<"c=  "<<c<<endl;
//kwadrat_prez_ref(c);
//cout<<"c^2=  "<<c<<endl;
//kwadrat_prez_wsk(&c);
//cout<<"(c^2)^2=  "<<c<<endl;
//int zm1=1,zm2=13;
//cout<<"zm1= "<<zm1<<" zm2= "<<zm2<<endl;
//change(zm1,zm2);
//cout<<"zm1= "<<zm1<<" zm2= "<<zm2<<endl;


};

