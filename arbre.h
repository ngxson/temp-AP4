#ifndef ARBRE_H_INCLUDED
#define ARBRE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
typedef int TValue;

struct noeud {
    int cle;
    TValue valeur;
    struct noeud* FGauche;
    struct noeud* FDroit;
};

typedef struct noeud arbre;
typedef struct noeud noeud;

noeud* creerNoeud(int cle);
void accroche(noeud* pere, noeud* fils);
void insererDansArbre(arbre* r, noeud* n);
void insererTableau(arbre* r, int* tableau, int taille);
void afficher(arbre * r, int decalage);
int getCle(arbre* r);
int getValeur(arbre* r);
noeud* rechercher(arbre* r, int v);
noeud* rechercherDerniereLettre(arbre *r);
int nbVal(arbre* unArbre, int uneCle);
void deforestationSauvage(noeud* n);
int somme(arbre* r);
void parcoursProfondeur(arbre* r);

#endif // ARBRE_H_INCLUDED
