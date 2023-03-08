#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Utilizatori.h"
#include <vector>
#include <algorithm>
#include "header.h"
#include "Utilizatori.h"
using namespace std;




void Meniu_Principal(vector<Utilizatori*> &v, Utilizatori &u,vector<Item*> &item)
{
    system("cls");
    cout<<"---------------------------------"<<endl;
    cout<<"||      ~MENIU PRINCIPAL~      ||"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<" 1. Afisare"<<endl;
    cout<<" 2. Sortare"<<endl;
    cout<<" 3. Filtrare"<<endl;
    cout<<" 4. Deconectare"<<endl;
    cout<<" 5. Iesire"<<endl;
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
        Afisare(v,u,item);
        break;
    case 2:
        Sortare(v,u,item);
        break;
    case 3:
        Filtrare(v,u,item);
        break;
    case 4:
        Deconectare(v,item);
        break;
    case 5:
        Iesire(v,item);
        break;
    }


}

void Meniu_Principal_Admin(vector<Utilizatori*> &v, Utilizatori &u,vector<Item*> &item)
{
    system("cls");
    cout<<"---------------------------------"<<endl;
    cout<<"||      ~MENIU PRINCIPAL~      ||"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<" 1. Afisare"<<endl;
    cout<<" 2. Sortare"<<endl;
    cout<<" 3. Filtrare"<<endl;
    cout<<" 4. Adaugare"<<endl;
    cout<<" 5. Editare"<<endl;
    cout<<" 6. Stergere"<<endl;
    cout<<" 7. Deconectare"<<endl;
    cout<<" 8. Iesire"<<endl;

    int i;
    string n;
    cout<<endl;
    cout<<"Introduceti numarul aferent operatiei: ";
    do
    {
        if(i>0)
            cout<<"Numarul trebuie sa fie cuprins intre 1 si 8!"<<endl;
        i++;
        cin>>n;
    }
    while(n<"1"||n>"8");
    int m = stoi(n);
    switch(m)
    {
    case 1:
        Afisare(v,u,item);
        break;
    case 2:
        Sortare(v,u,item);
        break;
    case 3:
        Filtrare(v,u,item);
        break;
    case 4:
        Adaugare(v,u,item);
        break;
    case 5:
        Editare(v,u,item);
        break;
    case 6:
        Stergere(v,u,item);
        break;
    case 7:
        Deconectare(v,item);
        break;

    case 8:
        Iesire(v,item);
        break;
    }
}
