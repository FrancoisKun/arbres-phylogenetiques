#ifndef ARBRES_H
#define ARBRES_H

struct noeud_s {
    char* valeur;
    struct noeud_s *gauche;
    struct noeud_s *droit;
};

typedef struct noeud_s noeud;


/* Crée un nouveau nœud et initialize ses champs à null */
noeud* nouveau_noeud (void);

/* Lit un nouveau arbre ou sous-arbre depuis le fichier ouvert f.
 * Renvoie la racine de cet arbre.
 * Fonction récursive (s'appelle elle-même pour la lecture des fils 
 * gauche et droit).
 */
noeud* lire_arbre (FILE *f);

/* Fonction d'affichage, à remplir */
void affiche_arbre (noeud*);


/* Macros pour de l'affichage uniquement si DEBUG est != 0 */
extern  int     DEBUG;
#define debug(fmt, ...) \
            do { if (DEBUG) fprintf(stderr, fmt, ##__VA_ARGS__); } while (0)

#endif
