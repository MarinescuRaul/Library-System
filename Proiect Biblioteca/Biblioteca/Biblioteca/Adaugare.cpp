#include <iostream>
#include <string>
#include "header.h"
#include "Carte.h"
#include "Culegere.h"
#include <Windows.h>

using namespace std;

void Adaugare(vector<Utilizatori*> &v, Utilizatori &u,vector<Item*> &item)
{
    system("cls");
    cout<<"---------------------------------"<<endl;
    cout<<"||    ~MENIU ADAUGARE ITEM~    ||"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Introduceti cifra corespunzatoare operatiei dorite"<<endl;
    cout<<"1. Adauga carte"<<endl;
    cout<<"2. Adauga culegere"<<endl;
    cout<<"3. Inapoi"<<endl;
    string i;
    int n=0;
    do
    {
        if(n!=0)
            cout<<"Introduceti 1 sau 2 sau 3!!!"<<endl;
        cout<<" ";
        cin>>i;
        n++;
    }
    while(i!="1"&&i!="2"&&i!="3");
    if(i=="1")
    {
        Adaug_carte(v,u,item);
    }
    else if(i=="2")
    {
        Adaug_culegere(v,u,item);
    }
    else
    {
        if(u.getStatus()==1)
            Meniu_Principal_Admin(v,u,item);
        else
            Meniu_Principal(v,u,item);
    }
}

void Adaug_carte(vector<Utilizatori*> &v, Utilizatori &u,vector<Item*> &item)
{
    string nume,autor,editura;
    double pret;
    int an,nr_pag,nr_ex,ok=0;
    cin.ignore();
    cout<<"Numele: ";
    getline(cin,nume);
    for(auto it: item)
    {
        if(it->getNume() == nume)
        {
            ok=1;
            break;
        }
    }
    if(ok==1)
    {
        cout<<"Cartea exista deja!"<<endl;
        Sleep(2000);
        Adaugare(v,u,item);

    }
    else
    {
        cout<<"Autor: ";
        getline(cin,autor);
        cout<<"Pret: ";
        cin>>pret;
        cout<<"Numar Pagini: ";
        cin>>nr_pag;
        cout<<"Numar Exemplare: ";
        cin>>nr_ex;
        cout<<"Editura: ";
        cin.ignore();
        getline(cin,editura);
        cout<<"An aparitie: ";
        cin>>an;
        cout<<endl;
        Carte *c = new Carte(nume,autor,pret,nr_pag,nr_ex,editura,an);
        item.push_back(c);
        cout<<endl;
        cout<<"Culegerea a fost adaugat cu succes!";
        ScriereFisier(v,item);
        Sleep(2500);
        Adaugare(v,u,item);
    }

}

void  Adaug_culegere(vector<Utilizatori*> &v, Utilizatori &u,vector<Item*> &item)
{
    string nume,gen,editura;
    double pret;
    int ok=0;
    cin.ignore();
    int an,nr_pag,nr_ex;
    cout<<"Numele: ";
    getline(cin,nume);
    for(auto it: item)
    {
        if(it->getNume() == nume)
        {
            ok=1;
            break;
        }
    }
    if(ok==1)
    {
        cout<<"Culegerea exista deja!"<<endl;
        Sleep(2500);
        Adaugare(v,u,item);

    }
    else
    {

        cout<<"Gen: ";
        cin>>gen;
        cout<<"Pret: ";
        cin>>pret;
        cout<<"Numar Pagini: ";
        cin>>nr_pag;
        cout<<"Numar Exemplare: ";
        cin>>nr_ex;
        cout<<"Editura: ";
        cin.ignore();
        getline(cin,editura);
        cout<<"An aparitie: ";
        cin>>an;
        Culegere* c = new Culegere(nume,gen,pret,nr_pag,nr_ex,editura,an);
        item.push_back(c);
        cout<<endl;
        cout<<"Culegerea a fost adaugat cu succes!";
        ScriereFisier(v,item);
        Sleep(2500);
        Adaugare(v,u,item);
    }

}
