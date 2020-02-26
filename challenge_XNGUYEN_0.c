#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "challenge_def.h"
#include "arbre.h"

int evaluate(arbre * r) {
   if(r==NULL)
      return 0;
   int vg,vd;
   if (r->FGauche==NULL) vg = 0; else vg = r->FGauche->cle;
   if (r->FDroit ==NULL) vd = 0; else vd = r->FDroit->cle;
   return (r->cle + vg + vd)/3;
}

#if CHALLENGE == 1
void challenge_1 (){

   arbre * noeud0 = NULL;
   printf("=> Calling accroche\n");
   noeud0 = creerNoeud(111);
   noeud * noeud1 = creerNoeud(152);
   accroche(noeud0, noeud1);
   noeud * noeud2 = creerNoeud(98);
   accroche(noeud0, noeud2);
   noeud * noeud3 = creerNoeud(35);
   accroche(noeud2, noeud3);
   noeud * noeud4 = creerNoeud(160);
   accroche(noeud1, noeud4);
   noeud * noeud5 = creerNoeud(131);
   accroche(noeud1, noeud5);
   noeud * noeud6 = creerNoeud(30);
   accroche(noeud3, noeud6);
   noeud * noeud7 = creerNoeud(78);
   accroche(noeud3, noeud7);
   noeud * noeud8 = creerNoeud(157);
   accroche(noeud4, noeud8);
   noeud * noeud9 = creerNoeud(108);
   accroche(noeud2, noeud9);
   noeud * noeud10 = creerNoeud(50);
   accroche(noeud7, noeud10);
   noeud * noeud11 = creerNoeud(180);
   accroche(noeud4, noeud11);
   noeud * noeud12 = creerNoeud(156);
   accroche(noeud8, noeud12);
   noeud * noeud13 = creerNoeud(60);
   accroche(noeud10, noeud13);
   noeud * noeud14 = creerNoeud(113);
   accroche(noeud5, noeud14);
   noeud * noeud15 = creerNoeud(162);
   accroche(noeud11, noeud15);
   noeud * noeud16 = creerNoeud(118);
   accroche(noeud14, noeud16);
   noeud * noeud17 = creerNoeud(65);
   accroche(noeud13, noeud17);
   noeud * noeud18 = creerNoeud(200);
   accroche(noeud11, noeud18);
   noeud * noeud19 = creerNoeud(181);
   accroche(noeud18, noeud19);
   noeud * noeud20 = creerNoeud(90);
   accroche(noeud7, noeud20);
   noeud * noeud21 = creerNoeud(148);
   accroche(noeud5, noeud21);
}
#endif

#if CHALLENGE == 2
void challenge_2 (){

   arbre * noeud0 = NULL;
   printf("=> Calling insererDansArbre\n");
   noeud0 = creerNoeud(111);
   noeud * noeud1 = creerNoeud(152);
   insererDansArbre(noeud0, noeud1);
   noeud * noeud2 = creerNoeud(98);
   insererDansArbre(noeud0, noeud2);
   noeud * noeud3 = creerNoeud(35);
   insererDansArbre(noeud0, noeud3);
   noeud * noeud4 = creerNoeud(160);
   insererDansArbre(noeud0, noeud4);
   noeud * noeud5 = creerNoeud(131);
   insererDansArbre(noeud0, noeud5);
   noeud * noeud6 = creerNoeud(30);
   insererDansArbre(noeud0, noeud6);
   noeud * noeud7 = creerNoeud(78);
   insererDansArbre(noeud0, noeud7);
   noeud * noeud8 = creerNoeud(157);
   insererDansArbre(noeud0, noeud8);
   noeud * noeud9 = creerNoeud(108);
   insererDansArbre(noeud0, noeud9);
   noeud * noeud10 = creerNoeud(50);
   insererDansArbre(noeud0, noeud10);
   noeud * noeud11 = creerNoeud(180);
   insererDansArbre(noeud0, noeud11);
   noeud * noeud12 = creerNoeud(156);
   insererDansArbre(noeud0, noeud12);
   noeud * noeud13 = creerNoeud(60);
   insererDansArbre(noeud0, noeud13);
   noeud * noeud14 = creerNoeud(113);
   insererDansArbre(noeud0, noeud14);
   noeud * noeud15 = creerNoeud(162);
   insererDansArbre(noeud0, noeud15);
   noeud * noeud16 = creerNoeud(118);
   insererDansArbre(noeud0, noeud16);
   noeud * noeud17 = creerNoeud(65);
   insererDansArbre(noeud0, noeud17);
   noeud * noeud18 = creerNoeud(200);
   insererDansArbre(noeud0, noeud18);
   noeud * noeud19 = creerNoeud(181);
   insererDansArbre(noeud0, noeud19);
   noeud * noeud20 = creerNoeud(90);
   insererDansArbre(noeud0, noeud20);
   noeud * noeud21 = creerNoeud(148);
   insererDansArbre(noeud0, noeud21);
}
#endif
#if CHALLENGE == 3
void challenge_3 (){

   arbre * noeud0 = NULL;
   printf("=> Calling insererTableau\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
}
#endif

#if CHALLENGE == 4
void challenge_4 (){

   arbre * noeud0 = NULL;
   printf("=> Calling afficher\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   afficher(noeud0, 0);
}
#endif

#if CHALLENGE == 5
void challenge_5 (){

   arbre * noeud0 = NULL;
   printf("=> Calling afficherFonction\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   afficherFonction(noeud0, 0, evaluate);
}
#endif

#if CHALLENGE == 6
void challenge_6 (){

   arbre * noeud0 = NULL;
   printf("=> Calling rechercherDerniereLettre and comparing the value\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   noeud * n5 = rechercherDerniereLettre(noeud0);
   printf("Node found for your final letter: %i (%c) =? 78 (N) \n", n5->cle, n5->cle);
}
#endif

#if CHALLENGE == 7
void challenge_7 (){

   arbre * noeud0 = NULL;
   printf("=> Calling afficherFonction and nbVal\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   afficherFonction(noeud0, 0, getValeur);
   int nbv = nbVal(noeud0, 'N');
   printf("\nYour final letter  (78) has been inserted %i times\n", nbv);
 }
#endif

#if CHALLENGE == 8
void challenge_8 (){

   arbre * noeud0 = NULL;
  printf("=> Calling deforestationSauvage for your final letter\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   afficher(noeud0, 0);
   noeud * n5 = rechercherDerniereLettre(noeud0);
   deforestationSauvage(n5);
   printf("\n============ SAVAGE CUT of 78 ============\n");
   afficher(noeud0, 0);
}
#endif

#if CHALLENGE == 9
void challenge_9 (){

   arbre * noeud0 = NULL;
   printf("=> Calling deforestation for your final letter\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   afficher(noeud0, 0);
   noeud * n5 = rechercherDerniereLettre(noeud0);
   printf("\nSearching your final letter: %i\n", n5->cle);
   noeud * n5g = n5->FGauche;
   noeud * n5d = n5->FDroit;
   int hasleft = (n5g!=NULL);
   int oldl;
   if (hasleft){
      oldl = n5g->cle;
     printf("Left child: %i\n", oldl);
   }
   printf("Cutting properly !\n");
   deforestation(n5);
   printf("Resulting tree\n");
   afficher(noeud0,0);
   printf("\n");
   if (hasleft) {
     printf("Left child (should not be %i): %i\n", oldl, n5g->cle);
   }
   else {
      printf("Not lucky, the left child is NULL.\n"); }
}
#endif

#if CHALLENGE == 10
void challenge_10 (){

   arbre * noeud0 = NULL;
   printf("=> Calling parcoursProfondeur\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   afficher(noeud0, 0);
   printf("\nDepth-first traversal: \n");   parcoursProfondeur(noeud0);
   printf("\nSum: %i (should be %i) \n", somme(noeud0), 2583);
}
#endif

#if CHALLENGE == 11
void challenge_11 (){

   arbre * noeud0 = NULL;
   printf("=> Testing  couperPetits\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   afficher(noeud0, 0);
   printf("\nChoosen value for LittleCut: %i\n", 68 );
   couperPetits(noeud0, 68);
   afficher(noeud0, 0);
}
#endif

#if CHALLENGE == 12
void challenge_12 (){

   arbre * noeud0 = NULL;
   printf("=> Computing the height and the initial balance of trees\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   afficher(noeud0, 0);
   printf("\n");
   initHauteur(noeud0);
   printf("height\n");
   afficherFonction(noeud0, 0,getValeur);
   printf("\n");
   printf("balance\n");
   afficherFonction(noeud0, 0, difference);
   printf("\n");
   if (estAVL(noeud0)){
      printf("Chanceux, c'est un AVL\n");
   }
   else {
      printf("Ce n'est pas un AVL\n");
   }
}
#endif

#if CHALLENGE == 13
void challenge_13 (){

   arbre * noeud0 = NULL;
   printf("=> Rotation from the node of your initial letter\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   afficher(noeud0, 0);
   printf("\n");
   initHauteur(noeud0);
   afficherFonction(noeud0, 0, difference);
   printf("\n");
   arbre ** pn = &(noeud0->FDroit);
   int d = difference(*pn);
   if ( abs(d) <2){
      printf("Sommet %i equilibre, on le desequilibre\n", (*pn)->cle);
      if ( (*pn)->FGauche != NULL){
         printf("Rotation Droite de %i\n", (*pn)->cle);
         rotationDroite(pn);
      } else if ( (*pn)->FDroit != NULL){
         printf("Rotation Gauche de %i\n", (*pn)->cle);
         rotationGauche(pn);
      } else {
         printf("Pas de chance, le fils droit de l'arbre initial est une feuille!\n");
      }
    }
    else{
      printf("On essaie de le reequilibrer\n");
      if(d>0){
        printf("Rotation Droite de %i\n", (*pn)->cle);
        rotationDroite(pn);
      }
      else {
        printf("Rotation Gauche de %i\n", (*pn)->cle);
        rotationGauche(pn);
      }
    }
   printf("Resultat\n");
   afficher(noeud0, 0);
   printf("\n");
   initHauteur(noeud0);
   printf("Desequilibre\n");
   afficherFonction(noeud0, 0, difference);
   printf("\n");
}
#endif

#if CHALLENGE == 14
void challenge_14 (){

   arbre * noeud0 = NULL;
   printf("=> Balance ABR into AVL\n");
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableau(noeud0, tableau, 21);
   afficher(noeud0, 0);
   printf("\n");
   initHauteur(noeud0);
   afficherFonction(noeud0, 0, difference);
   printf("\n");
   tranformerVersAVL(&noeud0);
   printf("After Balancing\n");
   afficher(noeud0, 0);
   printf("\n");
   afficherFonction(noeud0, 0, difference);
   printf("\n");
}
#endif

#if CHALLENGE == 15
void challenge_15 (){

   arbre * noeud0 = NULL;
   noeud0 = creerNoeud(111);
   int * tableau = calloc( 21, sizeof(int));
   tableau[0] = 152;
   tableau[1] = 98;
   tableau[2] = 35;
   tableau[3] = 160;
   tableau[4] = 131;
   tableau[5] = 30;
   tableau[6] = 78;
   tableau[7] = 157;
   tableau[8] = 108;
   tableau[9] = 50;
   tableau[10] = 180;
   tableau[11] = 156;
   tableau[12] = 60;
   tableau[13] = 113;
   tableau[14] = 162;
   tableau[15] = 118;
   tableau[16] = 65;
   tableau[17] = 200;
   tableau[18] = 181;
   tableau[19] = 90;
   tableau[20] = 148;
   insererTableauAVL(&noeud0, tableau, 21);
   printf("After Inserting\n");
   afficher(noeud0, 0);
   printf("\n");
   afficherFonction(noeud0, 0, difference);
   printf("\n");
   printf("CONGRATULATIONS! YOU HAVE REACHED THE END!!\n");
}
#endif

