#include <iostream>
#include <string>
#include <typeinfo>
#include "header.h"
#include "Item.h"
#include "Carte.h"
#include "Culegere.h"
#include <map>
#include <vector>
#include <iomanip>
#include <Windows.h>
using namespace std;



void Afis_Carte(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    system("cls");

    cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: item)
    {
        if(dynamic_cast<Carte*>(it))
        {
            Carte*i=dynamic_cast<Carte*>(it);
            cout << left << setw(40) << i->getNume()
                 << left << setw(20) << i->getAutor()
                 << left << setw(8) << i->getPret()
                 << left << setw(11) << i->getNr_pagini()
                 << left << setw(12) << i->getNr_exemplare()
                 << left << setw(16) << i->getEditura()
                 <<left << setw(4) <<  i->getAn()
                 << endl;
        }
    }
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Afisare(v,u,item);
}

void Afis_Toate(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    system("cls");

    cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: item)
    {
        if(dynamic_cast<Carte*>(it))
        {
            Carte*i=dynamic_cast<Carte*>(it);
            cout << left << setw(40) << i->getNume()
                 << left << setw(20) << i->getAutor()
                 << left << setw(8) << i->getPret()
                 << left << setw(11) << i->getNr_pagini()
                 << left << setw(12) << i->getNr_exemplare()
                 << left << setw(16) << i->getEditura()
                 <<left << setw(4) <<  i->getAn()
                 << endl;
        }
        else
        {
            Culegere*i=dynamic_cast<Culegere*>(it);
            cout << left << setw(40) << i->getNume()
                 << left << setw(20) << i->getGen()
                 << left << setw(8) << i->getPret()
                 << left << setw(11) << i->getNr_pagini()
                 << left << setw(12) << i->getNr_exemplare()
                 << left << setw(16) << i->getEditura()
                 <<left << setw(4) <<  i->getAn()
                 << endl;
        }

    }
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Afisare(v,u,item);
}






void  Afis_Culegere(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    system("cls");
    cout << left << setw(40) << "NUME" << left << setw(20) << "GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: item)
    {
        if(dynamic_cast<Culegere*>(it))
        {
            Culegere*i=dynamic_cast<Culegere*>(it);
            cout << left << setw(40) << i->getNume()
                 << left << setw(20) << i->getGen()
                 << left << setw(8) << i->getPret()
                 << left << setw(11) << i->getNr_pagini()
                 << left << setw(12) << i->getNr_exemplare()
                 << left << setw(16) << i->getEditura()
                 <<left << setw(4) <<  i->getAn()
                 << endl;



        }

    }
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Afisare(v,u,item);
}

void  Afis_Autor(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{

    system("cls");
    map<string,vector<string>> m;
    for(auto it: item)
    {

        if(dynamic_cast<Carte*>(it))
        {
            Carte* c = dynamic_cast<Carte*>(it);
            m[c->getAutor()].push_back(c->getNume());
        }
    }
    for(map<string, vector<string>>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<": "<<(it->second).size()<<" ";
        for(auto i: (it->second))
            cout<<i<<", ";
        cout<<endl;
    }
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Afisare(v,u,item);
}

void Afis_Editurile(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    system("cls");
    map<string,vector<string>> m;
    for(auto c: item)
    {
        m[c->getEditura()].push_back(c->getNume());
    }

    for(map<string, vector<string>>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<": "<<(it->second).size()<<" ";
        for(auto i: (it->second))
            cout<<i<<", ";
        cout<<endl;
    }
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Afisare(v,u,item);
}

void  Afis_Date(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    system("cls");
    cout<<"Nume: "<<u.getNume()<<" | Prenume: "<<u.getPrenume()<<" | User: "<<u.getUser()<<" | NrTelefon: "<<u.getNrTlf()<<endl;
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Afisare(v,u,item);
}

void Afis_Utiliz(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    system("cls");
    cout << left << setw(12) << "NUME" << left << setw(12) << "PRENUME" << left << setw(10)<<"USERNAME" << left << setw(11) <<"TELEFON"<<endl;
    for(auto it: v)
    {
        cout << left << setw(12) << it->getNume()
             << left << setw(12) << it->getPrenume()
             << left << setw(10) << it->getUser()
             << left << setw(11) << it->getNrTlf()
             <<endl;

    }
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Afisare(v,u,item);
}



void  Afisare(vector<Utilizatori*> &v, Utilizatori &u,vector<Item*> &item)
{

    system("cls");
    cout<<"---------------------------------"<<endl;
    cout<<"||        ~MENIU AFISARE~      ||"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<endl<<"  Alegeti ce doriti sa afisati"<<endl<<endl;
    if(u.getStatus() == 0)
    {
        cout<<" 1. Toate"<<endl;
        cout<<" 2. Carti"<<endl;
        cout<<" 3. Culegeri"<<endl;
        cout<<" 4. Autori"<<endl;
        cout<<" 5. Editurile"<<endl;
        cout<<" 6. Date Personale"<<endl;
        cout<<" 7. Inapoi"<<endl;
        int n,i=0;
        cout<<endl;
        cout<<"Introduceti numarul aferent operatiei: "<<endl;
        do
        {
            if(i>0)
                cout<<"Numarul trebuie sa fie cuprins intre 1 si 7!"<<endl;
            i++;
            cin>>n;
        }
        while(n<1||n>7);

        switch(n)
        {
        case 1:
            Afis_Toate(v,u,item);
            break;
        case 2:
            Afis_Carte(v,u,item);
            break;
        case 3:
            Afis_Culegere(v,u,item);
            break;
        case 4:
            Afis_Autor(v,u,item);
            break;
        case 5:
            Afis_Editurile(v,u,item);
            break;
        case 6:
            Afis_Date(v,u,item);
            break;
        case 7:
            Meniu_Principal(v,u,item);
            break;
        }

    }

    else
    {
        cout<<" 1. Toate "<<endl;
        cout<<" 2. Carti"<<endl;
        cout<<" 3. Culegeri"<<endl;
        cout<<" 4. Autori"<<endl;
        cout<<" 5. Editurile"<<endl;
        cout<<" 6. Date Personale"<<endl;
        cout<<" 7. Date utilizatori"<<endl;
        cout<<" 8. Inapoi"<<endl;
        int n,i=0;
        cout<<endl;
        cout<<"Introduceti numarul aferent operatiei: "<<endl;
        do
        {
            if(i>0)
                cout<<"Numarul trebuie sa fie cuprins intre 1 si 8!"<<endl;
            i++;
            cin>>n;
        }
        while(n<1||n>8);

        switch(n)
        {
        case 1:
            Afis_Toate(v,u,item);
            break;
        case 2:
            Afis_Carte(v,u,item);
            break;
        case 3:
            Afis_Culegere(v,u,item);
            break;
        case 4:
            Afis_Autor(v,u,item);
            break;
        case 5:
            Afis_Editurile(v,u,item);
            break;
        case 6:
            Afis_Date(v,u,item);
            break;
        case 7:
            Afis_Utiliz(v,u,item);
            break;
        case 8:
            if(u.getStatus()==1)
                Meniu_Principal_Admin(v,u,item);
            else
                Meniu_Principal(v,u,item);
            break;

        }

    }

}


