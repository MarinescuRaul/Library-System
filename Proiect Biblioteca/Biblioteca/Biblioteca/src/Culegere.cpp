#include "Culegere.h"
#include <iostream>
#include <string>

using namespace std;
Culegere::Culegere(string nume,string gen, double pret, int nr_pagini, int nr_exemplare, string editura, int an):Item(nume,pret,nr_pagini,nr_exemplare,editura,an)
{
   this->gen = gen;
}

ostream& operator<<(ostream &st, const Culegere& c)
{
    return c.afisare(st);
}

ostream& Culegere::afisare(ostream& st)const
{
    st<<this->nume<<" "<<this->gen<<" "<<this->pret<<" "<<this->nr_pagini<<" "<<this->nr_exemplare<<" "<<this->editura<<" "<<this->an<<endl;
    return st;
}

Culegere::~Culegere()
{

}
