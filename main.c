#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"
#include "challenge_XNGUYEN_0.h"
#define CHALLENGE 9

int main()
{
    #if CHALLENGE != 0
    int chal = CHALLENGE;
    printf("=====\nBEGIN [XNGUYEN] C#=%i\n", chal);
    challenge_9();
    printf("\nEND [XNGUYEN]\n===\n");
    return 0;
    #endif // CHALLENGE
    #if CHALLENGE == 0
    arbre* unArbre = creerNoeud(666);
    /*noeud* noeud1 = creerNoeud(5);
    noeud* noeud2 = creerNoeud(1000);
    noeud* noeud3 = creerNoeud(100);
    accroche(unArbre, noeud1);
    accroche(unArbre, noeud1);
    accroche(unArbre, noeud2);
    accroche(noeud1, noeud3);*/
    insererDansArbre(unArbre, creerNoeud(5));
    insererDansArbre(unArbre, creerNoeud(666));
    insererDansArbre(unArbre, creerNoeud(1000));
    insererDansArbre(unArbre, creerNoeud(100));
    insererDansArbre(unArbre, creerNoeud(5));
    insererDansArbre(unArbre, creerNoeud(100));
    int tab[10] = {1, 45, 800, -40, 300, 4, 5, 333, 1001, 700};
    insererTableau(unArbre, tab, 10);
    //deforestationSauvage(rechercher(unArbre, 100));
    deforestation(rechercher(unArbre, 100));
    //afficherFonction(unArbre, 0, getCle);
    /*noeud* cherche100 = rechercher(unArbre, 100);
    if (cherche100 != NULL) printf("J'ai trouve le noeud 100.\n");
    noeud* cherche101 = rechercher(unArbre, 101);
    if (cherche101 != NULL) printf("J'ai trouve le noeud 101.\n");*/

    /*int tab[6] = {1000,5,100,1,6,200};
    insererTableau(unArbre, tab, 6);
    afficherFonction(unArbre, 0, getCle);
    printf("\nsomme: %i\n", somme(unArbre));
    parcoursProfondeur(unArbre);*/

    return 0;
    #endif // CHALLENGE
}
