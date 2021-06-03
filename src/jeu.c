// Fichier source contenant les fonctions de jeu

#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>
#include "coloriage.h"
#include "clic.h"
#include "tla.h"
#include "liste.h"
#include "attaque.h"
#include "graphisme.h"

// Tour tiré au hasard
int tour;

// Troupes de chacuns
int troupes1 = 40;
int troupes2 = 40;

void jeu(){

  liste_territoires global_list = initialisation_jeu();
  int i;

  tour = rand()%2;

  init_graphisme();
  affichage_bandeau_droite(0, 0, 0, 0, 0, 0, tour);

  for(i = 0; i < 42; i++){
    color_pays(i, global_list[i].appartenance == 1);
  }

}
