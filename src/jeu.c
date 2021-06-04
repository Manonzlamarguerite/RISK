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
#include "renfort_phase1.h"
#include "manoeuvre_phase3.h"

void jeu(){

  // TLA representant les territoires adjacents
  liste_voisin global_carte = creation_tla();
  // Liste représentant les territoires
  liste_territoires global_terr = initialisation_jeu();
  int tour = 1 - 2 * rand()%2;  // Tour tiré au hasard
  int troupes1 = 40;            // Troupes du J1
  int troupes2 = 40;            // Troupes du J2
  int terr1 = 21;               // Territoires du J1
  int terr2 = 21;               // Territoires du J2
  int win = 0;                  // Variable de fin de jeu
  int i, cont1, cont2;

  // Création de la fenêtre
  MLV_create_window("RISK", "RISK", 1000, 600);

  // Tant qu'aucun n'a gagné
  while(!win){
    // Init graphisme
    init_graphisme();

    // On regarde le nombre de continent
    cont1 = nb_continent(1, global_terr);
    cont2 = nb_continent(2, global_terr);

    // On colorie les territoires
    for(i = 0; i < 42; i++){
      color_pays(i, global_terr[i].appartenance);
    }

    // On affiche les troupes
    affichage_troupe(global_carte, global_terr);
    // On affiche les élements du bandeau
    affichage_bandeau_droite(terr1, terr2,
      cont1, cont2,
      troupes1, troupes2,
      tour
    );

    phase1(tour, global_terr, global_carte);    // Phase 1
    phase2(tour, global_terr, global_carte);    // Phase 2

    if(troupes1 != 0 && troupes2 != 0){
      phase3(tour, global_terr, global_carte);  // Phase 3
    }
    else{
      win = 1 - 2 * (troupes2 == 0);            // Quelqu'un a gagné
    }

    tour *= -1;                                 // Tour suivant
  }
}
