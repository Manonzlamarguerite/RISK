// Fichier source contenant la fonction principale du jeu

#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>
#include <time.h>
#include "liste.h"
#define NB_TERRITOIRES 42

int main(){
  liste_territoires territoire;
  srand(time(NULL));

  territoire=initialisation_jeu();
  for(int i=0;i<42;i++){
    printf("%d : appartenance -> %d , nb troupe : %d\n",i,territoire[i].appartenance, territoire[i].nb_regiment);
  }
  exit(0);
}
