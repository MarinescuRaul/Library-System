#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

Item::Item(string nume, double pret, int nr_pagini, int nr_exemplare, string editura, int an)
{
    this->nume = nume;
    this->pret = pret;
    this->nr_pagini = nr_pagini;
    this->nr_exemplare = nr_exemplare;
    this->editura = editura;
    this->an = an;
}


ostream& operator<<(ostream &st, const Item& i)
{
    return i.afisare(st);
}
ostream& Item::afisare(ostream& st)const
{
    st<<this->nume<<" "<<this->pret<<" "<<this->nr_pagini<<" "<<this->nr_exemplare<<" "<<this->editura<<" "<<this->an<<endl;
    return st;
}

Item::~Item()
{

}
