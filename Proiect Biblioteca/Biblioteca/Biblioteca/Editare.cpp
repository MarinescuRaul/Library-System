#include <iostream>
#include <string>
#include "header.h"
#include <typeinfo>
#include <Carte.h>
#include <Culegere.h>
using namespace std;

void Edit_nume(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    string s;
    Item *i;
    int ok=0;
    cout<<"Introduceti numele itemului: ";
    cin.ignore();
    getline(cin,s);
    cout<<endl;
    for(auto it: item)
    {
        if(s == it->getNume())
        {
            ok=1;
            i= it;
            break;
        }
    }
    if(ok==0)
    {
        cout<<"NU a fost gasit!";

    }
    else
    {
        string s1;
        cout<<"Introduceti noul nume:";
        getline(cin,s1);
        i->setNume(s1);
        cout<<endl;
        cout<<"Numele a fost schimbat cu succes!";
        cout<<endl;
        char ch;
        do
        {
            cin>>ch;

        }
        while(ch==' ');
        ScriereFisier(v,item);
        Editare(v,u,item);


    }
}
void Edit_autor(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{

    string s,s2;
    Carte *i;
    int ok=0;
    cout<<"Introduceti numele cartii: ";
    cin.ignore();
    getline(cin,s);
    cout<<endl;
    for(auto it: item)
    {

        if(s == it->getNume())
        {
            ok=1;
            i=dynamic_cast<Carte*>(it);
            break;
        }
    }


    if(ok==0)
    {
        cout<<"NU a fost gasit!";
        Editare(v,u,item);

    }
    else
    {
        string s1;
        cout<<"Introduceti noul autor:";
        getline(cin,s1);
        i->setAutor(s1);
        cout<<endl;
        cout<<"Autorul a fost schimbat cu succes!";
        cout<<endl;
        char ch;
        do
        {
            cin>>ch;

        }
        while(ch==' ');
        ScriereFisier(v,item);
        Editare(v,u,item);
    }

}
void Edit_nr(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    string s;
    Item *i;
    int ok=0;
    cout<<"Introduceti numele itemului: ";
    cin.ignore();
    getline(cin,s);
    cout<<endl;
    for(auto it: item)
    {
        if(s == it->getNume())
        {
            ok=1;
            i= it;
            break;
        }
    }
    if(ok==0)
    {
        cout<<"NU a fost gasit!";
        Editare(v,u,item);
    }
    else
    {
        int s1;
        cout<<"Introduceti noul nr de pagini:";
        cin>>s1;
        i->setNr_pagini(s1);
        cout<<endl;
        cout<<"Numarul de pagini a fost schimbat cu succes!";
        cout<<endl;
        char ch;
        do
        {
            cin>>ch;

        }
        while(ch==' ');
        ScriereFisier(v,item);
        Editare(v,u,item);
    }
}
void Edit_exemp(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    string s;
    Item *i;
    int ok=0;
    cout<<"Introduceti numele itemului: ";
    cin.ignore();
    getline(cin,s);
    cout<<endl;
    for(auto it: item)
    {
        if(s == it->getNume())
        {
            ok=1;
            i= it;
            break;
        }
    }
    if(ok==0)
    {
        cout<<"NU a fost gasit!";
        Editare(v,u,item);
    }
    else
    {
        int s1;
        cout<<"Introduceti noul nr de pagini:";
        cin>>s1;
        i->setNr_exemplare(s1);
        cout<<endl;
        cout<<"Numarul de exemplare a fost schimbat cu succes!";
        cout<<endl;
        char ch;
        do
        {
            cin>>ch;

        }
        while(ch==' ');
        ScriereFisier(v,item);
        Editare(v,u,item);
    }
}
void Edit_an(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    string s;
    Item *i;
    int ok=0;
    cout<<"Introduceti numele itemului: ";
    cin.ignore();
    getline(cin,s);
    cout<<endl;
    for(auto it: item)
    {
        if(s == it->getNume())
        {
            ok=1;
            i= it;
            break;
        }
    }
    if(ok==0)
    {
        cout<<"NU a fost gasit!";
        Editare(v,u,item);
    }
    else
    {
        int s1;
        cout<<"Introduceti noul an:";
        cin>>s1;
        i->setAn(s1);
        cout<<endl;
        cout<<"Anul a fost schimbat cu succes!";
        cout<<endl;
        char ch;
        do
        {
            cin>>ch;

        }
        while(ch==' ');
        ScriereFisier(v,item);
        Editare(v,u,item);
    }
}

void Edit_pret(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    string s;
    Item *i;
    int ok=0;
    cout<<"Introduceti numele itemului: ";
    cin.ignore();
    getline(cin,s);
    cout<<endl;
    for(auto it: item)
    {
        if(s == it->getNume())
        {
            ok=1;
            i= it;
            break;
        }
    }
    if(ok==0)
    {
        cout<<"NU a fost gasit!";
        Editare(v,u,item);
    }
    else
    {
        double s1;
        cout<<"Introduceti noul pret: ";
        cin>>s1;
        i->setPret(s1);
        cout<<endl;
        cout<<"Pretul a fost schimbat cu succes!";
        cout<<endl;
        char ch;
        do
        {
            cin>>ch;

        }
        while(ch==' ');
        ScriereFisier(v,item);
        Editare(v,u,item);
    }
}
void Edit_edit(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    string s;
    Item *i;
    int ok=0;
    cout<<"Introduceti numele itemului: ";
    cin.ignore();
    getline(cin,s);
    cout<<endl;
    for(auto it: item)
    {
        if(s == it->getNume())
        {
            ok=1;
            i= it;
            break;
        }
    }
    if(ok==0)
    {
        cout<<"NU a fost gasit!";
        Editare(v,u,item);
    }
    else
    {
        string s1;
        cout<<"Introduceti noua editura: ";
        cin>>s1;
        i->setEditura(s1);
        cout<<endl;
        cout<<"Editura a fost schimbata cu succes!";
        cout<<endl;
        char ch;
        do
        {
            cin>>ch;

        }
        while(ch==' ');
        ScriereFisier(v,item);
        Editare(v,u,item);
    }
}

void Edit_gen(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    string s,s2;
    Culegere *i;
    int ok=0;
    cout<<"Introduceti numele culegerii: ";
    cin.ignore();
    getline(cin,s);
    cout<<endl;
    for(auto it: item)
    {

        if(s == it->getNume())
        {
            ok=1;
            i=dynamic_cast<Culegere*>(it);
            break;
        }
    }


    if(ok==0)
    {
        cout<<"NU a fost gasit!";
        Editare(v,u,item);

    }
    else
    {
        string s1;
        cout<<"Introduceti noul gen:";
        getline(cin,s1);
        i->setGen(s1);
        cout<<endl;
        cout<<"Genul a fost schimbat cu succes!";
        cout<<endl;
        char ch;
        do
        {
            cin>>ch;

        }
        while(ch==' ');
        ScriereFisier(v,item);
        Editare(v,u,item);
    }
}

void Edit_carte(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    cout<<"Ce doriti sa editati la carte?"<<endl;
    cout<<"1. Numele"<<endl;
    cout<<"2. Autorul"<<endl;
    cout<<"3. Numarul de pagini"<<endl;
    cout<<"4. Numarul de exemplare"<<endl;
    cout<<"5. Anul aparitiei"<<endl;
    cout<<"6. Pretul"<<endl;
    cout<<"7. Editura"<<endl;
    cout<<"8. Inapoi"<<endl;
    int n,i;
    cout<<endl;
    cout<<"Introduceti numarul aferent operatiei: ";
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
        Edit_nume(v,u,item);
        break;
    case 2:
        Edit_autor(v,u,item);
        break;
    case 3:
        Edit_nr(v,u,item);
        break;
    case 4:
        Edit_exemp(v,u,item);
        break;
    case 5:
        Edit_an(v,u,item);
        break;
    case 6:
        Edit_pret(v,u,item);
    case 7:
        Edit_edit(v,u,item);
    case 8:
        Editare(v,u,item);
        break;
    }
}


void Edit_culegere(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item)
{
    cout<<"Ce doriti sa editati la culegere?"<<endl;
    cout<<"1. Numele"<<endl;
    cout<<"2. Autor"<<endl;
    cout<<"3. Numarul de pagini"<<endl;
    cout<<"4. Numarul de exemplare"<<endl;
    cout<<"5. Anul aparitiei"<<endl;
    cout<<"6. Pretul"<<endl;
    cout<<"7. Editura"<<endl;
    cout<<"8. Inapoi"<<endl;
    int n,i;
    cout<<endl;
    cout<<"Introduceti numarul aferent operatiei: ";
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
        Edit_nume(v,u,item);
        break;
    case 2:
        Edit_gen(v,u,item);
        break;
    case 3:
        Edit_nr(v,u,item);
        break;
    case 4:
        Edit_exemp(v,u,item);
        break;
    case 5:
        Edit_an(v,u,item);
        break;
    case 6:
        Edit_pret(v,u,item);
    case 7:
        Edit_edit(v,u,item);
    case 8:
        Editare(v,u,item);
        break;
    }

}

void Editare(vector<Utilizatori*> &v,Utilizatori &u, vector<Item*> &item)
{
    system("cls");
    cout<<"Ce doriti sa editati?"<<endl;
    cout<<"1. Carte"<<endl;
    cout<<"2. Culegere"<<endl;
    cout<<"3. Inapoi"<<endl;
    int n=0;
    string i;
    do
    {
        if(n!=0)
            cout<<"Introduceti 1 sau 2 !!!"<<endl;
        cout<<" ";
        cin>>i;
        n++;
    }
    while(i!="1"&&i!="2"&&i!="3");
    if(i=="1")
    {
        Edit_carte(v,u,item);
    }
    else if(i=="2")
    {
        Edit_culegere(v,u,item);
    }
    else
    {
        if(u.getStatus()==1)
            Meniu_Principal_Admin(v,u,item);
        else
            Meniu_Principal(v,u,item);
    }


}


