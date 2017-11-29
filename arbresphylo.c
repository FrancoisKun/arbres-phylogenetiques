#include <stdio.h>
#include "arbres.h"

#define N 100

int hauteur (noeud *racine) {
  /* à compléter */
  return 0;
}

void recherche (noeud *racine, char *espece) {
  if (racine.valeur == espece) {
    printf("_");
    return 0;
  }
  if (racine.valeur == NULL) {
    printf("_");
    return 1;
  }
  else {
    printf("%s", racine.gauche.valeur); // TODO
    if (recherche(racine.gauche, espece))
      return 0; // TODO
    printf("%s", racine.droit.valeur); // TODO
    if (recherche(racine.droit, espece))
      return 0; // TODO
  }
  return 1;
}

// Classifie ...
void classifie (noeud *racine, int niveaux_class[N][N], int i) {
  if (racine.valeur != NULL) {
    if (est_caracteristique(racine)) {
      ajouter_caracteristique(niveaux_class, racine, i); // TODO
      classifie(racine.gauche, niveaux_class, i+1); // TODO
      classifie(racine.droit, niveaux_class, i+1); // TODO
    }
  }
}

// Renvoie vrai si le noeud est une caractéristique, faux si c'est une espèce
int est_caracteristique(noeud *n) {
  return !(n.gauche.valeur == NULL || n.droit.valeur == NULL);
}

// Ajoute une caractéristique au tableau de niveaux de classification
void ajouter_caracteristique(noeud *n, int niveaux_class[N][N], int i) {
  int j = 0;
  while (niveaux_class[i][j] != '\0') j++;
  niveaux_class[i][j] = n.valeur;
  niveaux_class[i][j+1] = '\0';
}
