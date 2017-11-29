#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arbres.h"
#include "arbresphylo.h"

int DEBUG = 0;


int main(int argc, char* argv[]) {
  char *fichier = NULL;

  if (argc < 2) {
    fprintf (stderr, "Usage:  %s [-d] <fichier>\n", argv[0]);
    fprintf (stderr, "\n");
    fprintf (stderr, "Options:\n");
    fprintf (stderr, "\t-d\tmode debug\n");
    exit(1);
  }
  int arg=1;

  while (arg < argc) {
    if (!strncmp(argv[arg], "-d", 2)) {
      DEBUG = 1;
      arg++;
    }
    if (fichier == NULL) {
      fichier = argv[arg];
      arg++;
    } else {
      fprintf (stderr, "Trop de fichiers sur la ligne de commande!\n");
      exit(1);
    }
  }

  debug ("Ouverture de %s\n", fichier);
  FILE* f = fopen (fichier, "r");
  if (!f) {
    fprintf (stderr, "Erreur à l'ouverture du fichier `%s'\n", fichier);
    perror (fichier);
    exit(1);
  }

  noeud *arbre = lire_arbre (f);

  affiche_arbre (arbre);
  printf ("Hauteur de l'arbre: %d\n", hauteur (arbre));

  return 0;
}
