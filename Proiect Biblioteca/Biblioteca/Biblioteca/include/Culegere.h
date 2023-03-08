#ifndef CULEGERE_H
#define CULEGERE_H
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;

class Culegere: public Item
{
    string gen;
    public:
        Culegere(string nume,string gen, double pret, int nr_pagini, int nr_exemplare, string editura, int an);
         friend ostream& operator<<(ostream& st, const Culegere& a);

         string getGen()const{
          return this->gen;
         }

          void setGen(string gen){
           this->gen = gen;
         }
        virtual ~Culegere();


    private:
         ostream& afisare(ostream& st)const;
};

#endif // CULEGERE_H
