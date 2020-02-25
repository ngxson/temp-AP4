#include "arbre.h"

noeud* creerNoeud(int cle) {
    noeud* n;
    n = (noeud*) malloc(sizeof(noeud));
    n->cle = cle;
    n->valeur = 1;
    n->FGauche = NULL;
    n->FDroit = NULL;
    return n;
}

void accroche(noeud* pere, noeud* fils) {
    if (pere->cle > fils->cle) {
        pere->FGauche = fils;
        //printf("J'accroche a gauche de %i, le noeud %i\n", pere->cle, fils->cle);
    } else if (pere->cle < fils->cle) {
        pere->FDroit = fils;
        //printf("J'accroche a droite de %i, le noeud %i\n", pere->cle, fils->cle);
    } else {
        pere->valeur++;
        free(fils);
        //printf("Le noeud %i est deja present\n", pere->cle);
    }
}

void insererDansArbre(arbre* r, noeud* n) {
    noeud* fils;
    if (r->cle > n->cle) {
        fils = r->FGauche;
    } else if (r->cle < n->cle) {
        fils = r->FDroit;
    } else {
        //printf("Le noeud %i est deja present\n", n->cle);
        accroche(r, n);
        return;
    }
    if (fils == NULL) accroche(r, n);
    else insererDansArbre(fils, n);
}

void insererTableau(arbre* r, int* tableau, int taille) {
    for (int i = 0 ; i < taille ; i++) {
        insererDansArbre(r, creerNoeud(tableau[i]));
    }
}

int count_numbers(int num) {
   int count = 0;
   while (num != 0) {
      count++;
      num /= 10;
   }
   return count;
}

void afficher(arbre * r, int decalage) {
    if (r == NULL) return;

    printf("%i", r->cle);

    if (r->FDroit != NULL) {
        for (int i = 0 ; i < 6 - count_numbers(r->cle) ; i++) {
            printf("-");
        }
        afficher(r->FDroit, decalage + 6);
    }

    if (r->FGauche != NULL) {
        printf("\n");
        for (int i = 0 ; i < decalage ; i++) {
            printf(" ");
        }
        printf("|\n");
        for (int i = 0 ; i < decalage ; i++) {
            printf(" ");
        }
        afficher(r->FGauche, decalage);
    }
}

int getCle(arbre* r) {
    return r != NULL ? r->cle : 0;
}

int getValeur(arbre* r) {
    return r != NULL ? r->valeur : 0;
}

void afficherFonction(arbre* r, int decalage, int(*mafct)(arbre* r)) {
    if (r == NULL) return;

    int val = mafct(r);
    printf("%i", val);

    if (r->FDroit != NULL) {
        for (int i = 0 ; i < 6 - count_numbers(val) ; i++) {
            printf("-");
        }
        afficherFonction(r->FDroit, decalage + 6, mafct);
    }

    if (r->FGauche != NULL) {
        printf("\n");
        for (int i = 0 ; i < decalage ; i++) {
            printf(" ");
        }
        printf("|\n");
        for (int i = 0 ; i < decalage ; i++) {
            printf(" ");
        }
        afficherFonction(r->FGauche, decalage, mafct);
    }
}

noeud* rechercher(arbre* r, int v) {
    if (r == NULL || r->cle == v) {
        return r;
    } else if (v > r->cle) {
        return rechercher(r->FDroit, v);
    } else {
        return rechercher(r->FGauche, v);
    }
}

noeud* rechercherDerniereLettre(arbre *r) {
    int var = 'N';
    return rechercher(r, var);
}


int nbVal(arbre* unArbre, int uneCle) {
    noeud* n = rechercher(unArbre, uneCle);
    return n == NULL ? 0 : n->valeur;
}

void deforestationSauvage(noeud* n) {
    n->FDroit = NULL;
    n->FGauche = NULL;
}

void deforestation(noeud* n) {
    if (n == NULL) return;
    deforestation(n->FGauche);
    if (n->FGauche != NULL)
        printf("Deforestation : elimination du noeud %i fils gauche de %i\n", n->FGauche->cle, n->cle);
    free(n->FGauche);
    deforestation(n->FDroit);
    if (n->FDroit != NULL)
        printf("Deforestation : elimination du noeud %i fils droit de %i\n", n->FDroit->cle, n->cle);
    free(n->FDroit);
    n->FDroit = NULL;
    n->FGauche = NULL;
}

int somme(arbre* r) {
    if (r == NULL) return 0;
    int s = r->cle;
    s += somme(r->FGauche);
    s += somme(r->FDroit);
    return s;
}

void parcoursProfondeur(arbre* r) {
    if (r == NULL) return;
    printf("%i ", r->cle);
    parcoursProfondeur(r->FGauche);
    parcoursProfondeur(r->FDroit);
}








