//funkcje.cpp
#include "funkcje.h"
int moja_fun(int x)
{
return x*x;
};
double kwadrat_prez_wart(double liczba)
{
    liczba=liczba*liczba;
    return liczba;
};
void change(int &a,int &b)
{
  a=a+b;
  b=a-b;
  a=a-b;
 };

void kwadrat_prez_wsk(double *liczba)
{
    (*liczba)=(*liczba)*(*liczba);
    return;
};
void kwadrat_prez_ref(double &liczba)
{
    liczba=liczba*liczba;
    return;

};

 //void dodaj_jeden(int tab[],int n)
int* dodaj_jeden(int *tab,int n) //błedne
 {
      int nowa_tab[n];
     for(int i=0;i<n;i++)
     {
         //tab[i]=tab[i]+1;
         //tab[i]+=1;
         nowa_tab[i]=tab[i]+1;
     }
return nowa_tab;
 }


