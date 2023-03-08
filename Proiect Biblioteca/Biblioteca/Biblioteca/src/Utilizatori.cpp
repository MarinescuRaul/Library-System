#include "Utilizatori.h"
#include <iostream>
#include <string>

using namespace std;
Utilizatori::Utilizatori(string nume, string prenume, string user, string nrTlf, string parola, int status)
{
     this->nume = nume;
     this->prenume = prenume;
     this->user = user;
     this->nrTlf = nrTlf;
     this->parola = parola;
     this->status = status;
}

Utilizatori::Utilizatori(const Utilizatori &u)
{
     this->nume = u.nume;
     this->prenume = u.prenume;
     this->user = u.user;
     this->nrTlf = u.nrTlf;
     this->parola = u.parola;
     this->status = u.status;
}

ostream& operator <<(ostream& st, const Utilizatori& u)
{
    return u.afisare(st);
}

ostream& Utilizatori::afisare(ostream& st)const
{
  st<<this->nume<<" "<<this->prenume<<" "<<this->user<<" "<<this->nrTlf;
  return st;
}




Utilizatori::~Utilizatori()
{

}
