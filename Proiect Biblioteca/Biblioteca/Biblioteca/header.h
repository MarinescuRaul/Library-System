#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include "Utilizatori.h"
#include "Item.h"



void MeniuLogare(vector<Utilizatori*> v, vector<Item*> item);
void  creaza_cont(vector<Utilizatori*> v, vector<Item*> item);
void login(vector<Utilizatori*> v, vector<Item*> item);

void backup( vector<Item*> item);


bool verif_nr(string nr);
bool valid_nume(string nume);

void Meniu_Principal(vector<Utilizatori*> &v, Utilizatori &u, vector<Item*> &item);
void Meniu_Principal_Admin(vector<Utilizatori*> &v, Utilizatori &u, vector<Item*> &item);


void  Afisare(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Afis_Toate(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Afis_Carte(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void  Afis_Culegere(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void  Afis_Autor(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Afis_Editurile(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void  Afis_Date(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Afis_Utiliz(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);


void Editare(vector<Utilizatori*> &v,Utilizatori &u, vector<Item*> &item);
void Edit_carte(vector<Utilizatori*> &v,Utilizatori &u, vector<Item*> &item);
void Edit_culegere(vector<Utilizatori*> &v,Utilizatori &u, vector<Item*> &item);
void Edit_nume(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Edit_pret(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Edit_an(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Edit_nr(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Edit_exemp(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Edit_autor(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Edit_gen(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);
void Edit_edit(vector<Utilizatori*> &v,Utilizatori &u,vector<Item*> &item);


void Sortare(vector<Utilizatori*> v, Utilizatori &u, vector<Item*> item);
void Sort_NumeC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_NumeD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_Nume(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_PretC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_PretD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_Pret(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_AnC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_AnD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_An(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_NrC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_NrD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_Nr(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_ExempC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_ExempD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_Exemp(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_AutorC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_AutorD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_Autor(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_EditC(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_EditD(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sort_Edit(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);


void Filtrare(vector<Utilizatori*> v, Utilizatori &u, vector<Item*> &item);
void Filt_nume(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item);
void Filt_pret(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item);
void Filt_autor(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item);
void Filt_gen(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item);
void Filt_nr_pag(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item);
void Filt_edit(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item);
void Filt_an(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> &item);

void Filtrare_multipla(vector<Utilizatori*> v, Utilizatori &u, vector<Item*> &item);
void Filt_mult_autor_ani(vector<Utilizatori*> v, Utilizatori &u, vector<Item*> &item);
void Filt_mult_autor_ani_pret(vector<Utilizatori*> v, Utilizatori &u, vector<Item*> &item);
void Filt_mult_gen_pret(vector<Utilizatori*> v, Utilizatori &u, vector<Item*> &item);


void Adaugare(vector<Utilizatori*> &v, Utilizatori &u,vector<Item*> &item);
void Adaug_carte(vector<Utilizatori*>& v, Utilizatori &u,vector<Item*> &item);
void Adaug_culegere(vector<Utilizatori*>& v, Utilizatori &u,vector<Item*>& item);


void Stergere(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sterge_nume(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sterge_autor(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sterge_editura(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sterge_an(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sterge_exemp(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sterge_nr(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sterge_gen(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);
void Sterge_pret(vector<Utilizatori*> v, Utilizatori &u,vector<Item*> item);



void Deconectare(vector<Utilizatori*> v,vector<Item*> item);


void  Iesire(vector<Utilizatori*> &v, vector<Item*> &item);


void IncarcareDate(vector<Utilizatori*> v, vector<Item*> item);


void ScriereFisier(vector<Utilizatori*> &v, vector<Item*> &item);




#endif // HEADER_H_INCLUDED
