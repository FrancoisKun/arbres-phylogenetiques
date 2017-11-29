#ifndef ARBRESPHYLO_H
#define ARBRESPHYLO_H


/* Renvoie la hauteur de l'arbre passé en argument */
int hauteur (noeud *racine);

/* Recherche une espèce dans l'arbre et renvoie en argument
 * la séquence de ses caractéristiques.
 * Note: vous devez définir un type séquence approprié et modifier le 
 * type de retour de cette fonction.
 */
void recherche (noeud *racine, char *espece);



#endif
