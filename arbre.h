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

/** \brief Allouer un noeud
 *
 * \param cle int
 * \return noeud*
 *
 */
noeud* creerNoeud(int cle);

/** \brief Accrocher le noeud fils comme sous noeud fils de pere
 *
 * \param pere noeud*
 * \param fils noeud*
 * \return void
 *
 */
void accroche(noeud* pere, noeud* fils);

/** \brief Inserer dans l'arbre binaire de recherche
 *
 * \param r arbre*
 * \param n noeud*
 * \return void
 *
 */
void insererDansArbre(arbre* r, noeud* n);

/** \brief creer et inserer tous les noeuds du tableau dans l'arbre
 *
 * \param r arbre*
 * \param tableau int*
 * \param taille int
 * \return void
 *
 */
void insererTableau(arbre* r, int* tableau, int taille);

/** \brief Affichage d'un arbre
 *
 * \param r arbre*
 * \param decalage int
 * \return void
 *
 */
void afficher(arbre * r, int decalage);

int getCle(arbre* r);
int getValeur(arbre* r);

/** \brief Affiche l'arbre r avec en chaque sommet le resultat de la fonction mafct
 *
 * \param r arbre*
 * \param decalage int
 * \param mafct int (*mafct)(arbre* r) la fonction a imprimer. Celle'ci prend un arbre en parametre et retourne un entier
 * \return void
 *
 */
void afficherFonction(arbre* r, int decalage, int(*mafct)(arbre* r));

/** \brief Retrouver un noeud dans l'arbre, a partir d'un entier v,
 *
 * \param r arbre*
 * \param v int
 * \return noeud*
 *
 */
noeud* rechercher(arbre* r, int v);

/** \brief Rechercher le noeud correspondant a la derniere lettre de votre login
 *
 * \param r arbre*
 * \return noeud*
 *
 */
noeud* rechercherDerniereLettre(arbre *r);

int nbVal(arbre* unArbre, int uneCle);

/** \brief Supprimer les deux fils de ce noeud
 *
 * \param n noeud*
 * \return void
 *
 */
void deforestationSauvage(noeud* n);

/** \brief Deforestation plus "ecolo"
 *
 * \param n noeud*
 * \return void
 *
 */
void deforestationSauvage(noeud* n);

/** \brief Calculer la somme de l'arbre
 *
 * \param r arbre*
 * \return int
 *
 */
int somme(arbre* r);

/** \brief Parcours Profondeur
 *
 * \param r arbre*
 * \return void
 *
 */
void parcoursProfondeur(arbre* r);

#endif // ARBRE_H_INCLUDED
