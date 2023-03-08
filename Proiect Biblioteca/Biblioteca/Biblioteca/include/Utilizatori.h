#ifndef UTILIZATORI_H
#define UTILIZATORI_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Utilizatori
{
      protected:
    string nume;
    string prenume;
    string user;
    string nrTlf;
    string parola;
    int status;
    public:
        Utilizatori(string nume, string prenume, string user, string nrTlf, string parola, int status);
        Utilizatori(const Utilizatori &u);
        friend ostream& operator <<(ostream& st, const Utilizatori& u);
        string getNume()const{
          return this->nume;
        }
         string getPrenume()const{
          return this->prenume;
        }
         string getUser()const{
          return this->user;
        }
         string getNrTlf()const{
          return this->nrTlf;
        }
         string getParola()const{
          return this->parola;
        }
        int getStatus()const{
          return this->status;
        }

        virtual ~Utilizatori();

    private:
        virtual ostream& afisare(ostream& st)const;
};

#endif // UTILIZATORI_H
