#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Utilizatori.h"
#include <vector>
#include <algorithm>
#include "header.h"
#include <conio.h>



using namespace std;




void MeniuLogare(vector<Utilizatori*> v);
void  creaza_cont(vector<Utilizatori*> v);
void login(vector<Utilizatori*> v);
void culoare(vector<Utilizatori*> v,vector<Item*> item);

bool verif_nr(string nr)
{
    if(nr.length()!=10)
        return false;
    for(int i=0; i<nr.length(); i++)
        if(nr[i]<'0' || nr[i]>'9')
            return false;
    return true;
}

bool valid_nume(string nume)
{
    if(nume[0]<'A' || nume[0]>'Z')
        return false;
    for(int i=1; i<nume.length(); i++)
        if((nume[i]<'a' || nume[i]>'z') && nume[i]!='-')
            return false;
    return true;
}

void MeniuLogare( vector<Utilizatori*> v,vector<Item*> item)
{

    cout<<"Pentru a crea cont apasati tasta 1"<<endl;
    cout<<"Pentru a te autentifica apasa tasta 2"<<endl;
    cout<<"Pentru a schimba culoarea apasa tasta 3"<<endl;
    string i;
    int n=0;
    do
    {
        if(n!=0)
            cout<<"Introduceti 1, 2 sau 3 !!!"<<endl;
        cout<<" ";
        cin>>i;
        n++;
    }
    while(i!="1"&&i!="2"&&i!="3");

    if(i=="1")
        creaza_cont(v,item);
    else if(i=="2")
        login(v,item);
    else
        culoare(v,item);

}

void culoare(vector<Utilizatori*> v,vector<Item*> item)
{
    system("cls");
    cout<<"1. Text albastru"<<endl;
    cout<<"2. Text verde"<<endl;
    cout<<"3. Text rosu"<<endl;
    cout<<"4. Text galben"<<endl;
    cout<<"5. Default"<<endl;
    cout<<"6. Text albastru fundal rosu"<<endl;
    cout<<"7. Text rosu fundal galben"<<endl;
    cout<<"8. Text galben fundal violet"<<endl;
    cout<<"9. Text negru fundal gri"<<endl;


    int i,n;
    do
    {
        if(i>0)
            cout<<"Numarul trebuie sa fie cuprins intre 1 si 9!"<<endl;
        i++;
        cin>>n;
    }
    while(n<1||n>9);
    switch(n)
    {


    case 1:
        system("color 09");
        break;
    case 2:
        system("color 02");
        break;
    case 3:
        system("color 04");
        break;
    case 4:
        system("color 06");
        break;
    case 5:
        system("color 07");
        break;
    case 6:
        system("color C1");
        break;
    case 7:
        system("color E4");
        break;
    case 8:
        system(" Color 56");
        break;
    case 9:
        system("color 70");
        break;

    }
    MeniuLogare(v,item);
}

void creaza_cont( vector<Utilizatori*> v,vector<Item*> item)
{
    string nume,prenume,user,nr,parola;
    int i=0;
    system("cls");
    cout<<"Introduceti:"<<endl;
    cout<<"Nume: ";
    do
    {
        if(i!=0)
            cout<<"Numele trebuie sa contina doar litere si sa inceapa cu majuscula!!"<<endl<<endl;
        cin>>nume;
        i++;

    }
    while(!valid_nume(nume));

    i=0;

    cout<<"Prenume: ";
    do
    {
        if(i!=0)
            cout<<"Prenumele trebuie sa contina doar litere si sa inceapa cu majuscula!!"<<endl<<endl;
        cin>>prenume;
        i++;

    }
    while(!valid_nume(prenume));
    i=0;

    cout<<"User: ";
    cin>>user;
    cout<<"Nr Telefon: ";
    do
    {
        if(i!=0)
            cout<<"Numarul de telefon trebuie sa contina 10 cifre!"<<endl<<endl;
        cin>>nr;
        i++;

    }
    while(!verif_nr(nr));

    cout<<"Parola: ";
    cin>>parola;
    int x=0;
    Utilizatori *u = new Utilizatori(nume,prenume,user,nr,parola,0);
    for (auto it:v)
        if(it->getUser()==u->getUser() || it->getNrTlf()==u->getNrTlf())
            x=1;
    if(x==1)
        cout<<"Exista deja un utilizator cu acest user sau numar de telefon!"<<endl<<endl;
    else
    {
        v.push_back(u);
    }
    ScriereFisier(v,item);
    MeniuLogare(v,item);
}

void login(vector<Utilizatori*> v,vector<Item*> item)
{
    system("cls");
    int ok = 0,k;
    string user, parola;
    char ch;
    const char ENTER = 13;
    cout<<"User: ";
    cin>>user;
    cout<<"Parola: ";
    while((ch = _getch()) !=ENTER)
    {
        parola += ch;
        cout<<'*';
    }

    Utilizatori *u;
    for(auto it: v)
        if(it->getUser()==user && it->getParola() == parola)
        {
            ok=1;
            u = it;
            k = it->getStatus();
            break;
        }

    if(ok==1)
    {
        system("cls");
        cout<<endl<<"Bine ati venit "<<user<<"!"<<endl;
        if(k == 0)
            Meniu_Principal(v,*u,item);
        else if( k == 1)
            Meniu_Principal_Admin(v,*u,item);
    }
    else
    {
        cout<<"Nu exista acest utilizator!"<<endl<<endl;
        MeniuLogare(v,item);
    }



}
void Deconectare(vector<Utilizatori*> v,vector<Item*> item)
{
    system("cls");
    MeniuLogare(v,item);
}

