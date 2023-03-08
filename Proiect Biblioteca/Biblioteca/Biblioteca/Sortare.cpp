#include <iostream>
#include <string>
#include "header.h"
#include <algorithm>
#include <typeinfo>
#include "Carte.h"
#include "Culegere.h"
#include <Windows.h>
#include <iomanip>
using namespace std;

void Sort_NumeC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getNume() < b->getNume();
    });
    cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
Sortare(v,u,item);
}

void Sort_NumeD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getNume() > b->getNume();
    });
        cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}

void Sort_Nume(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"1. Crescator"<<endl;
    cout<<"2. Descrescator"<<endl;
    cout<<"3. Inapoi"<<endl;
    string i;
    int n;
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
        Sort_NumeC(v,u,item);
    }
    else if(i=="2")
    {
        Sort_NumeD(v,u,item);
    }
    else if(i=="3")
    {
        Sortare(v,u,item);
    }
}


void Sort_PretC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getPret() == b->getPret() ? a->getNume()< b->getNume() : a->getPret() < b->getPret();
    });
       cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}

void Sort_PretD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getPret() == b->getPret() ? a->getNume() > b->getNume() : a->getPret() > b->getPret();
    });
        cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}

void Sort_Pret(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"1. Crescator"<<endl;
    cout<<"2. Descrescator"<<endl;
    cout<<"3. Inapoi"<<endl;
    string i;
    int n;
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
        Sort_PretC(v,u,item);
    }
    else if(i=="2")
    {
        Sort_PretD(v,u,item);
    }
    else if(i=="3")
    {
        Sortare(v,u,item);
    }
}
void Sort_AnC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getAn() == b->getAn()? a->getNume() < b->getNume() : a->getAn() < b->getAn();
    });
       cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');;
    Sortare(v,u,item);
}


void Sort_AnD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getAn() == b->getAn()? a->getNume() > b->getNume() : a->getAn() > b->getAn();
    });
        cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}

void Sort_An(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"1. Crescator"<<endl;
    cout<<"2. Descrescator"<<endl;
    cout<<"3. Inapoi"<<endl;
    string i;
    int n;
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
        Sort_AnC(v,u,item);
    }
    else if(i=="2")
    {
        Sort_AnD(v,u,item);
    }
    else if(i=="3")
    {
        Sortare(v,u,item);
    }

}




void Sort_NrC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getNr_pagini() == b->getNr_pagini()? a->getNume() < b->getNume() : a->getNr_pagini() < b->getNr_pagini();
    });
        cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}
void Sort_NrD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getNr_pagini() == b->getNr_pagini() ? a->getNume() > b->getNume() : a->getNr_pagini() > b->getNr_pagini();
    });
        cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}

void Sort_Nr(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"1. Crescator"<<endl;
    cout<<"2. Descrescator"<<endl;
    cout<<"3. Inapoi"<<endl;
    string i;
    int n;
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
        Sort_NrC(v,u,item);
    }
    else if(i=="2")
    {
        Sort_NrD(v,u,item);
    }
    else if(i=="3")
    {
        Sortare(v,u,item);
    }
}


void Sort_ExempC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getNr_exemplare() == b->getNr_exemplare()? a->getNume() < b->getNume() : a->getNr_exemplare() < b->getNr_exemplare();
    });
        cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}

void Sort_ExempD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> i = item;
    sort(i.begin(),i.end(),[](auto a, auto b)
    {
        return a->getNr_exemplare() == b->getNr_exemplare()? a->getNume() > b->getNume() : a->getNr_exemplare() > b->getNr_exemplare();
    });
    for(auto it: i)
        cout<<*it<<endl;
      char ch;
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}

void Sort_Exemp(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"1. Crescator"<<endl;
    cout<<"2. Descrescator"<<endl;
    cout<<"3. Inapoi"<<endl;
    string i;
    int n;
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
        Sort_ExempC(v,u,item);
    }
    else if(i=="2")
    {
        Sort_ExempD(v,u,item);
    }
    else if(i=="3")
    {
        Sortare(v,u,item);
    }
}


void Sort_EditC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getEditura() == b->getEditura() ? a->getNume() < b->getNume() : a->getEditura() < b->getEditura();
    });
        cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}
void Sort_EditD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Item*> itm = item;
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getEditura() == b->getEditura() ? a->getNume() > b->getNume() : a->getEditura() >b->getEditura();
    });
        cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}
void Sort_Edit(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"1. Crescator"<<endl;
    cout<<"2. Descrescator"<<endl;
    cout<<"3. Inapoi"<<endl;
    string i;
    int n;
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
        Sort_EditC(v,u,item);
    }
    else if(i=="2")
    {
        Sort_EditD(v,u,item);
    }
    else if(i=="3")
    {
        Sortare(v,u,item);
    }
}


void Sort_AutorC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Carte*> itm;
    for(auto it: item)
    {
        if(dynamic_cast<Carte*>(it))
        {
            Carte *c = dynamic_cast<Carte*>(it);
            itm.push_back(c);
        }
    }
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return a->getAutor() == b->getAutor()?  a->getNume() < b->getNume() : a->getAutor() < b->getAutor();
    });
       cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}

void Sort_AutorD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    vector<Carte*> itm;
    for(auto it: item)
    {
        if(dynamic_cast<Carte*>(it))
        {
            Carte *c = dynamic_cast<Carte*>(it);
            itm.push_back(c);
        }
    }
    sort(itm.begin(),itm.end(),[](auto a, auto b)
    {
        return  a->getAutor() == b->getAutor()?  a->getNume() > b->getNume() : a->getAutor() > b->getAutor();
    });
        cout << left << setw(40) << "NUME" << left << setw(20) << "AUTOR/GEN" << left
         << setw(8)<< "PRET" << left << setw(11) << "NR_PAGINI"  << left << setw(12) << "EXEMPLARE" << left << setw(16) <<"EDITURA" << left << setw(4) << "ANUL"<<endl;
    for(auto it: itm)
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
    do{
        cin>>ch;

    }while(ch==' ');
    Sortare(v,u,item);
}

void Sort_Autor(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    cout<<"1. Crescator"<<endl;
    cout<<"2. Descrescator"<<endl;
    cout<<"3. Inapoi"<<endl;
    string i;
    int n;
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
        Sort_AutorC(v,u,item);
    }
    else if(i=="2")
    {
        Sort_AutorD(v,u,item);
    }
    else if(i=="3")
    {
        Sortare(v,u,item);
    }
}


void Sortare(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item)
{
    system("cls");
    cout<<"---------------------------------"<<endl;
    cout<<"||       ~MENIU SORTARE~       ||"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1. Dupa nume"<<endl;
    cout<<"2. Dupa pret"<<endl;
    cout<<"3. Dupa an"<<endl;
    cout<<"4. Dupa numarul de pagini"<<endl;
    cout<<"5. Dupa numarul de exemplare"<<endl;
    cout<<"6. Dupa editura"<<endl;
    cout<<"7. Dupa autor"<<endl;
    cout<<"8. Inapoi"<<endl;
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
        Sort_Nume(v,u,item);
        break;
    case 2:
        Sort_Pret(v,u,item);
        break;
    case 3:
        Sort_An(v,u,item);
        break;
    case 4:
        Sort_Nr(v,u,item);
        break;
    case 5:
        Sort_Exemp(v,u,item);
        break;
    case 6:
        Sort_Edit(v,u,item);
        break;
    case 7:
        Sort_Autor(v,u,item);
        break;
    case 8:
        if(u.getStatus()==1)
        Meniu_Principal_Admin(v,u,item);
            else
        Meniu_Principal(v,u,item);
        break;
    }

}
