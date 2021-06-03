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

  MLV_Sound *boom;
  liste_territoires global_list = initialisation_jeu();
  int i;

  if(MLV_init_audio()){
    fprintf(stderr, "L'infrasctructure audio s'est chié");
    exit(1);
  }

  boom = MLV_load_sound("./ressources/OST/bruits/sf_explosion_01.wav");

  tour = rand()%2;

  init_graphisme();
  affichage_bandeau_droite(0, 0, 0, 0, 0, 0, tour);

  for(i = 0; i < 42; i++){
    color_pays(i, global_list[i].appartenance);
  }

}
