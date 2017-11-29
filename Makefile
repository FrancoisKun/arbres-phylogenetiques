all: hauteur

CC=clang
CFLAGS=-g -Wall -Wextra #-Werror

hauteur: hauteur.o arbresphylo.o arbres.o

recherche: recherche.o arbresphylo.o arbres.o
