#include <stdio.h>
#include "arbres.h"


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

void classifie (noeud *racine, char *espece, int i) {
  if (racine.gauche.valeur == NULL && racine.droit.valeur == NULL)
    return 0;
  else {
    //ajouter(tab[i], racine); // TODO
    classifie(racine.gauche, espece, i+1); // TODO
    classifie(racine.droit, espece, i+1); // TODO
  }
}
