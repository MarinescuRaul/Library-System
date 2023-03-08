#ifndef CARTE_H
#define CARTE_H
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;

class Carte : public Item
{
    string autor;
    public:
        Carte(string nume,string autor, double pret, int nr_pagini, int nr_exemplare, string editura, int an);
         friend ostream& operator<<(ostream& st, const Carte& a);

        string getAutor()const{
         return this->autor;
        }


        void setAutor(string autor){
        this->autor=autor;
        }
        virtual ~Carte();

    private:
        ostream& afisare(ostream& st)const;
};

#endif // CARTE_H
