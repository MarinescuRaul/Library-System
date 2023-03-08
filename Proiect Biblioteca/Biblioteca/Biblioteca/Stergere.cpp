#include <iostream>
#include <string>
#include "header.h"
#include "Carte.h"
#include "Culegere.h"
#include <algorithm>
#include <typeinfo>
#include <Windows.h>
using namespace std;

void Sterge_nume(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"Introduceti numele: ";
    string s;
    cin.ignore();
    getline(cin,s);
    int i=0,j=0;
    for(auto it: item)
    {
        if(s==it->getNume())
        {
            item.erase(item.begin()+i);
            j++;
        }
        i++;
    }
    if(j>0)
    {
        cout<<endl<<"Stergerea s-a realizat cu succes!";
        ScriereFisier(v,item);
    }
    else
    {
        cout<<endl<<"Nu s-a gasit acest item!";
    }
    Sleep(2000);
    Stergere(v,u,item);

}
void Sterge_autor(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"Introduceti autorul: ";
    string s;
    cin.ignore();
    getline(cin,s);
    int i=0,j=0;
    for(auto it: item)
    {
        if(dynamic_cast<Carte*>(it))
        {
            Carte* c = dynamic_cast<Carte*>(it);
            if(s==c->getAutor())
            {
                item.erase(item.begin()+i);
                j++;
            }
        }
        i++;
    }
    if(j>0)
    {
        cout<<endl<<"Stergerea s-a realizat cu succes!";
        ScriereFisier(v,item);
    }
    else
    {
        cout<<endl<<"Nu s-a gasit acest item!";
    }

    Sleep(2000);
    Stergere(v,u,item);
}
void Sterge_editura(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"Introduceti editura: ";
    string s;
    cin.ignore();
    getline(cin,s);
    int i=0,j=0;
    for(auto it: item)
    {
        if(s==it->getEditura())
        {
            item.erase(item.begin()+i);
            j++;
        }
        i++;
    }
    if(j>0)
    {
        cout<<endl<<"Stergerea s-a realizat cu succes!";
        ScriereFisier(v,item);
    }
    else
    {
        cout<<endl<<"Nu s-a gasit acest item!";
    }
    Sleep(2000);
    Stergere(v,u,item);


}
void Sterge_an(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"Introduceti anul: ";
    int s;
    cin>>s;
    int i=0,j=0;
    for(auto it: item)
    {
        if(s==it->getAn())
        {
            item.erase(item.begin()+i);
            j++;
        }
        i++;
    }
    if(j>0)
    {
        cout<<endl<<"Stergerea s-a realizat cu succes!";
        ScriereFisier(v,item);
    }
    else
    {
        cout<<endl<<"Nu s-a gasit acest item!";
    }
    Sleep(2000);
    Stergere(v,u,item);

}
void Sterge_pret(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"Introduceti pretul: ";
    double s;
    cin>>s;
    int i=0,j=0;
    for(auto it: item)
    {
        if(s==it->getPret())
        {
            item.erase(item.begin()+i);
            j++;
        }
        i++;
    }
    if(j>0)
    {
        cout<<endl<<"Stergerea s-a realizat cu succes!";
        ScriereFisier(v,item);
    }
    else
    {
        cout<<endl<<"Nu s-a gasit acest item!";
    }
    Sleep(2000);
    Stergere(v,u,item);

}
void Sterge_nr(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"Introduceti numarul de pagini: ";

    int s;
    cin>>s;
    int i=0,j=0;
    for(auto it: item)
    {
        if(s==it->getNr_pagini())
        {
            item.erase(item.begin()+i);
            j++;
        }
        i++;
    }
    if(j>0)
    {
        cout<<endl<<"Stergerea s-a realizat cu succes!";
        ScriereFisier(v,item);
    }
    else
    {
        cout<<endl<<"Nu s-a gasit acest item!";
    }
    Sleep(2000);
    Stergere(v,u,item);

}
void Sterge_exemp(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"Introduceti numarul de exemplare: ";

    int s;
    cin>>s;
    int i=0,j=0;
    for(auto it: item)
    {
        if(s==it->getNr_exemplare())
        {
            item.erase(item.begin()+i);
            j++;
        }
        i++;
    }
    if(j>0)
    {
        cout<<endl<<"Stergerea s-a realizat cu succes!";
        ScriereFisier(v,item);
    }
    else
    {
        cout<<endl<<"Nu s-a gasit acest item!";
    }
    Sleep(2000);
    Stergere(v,u,item);
}
void Sterge_gen(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"Introduceti genul: ";
    string s;
    cin.ignore();
    getline(cin,s);
    int i=0,j=0;
    for(auto it: item)
    {
        if(dynamic_cast<Culegere*>(it))
        {

            Culegere* c = dynamic_cast<Culegere*>(it);
            if(s==c->getGen())
            {
                item.erase(item.begin()+i);
                j++;
            }
        }
        i++;
    }
    if(j>0)
    {
        cout<<endl<<"Stergerea s-a realizat cu succes!";
        ScriereFisier(v,item);
    }
    else
    {
        cout<<endl<<"Nu s-a gasit acest item!";
    }
    Sleep(2000);
    Stergere(v,u,item);
}

void Stergere(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    system("cls");
    cout<<"---------------------------------"<<endl;
    cout<<"||    ~MENIU STERGERE ITEM~    ||"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1. Sterge dupa nume"<<endl;
    cout<<"2. Sterge dupa autor"<<endl;
    cout<<"3. Sterge dupa editura"<<endl;
    cout<<"4. Sterge dupa an"<<endl;
    cout<<"5. Sterge dupa pret"<<endl;
    cout<<"6. Sterge dupa nr pagini"<<endl;
    cout<<"7. Sterge dupa nr exemplare"<<endl;
    cout<<"8. Sterge dupa gen"<<endl;
    cout<<"9. Inapoi"<<endl;

    int n,i;
    cout<<endl;
    cout<<"Introduceti numarul aferent operatiei: ";
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
        Sterge_nume(v,u,item);
        break;
    case 2:
        Sterge_autor(v,u,item);
        break;
    case 3:
        Sterge_editura(v,u,item);
        break;
    case 4:
        Sterge_an(v,u,item);
        break;
    case 5:
        Sterge_pret(v,u,item);
        break;
    case 6:
        Sterge_nr(v,u,item);
    case 7:
        Sterge_exemp(v,u,item);
    case 8:
        Sterge_gen(v,u,item);
    case 9:
        Meniu_Principal_Admin(v,u,item);
        break;
    }
}


