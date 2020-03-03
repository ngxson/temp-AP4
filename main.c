#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"
#include "challenge_def.h"
#include "challenge_XNGUYEN_0.h"

int main()
{
    #if CHALLENGE != 0
        int chal = CHALLENGE;
        printf("=====\nBEGIN [XNGUYEN] C#=%i\n", chal);
        run_challenge();
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
        /*insererDansArbre(unArbre, creerNoeud(5));
        insererDansArbre(unArbre, creerNoeud(666));
        insererDansArbre(unArbre, creerNoeud(1000));
        insererDansArbre(unArbre, creerNoeud(100));
        insererDansArbre(unArbre, creerNoeud(5));
        insererDansArbre(unArbre, creerNoeud(100));
        int tab[10] = {1, 45, 800, -40, 300, 4, 5, 333, 1001, 700};
        insererTableau(unArbre, tab, 10);
        //deforestationSauvage(rechercher(unArbre, 100));
        noeud* ch100 = rechercher(unArbre, 100);
        deforestation(ch100);
        deforestation(ch100);
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


        // from Exercise 35
        //int tab[6] = {1000,5,100,1,6,200};
        int tab[14] = {666, 5, 1000, 100, 1, 45, 800, -40, 300, 4, 5, 333, 1001, 700};
        arbre* r2 = creerNoeud(100);
        int tab2[17] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 110, 120, 130, 140, 150, 160};
        insererTableau(unArbre, tab, 14);
        insererTableau(r2, tab2, 17);
        //afficherFonction(unArbre, 0, getCle);
        //printf("\n\n\n----------\n\n");
        //rotationDroite(&unArbre);
        initHauteur(unArbre);
        //difference(unArbre);
        initHauteur(r2);
        afficherFonction(r2, 0, getCle);
        printf("\n\n\n----------\n\n");
        afficherFonction(r2, 0, getValeur);
        printf("\n\n\n----------\n\n");
        afficherFonction(r2, 0, difference);
        //couperPetits(unArbre, 7);

        // Ex 46
        printf("\n\n\n----------\n\n");
        arbre * r3 = getSousArbreDesequilibre(r2);
        printf("Apres recherche du desequilibre\n");
        afficher(r3, 0);
        printf("\n");
        afficherFonction(r3, 0, difference);
        printf("\n");
        if(estAVL(r3))
            printf("Cet arbre est un AVL\n");
        else
            printf("Cet arbre n\'est pas un AVL\n");
        int* aDroite;
        arbre* r4 = aUnFilsDesequilibre(r2, aDroite);
        //printf("aUnFilsDesequilibre %d %d", r4->cle, aDroite);
        printf("\n\n\n----------\n\n");
        tranformerVersAVL(&r2);
        afficherFonction(r2, 0, getCle);


        return 0;
    #endif // CHALLENGE
}

void run_challenge() {
    #if CHALLENGE == 1
    challenge_1();
    #endif
    #if CHALLENGE == 2
    challenge_2();
    #endif
    #if CHALLENGE == 3
    challenge_3();
    #endif
    #if CHALLENGE == 4
    challenge_4();
    #endif
    #if CHALLENGE == 5
    challenge_5();
    #endif
    #if CHALLENGE == 6
    challenge_6();
    #endif
    #if CHALLENGE == 7
    challenge_7();
    #endif
    #if CHALLENGE == 8
    challenge_8();
    #endif
    #if CHALLENGE == 9
    challenge_9();
    #endif
    #if CHALLENGE == 10
    challenge_10();
    #endif
    #if CHALLENGE == 11
    challenge_11();
    #endif
    #if CHALLENGE == 12
    challenge_12();
    #endif
    #if CHALLENGE == 13
    challenge_13();
    #endif
    #if CHALLENGE == 14
    challenge_14();
    #endif
    #if CHALLENGE == 15
    challenge_15();
    #endif
}
