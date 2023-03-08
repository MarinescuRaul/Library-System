#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Utilizatori.h"
#include <vector>
#include <algorithm>
#include <sstream>
#include "header.h"
#include "Item.h"
#include "Carte.h"
#include "Culegere.h"
#include <typeinfo>
#include <ctime>
#include <cstring>


using namespace std;


vector<Item*> item;



void backup( vector<Item*> item)
{



    time_t   now = time(0);
    struct tm  tstruct;
    char     buf[80];
    tstruct = *localtime(&now);

    strftime(buf, sizeof(buf), "%Y-%m-%d-%X", &tstruct);
    string filename = buf;
    for(int i=0; i<filename.size(); i++)
        if(filename[i]==':')
            filename[i]='-';
    //cout<<filename;
    filename+=".txt";
    string path = "D:/Facultate/PP/Biblioteca/Biblioteca/Backup/";
    path+=filename;
    ofstream myfile (path);
    ifstream f("item.txt");
    string line;
    //copy_file(f,myfile);
    if (myfile.is_open())
    {
        if(f.is_open())
        {
            while(getline(f,line))
            {
                myfile<<line<<endl;
            }
            f.close();
            myfile.close();

        }

    }



}


void IncarcareDate(vector<Utilizatori*> v, vector<Item*> item)
{
    backup(item);
    string line,nume,prenume,user,parola,nr;
    int status;
    ifstream myfile ("Utilizatori.txt");
    if (myfile.is_open())
    {
        while (getline(myfile,line))
        {
            istringstream f(line);
            string s1;
            getline(f, s1, ',');
            nume=s1;
            getline(f, s1, ',');
            prenume = s1;
            getline(f, s1, ',');
            user = s1;
            getline(f, s1, ',');
            nr = s1;
            getline(f, s1, ',');
            parola = s1;
            getline(f, s1, ',');
            status = stoi(s1);
            Utilizatori *u = new Utilizatori(nume,prenume,user,nr,parola,status);
            v.push_back(u);

        }
        myfile.close();
    }

    else cout << "Unable to open file";


    string tip,autor,editura,gen;
    double pret;
    int nr_pag,nr_ex,an;
    ifstream myfile1 ("Item.txt");
    if (myfile1.is_open())
    {
        while (getline(myfile1,line))
        {
            istringstream f(line);
            string s1;
            getline(f, s1, ',');
            tip=s1;
            if(tip == "Carte")
            {
                getline(f, s1, ',');
                nume=s1;
                getline(f, s1, ',');
                autor=s1;
                getline(f, s1, ',');
                pret=stod(s1);
                getline(f, s1, ',');
                nr_pag=stoi(s1);
                getline(f, s1, ',');
                nr_ex=stoi(s1);
                getline(f, s1, ',');
                editura = s1;
                getline(f, s1, ',');
                an=stoi(s1);
                Carte* c = new Carte(nume,autor,pret,nr_pag,nr_ex,editura,an);
                item.push_back(c);

            }
            else if(tip=="Culegere")
            {
                getline(f, s1, ',');
                nume=s1;
                getline(f, s1, ',');
                gen=s1;
                getline(f, s1, ',');
                pret=stod(s1);
                getline(f, s1, ',');
                nr_pag=stoi(s1);
                getline(f, s1, ',');
                nr_ex=stoi(s1);
                getline(f, s1, ',');
                editura = s1;
                getline(f, s1, ',');
                an=stoi(s1);
                Culegere* c = new Culegere(nume,gen,pret,nr_pag,nr_ex,editura,an);
                item.push_back(c);
            }


        }
        myfile1.close();


    }

    else cout << "Unable to open file";



    MeniuLogare(v,item);


}

void ScriereFisier(vector<Utilizatori*> &v, vector<Item*> &item)
{
    ofstream myfile;
    myfile.open("Utilizatori.txt");
    for(auto it : v)
    {
        string s = it->getNume();
        s = s.append(",");
        s = s.append(it->getPrenume());
        s = s.append(",");
        s = s.append(it->getUser());
        s = s.append(",");
        s = s.append(it->getNrTlf());
        s = s.append(",");
        s = s.append(it->getParola());
        s = s.append(",");
        s = s.append(to_string(it->getStatus()));
        myfile<<s<<endl;
    }
    myfile.close();

    ofstream myfile1;
    string s;
    myfile1.open("Item.txt");
    for(auto it : item)
    {

        if(dynamic_cast<Carte*>(it))
        {
            Carte * c = dynamic_cast<Carte*>(it);
            s = "Carte";
            s = s.append(",");
            s =  s.append(c->getNume());
            s = s.append(",");
            s = s.append(c->getAutor());
            s = s.append(",");
            s = s.append(to_string(c->getPret()));
            s = s.append(",");
            s = s.append(to_string(c->getNr_pagini()));
            s = s.append(",");
            s = s.append(to_string(c->getNr_exemplare()));
            s = s.append(",");
            s = s.append(c->getEditura());
            s = s.append(",");
            s = s.append(to_string(c->getAn()));

        }
        else if(dynamic_cast<Culegere*>(it))
        {
            s = "Culegere";
            Culegere *c = dynamic_cast<Culegere*>(it);
            s = s.append(",");
            s =  s.append(c->getNume());
            s = s.append(",");
            s = s.append(c->getGen());
            s = s.append(",");
            s = s.append(to_string(c->getPret()));
            s = s.append(",");
            s = s.append(to_string(c->getNr_pagini()));
            s = s.append(",");
            s = s.append(to_string(c->getNr_exemplare()));
            s = s.append(",");
            s = s.append(c->getEditura());
            s = s.append(",");
            s = s.append(to_string(c->getAn()));
        }
        myfile1<<s<<endl;
    }
    myfile1.close();

}


void Iesire(vector<Utilizatori*>& v, vector<Item*> &item)
{
    ScriereFisier(v,item);
    cout<<"La revedere!";
    return ;
}





int main()
{
    vector<Utilizatori*> v;
    vector<Item*> item;

    cout<<"                 ------------------- Bine ati venit! -------------------"<<endl<<endl;

    IncarcareDate(v,item);
    return 0;
}
