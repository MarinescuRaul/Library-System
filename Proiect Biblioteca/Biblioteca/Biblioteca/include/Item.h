#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>

using namespace std;

class Item
{
protected:
    string nume;
    double pret;
    int nr_pagini;
    int nr_exemplare;
    string editura;
    int an;
    public:
        Item(string nume, double pret, int nr_pagini, int nr_exemplare, string editura, int an);
        friend ostream& operator<<(ostream& st, const Item& i);

        string getNume()const{
          return nume;
        }
        double getPret()const{
          return pret;
        }
        int getNr_pagini()const{
         return nr_pagini;
        }
        int getNr_exemplare()const{
         return nr_exemplare;
        }
        string getEditura()const{
         return editura;
        }
         int getAn()const{
          return an;
         }


        void setNume(string nume){
          this->nume = nume;
        }
         void setAn(int an){
          this->an = an;
        }

         void setPret(double pret){
          this->pret = pret;
        }

         void setNr_pagini(int nr_pagini){
          this->nr_pagini = nr_pagini;
        }




         void setNr_exemplare(int nr_exemplare){
          this->nr_exemplare = nr_exemplare;
        }

         void setEditura(string editura){
          this->editura = editura;
        }


        virtual ~Item();


    private:
        virtual ostream& afisare(ostream& st)const;
};

#endif // ITEM_H
