#include "Carte.h"
#include <iostream>
#include <string>

using namespace std;

Carte::Carte(string nume,string autor, double pret, int nr_pagini, int nr_exemplare, string editura, int an):Item(nume,pret,nr_pagini,nr_exemplare,editura,an)
{
    this->autor = autor;
}

ostream& operator<<(ostream &st, const Carte& a)
{
    return a.afisare(st);
}

ostream& Carte::afisare(ostream& st)const
{
    st<<this->nume<<" "<<this->autor<<" "<<this->pret<<" "<<this->nr_pagini<<" "<<this->nr_exemplare<<" "<<this->editura<<" "<<this->an<<endl;
    return st;
}

Carte::~Carte()
{

}
