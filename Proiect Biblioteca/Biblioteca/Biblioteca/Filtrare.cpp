#include <iostream>
#include <string>
#include "header.h"
#include <algorithm>
#include "Carte.h"
#include "Culegere.h"
#include <typeinfo>
#include <iomanip>

using namespace std;
void afis_tabel(vector<Item*>&item,string s,string s1,string s2)
{
    int i=0,ok=0;
    for(auto it: item)
    {
        if(((it->getNume()).find(s)!=string::npos)||((it->getNume()).find(s1)!=string::npos)||(it->getNume()==s2))
        {
            if(ok==0)
            {
                cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
                     << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
                ok=1;
            }
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





            i++;
        }
    }

    if(i==0)
        cout<<"Nu a fost gasit nici un obiect cu acest nume!"<<endl;
}

void Filt_nume(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item)
{
    cout<<"Introduceti numele: ";
    string s,s1,s2;

    cin.ignore();
    getline(cin,s);
    cout<<endl;
    s2=s;
    transform(s.begin(), s.end(),s.begin(), ::tolower);
    s1=s;
    transform(s1.begin(), s1.begin()+1,s1.begin(), ::toupper);
    afis_tabel(item,s,s1,s2);

    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare(v,u,item);
}


void Filt_pret(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item)
{
    cout<<"Introduceti pretul: ";
    double n;
    cin>>n;
    cout<<endl;
    int j=0,ok=0;
    for(auto it: item)
    {

        if(ok==0)
        {
            cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
                 << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
            ok=1;
        }
        if(it->getPret()==n)
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
            j++;
        }


    }


    if(j==0)
        cout<<"Nu a fost gasit nici un obiect cu acest pret!"<<endl;
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare(v,u,item);

}


void Filt_autor(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item)
{
    cout<<"Introduceti autorul: ";
    string s,s1,s2;

    cin.ignore();
    getline(cin,s);
    cout<<endl;
    s2=s;
    transform(s.begin(), s.end(),s.begin(), ::tolower);
    s1=s;
    transform(s1.begin(), s1.begin()+1,s1.begin(), ::toupper);
    int j=0,ok=0;
    for(auto it: item)
    {

        {
            if(ok==0)
            {
                cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR" << left
                     << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
                ok=1;
            }
            if(dynamic_cast<Carte*>(it))

            {
                Carte*i=dynamic_cast<Carte*>(it);
                if(((i->getAutor()).find(s)!=string::npos)||((i->getAutor()).find(s1)!=string::npos)||(i->getAutor()==s2))
                {

                    cout << left << setw(40) << i->getNume()
                         << left << setw(20) << i->getAutor()
                         << left << setw(8) << i->getPret()
                         << left << setw(11) << i->getNr_pagini()
                         << left << setw(12) << i->getNr_exemplare()
                         << left << setw(16) << i->getEditura()
                         <<left << setw(4) <<  i->getAn()
                         << endl;
                    j++;
                }
            }






        }
    }

    if(j==0)
        cout<<"Nu a fost gasit nici un obiect cu acest autor!"<<endl;

    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare(v,u,item);
}


void Filt_gen(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item)
{
    cout<<"Introduceti genul: ";
    string s,s1,s2;
    int i=0;
    cin.ignore();
    getline(cin,s);
    cout<<endl;
    s2=s;
    transform(s.begin(), s.end(),s.begin(), ::tolower);
    s1=s;
    transform(s1.begin(), s1.begin()+1,s1.begin(), ::toupper);
    int j=0,ok=0;
    for(auto it: item)
    {

        {
            if(ok==0)
            {
                cout << left << setw(40) << "NUME" << left << setw(20) << "GEN" << left
                     << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
                ok=1;
            }
            if(dynamic_cast<Culegere*>(it))

            {
                Culegere*i=dynamic_cast<Culegere*>(it);
                if(((i->getGen()).find(s)!=string::npos)||((i->getGen()).find(s1)!=string::npos)||(i->getGen()==s2))
                {

                    cout << left << setw(40) << i->getNume()
                         << left << setw(20) << i->getGen()
                         << left << setw(8) << i->getPret()
                         << left << setw(11) << i->getNr_pagini()
                         << left << setw(12) << i->getNr_exemplare()
                         << left << setw(16) << i->getEditura()
                         <<left << setw(4) <<  i->getAn()
                         << endl;
                    j++;
                }
            }






        }
    }

    if(j==0)
        cout<<"Nu a fost gasit nici un obiect cu acest gen!"<<endl;
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare(v,u,item);
}


void Filt_nr_pag(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item)
{
    cout<<"Introduceti numarul de pagini: ";
    int n;
    cin>>n;
    cout<<endl;
    int j=0,ok=0;
    for(auto it: item)
    {

        if(ok==0)
        {
            cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
                 << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
            ok=1;
        }
        if(it->getNr_pagini()==n)
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
            j++;
        }

    }

    if(j==0)
        cout<<"Nu a fost gasit nici un obiect cu acest numar de pagini!"<<endl;
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare(v,u,item);
}


void Filt_edit(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item)
{
    cout<<"Introduceti editura: ";
    string s,s1,s2;
    int i=0;
    cin.ignore();
    getline(cin,s);
    cout<<endl;
    s2=s;
    transform(s.begin(), s.end(),s.begin(), ::tolower);
    s1=s;
    transform(s1.begin(), s1.begin()+1,s1.begin(), ::toupper);
    for(auto it: item)
    {
        if(((it->getEditura()).find(s)!=string::npos)||((it->getEditura()).find(s1)!=string::npos)||(it->getEditura()==s2))
        {
            cout<<*it;
            i++;
        }
    }
    if(i==0)
        cout<<"Nu a fost gasit nici un obiect cu acesta editura!"<<endl;
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare(v,u,item);
}


void Filt_an(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item)
{
    cout<<"Introduceti anul: ";
    int n;
    cin>>n;
    cout<<endl;
    int j=0,ok=0;
    for(auto it: item)
    {

        if(ok==0)
        {
            cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
                 << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
            ok=1;
        }
        if(it->getAn()==n)
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
            j++;
        }
    }


    if(j==0)
        cout<<"Nu a fost gasit nici un obiect din acest an!"<<endl;
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare(v,u,item);
}


void Filtrare(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item)
{
    system("cls");
    // system("Color 5E");
    cout<<"---------------------------------"<<endl;
    cout<<"||      ~MENIU FILTRARE~       ||"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Filtreaza dupa:"<<endl<<endl;
    cout<<"1. Nume"<<endl;
    cout<<"2. Pret"<<endl;
    cout<<"3. Autor"<<endl;
    cout<<"4. Gen"<<endl;
    cout<<"5. Numar pagini"<<endl;
    cout<<"6. Editura"<<endl;
    cout<<"7. An"<<endl;
    cout<<"8. Filtrare multipla"<<endl;
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
        Filt_nume(v,u,item);
        break;
    case 2:
        Filt_pret(v,u,item);
        break;
    case 3:
        Filt_autor(v,u,item);
        break;
    case 4:
        Filt_gen(v,u,item);
        break;
    case 5:
        Filt_nr_pag(v,u,item);
        break;
    case 6:
        Filt_edit(v,u,item);
    case 7:
        Filt_an(v,u,item);
    case 8:
        Filtrare_multipla(v,u,item);
    case 9:
        if(u.getStatus()==1)
            Meniu_Principal_Admin(v,u,item);
        else
            Meniu_Principal(v,u,item);
        break;
    }
}
///===================================================FILTRARE MULTIMPLA ===========================================================////
void Filt_mult_autor_ani(vector<Utilizatori*> v, Utilizatori &u, vector<Item*> &item)
{
    system("cls");
    string nume;
    int an_min,an_max;
    cout<<"Introduceti numele autorului:";
    cin.ignore();
    getline(cin,nume);

    cout<<"Introduceti intervalul de ani in care se efectueaza cautarea:"<<endl;
    cout<<"De la: ";
    cin>>an_min;
    cout<<"Pana la: ";
    cin>>an_max;
    int ok=0;
    system("cls");
    for(auto it:item)
        if(dynamic_cast<Carte*>(it))
        {
            Carte*i = dynamic_cast<Carte*>(it);
            if(i->getAutor()==nume && (i->getAn()>=an_min && i->getAn()<=an_max))
            {

                if(ok==0)
                {
                    cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR" << left
                         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
                    ok=1;
                }

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
    if(ok==0)
        cout<<"Nu exista un autor sau o carte intre anii specificati !";
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare_multipla(v,u,item);
}

void Filt_mult_autor_pret(vector<Utilizatori*> v, Utilizatori &u, vector<Item*> &item)
{
    system("cls");
    string nume;
    int pret_min,pret_max;
    cout<<"Introduceti numele autorului:";
    cin.ignore();
    getline(cin,nume);

    cout<<"Introduceti intervalul de pret in care se efectueaza cautarea:"<<endl;
    cout<<"De la: ";
    cin>>pret_min;
    cout<<"Pana la: ";
    cin>>pret_max;
    int ok=0;
    system("cls");
    for(auto it:item)
        if(dynamic_cast<Carte*>(it))
        {
            Carte*i = dynamic_cast<Carte*>(it);
            if(i->getAutor()==nume && (i->getPret()>=pret_min && i->getPret()<=pret_max))
            {

                if(ok==0)
                {
                    cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR" << left
                         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
                    ok=1;
                }

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
    if(ok==0)
        cout<<"Nu exista un autor sau o carte in pretul specificat !";
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare_multipla(v,u,item);
}

void Filt_mult_autor_ani_pret(vector<Utilizatori*> v, Utilizatori &u, vector<Item*> &item)
{
    system("cls");
    string nume;
    int an_min,an_max;
    double pret_min,pret_max;
    cout<<"Introduceti numele autorului:";
    cin.ignore();
    getline(cin,nume);

    cout<<"Introduceti intervalul de ani in care se efectueaza cautarea:"<<endl;
    cout<<"De la: ";
    cin>>an_min;
    cout<<"Pana la: ";
    cin>>an_max;
    cout<<"Introduceti intervalul de pret in care se efectueaza cautarea:"<<endl;
    cout<<"De la: ";
    cin>>pret_min;
    cout<<"Pana la: ";
    cin>>pret_max;
    int ok=0;
    system("cls");
    for(auto it:item)
        if(dynamic_cast<Carte*>(it))
        {
            Carte*i = dynamic_cast<Carte*>(it);
            if(i->getAutor()==nume && (i->getAn()>=an_min && i->getAn()<=an_max)&& (i->getPret()>=pret_min && i->getPret()<=pret_max))
            {

                if(ok==0)
                {
                    cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR" << left
                         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
                    ok=1;
                }

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
    if(ok==0)
        cout<<"S-au gasit 0 rezultate !";
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare_multipla(v,u,item);

}
void Filt_mult_gen_pret(vector<Utilizatori*> v, Utilizatori &u, vector<Item*> &item)
{
    system("cls");
    string nume;
    double pret_min,pret_max;
    cout<<"Introduceti genul:";
    cin.ignore();
    getline(cin,nume);
    cout<<"Introduceti intervalul de pret in care se efectueaza cautarea:"<<endl;
    cout<<"De la: ";
    cin>>pret_min;
    cout<<"Pana la: ";
    cin>>pret_max;
    int ok=0;
    system("cls");
    for(auto it:item)
        if(dynamic_cast<Culegere*>(it))
        {
            Culegere*i = dynamic_cast<Culegere*>(it);
            if(i->getGen()==nume && (i->getPret()>=pret_min && i->getPret()<=pret_max))
            {

                if(ok==0)
                {
                    cout << left << setw(40) << "NUME" << left << setw(20) << "GEN" << left
                         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
                    ok=1;
                }

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
    if(ok==0)
        cout<<"S-au gasit 0 rezultate !";
    char ch;
    do
    {
        cin>>ch;

    }
    while(ch==' ');
    Filtrare_multipla(v,u,item);

}

void Filtrare_multipla(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item)
{
    system("cls");

    cout<<"------------------------------------------"<<endl;
    cout<<"||        ~MENIU FILTRARE MULTIPLA~     ||"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Filtreaza dupa:"<<endl<<endl;
    cout<<"1. Numele autorului si interval de ani."<<endl;
    cout<<"2. Numele autorului si interval de pret."<<endl;
    cout<<"3. Numele autorului, intervalul de ani si pret."<<endl;
    cout<<"4. Gen si pret."<<endl;
    cout<<"5. Inapoi."<<endl;
    int n,i;
    cout<<endl;
    cout<<"Introduceti numarul aferent operatiei: ";
    do
    {
        if(i>0)
            cout<<"Numarul trebuie sa fie cuprins intre 1 si 5!"<<endl;
        i++;
        cin>>n;
    }
    while(n<1||n>5);
    switch(n)
    {
    case 1:
        Filt_mult_autor_ani(v,u,item);
        break;

    case 2:
        Filt_mult_autor_pret(v,u,item);
        break;
    case 3:
        Filt_mult_autor_ani_pret(v,u,item);
        break;
    case 4:
        Filt_mult_gen_pret(v,u,item);
        break;

    case 5:
        if(u.getStatus()==1)
            Meniu_Principal_Admin(v,u,item);
        else
            Meniu_Principal(v,u,item);
        break;
    }
}
