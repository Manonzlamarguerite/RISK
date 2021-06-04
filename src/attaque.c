// Fichier contenant les fonctions relatives aux attaques

#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>
#include "coloriage.h"
#include "manoeuvre_phase3.h"
#include "tla.h"
#include "liste.h"
#include "clic.h"
#include "manoeuvre_phase3.h"
#include "graphisme.h"

// Fonction fournissant un tableau trié des trois dés
void tri_tab_de(int *tab){
  int temp;

  if(tab[0] > tab[1]){
    temp = tab[1];
    tab[1] = tab[0];
    tab[0] = temp;
  }

  if(tab[1] > tab[2]){
    temp = tab[2];
    tab[2] = tab[1];
    tab[1] = temp;
  }

  if(tab[0] > tab[1]){
    temp = tab[1];
    tab[1] = tab[0];
    tab[0] = temp;
  }
}

void aff_tab_de(int *tab){
  printf("%d %d %d\n", tab[0], tab[1], tab[2]);
}

void confrontation(int *nb_troupes_atq, int *nb_troupes_def){

  int de_J1[3], de_J2[3], moins_atq, moins_def;

  // L'un des deux nombre de troupes dois être minimal pour terminer l'attaque
  while(*nb_troupes_atq != 1 && *nb_troupes_def != 0){

    moins_atq = 0;
    moins_def = 0;

    // On détermine les valeurs des dés du joueur 1
    de_J1[0] = rand()%6+1;
    if(*nb_troupes_atq-1 > 1){
      de_J1[1] = rand()%6+1;
    }
    else{
      de_J1[1] = 0;
    }
    if(*nb_troupes_atq-1 > 2){
      de_J1[2] = rand()%6+1;
    }
    else{
      de_J1[2] = 0;
    }

    // On détermine les valeurs des dés du joueur 3
    de_J2[0] = rand()%6+1;
    if(*nb_troupes_def > 1){
      de_J2[1] = rand()%6+1;
    }
    else{
      de_J2[1] = 0;
    }
    de_J2[2] = 0;

    // On trie les listes de valeurs
    tri_tab_de(de_J1);
    tri_tab_de(de_J2);

    // On compare le dé le plus puissant de chacun
    if(de_J1[2] > de_J2[2]){
      moins_def++;
    }
    else{
      moins_atq++;
    }

    // Si ils ont tous deux plus que 1 troupes on compare le suivant
    if(*nb_troupes_atq-1 > 1 && *nb_troupes_def > 1){
      if(de_J1[1] > de_J2[1]){
        moins_def++;
      }
      else{
        moins_atq++;
      }
    }

    // Si ils ont tous deux plus que 2 troupes on compare le suivant
    if(*nb_troupes_atq-1 > 2 && *nb_troupes_def > 2){
      if(de_J1[0] > de_J2[0]){
        moins_def++;
      }
      else{
        moins_atq++;
      }
    }

    // On soustrait les troupes perdues
    *nb_troupes_atq -= moins_atq;
    *nb_troupes_def -= moins_def;
  }
}

void phase2(int joueur, liste_territoires territoire, liste_voisin tla){

  MLV_Font *font = MLV_load_font("./ressources/fonts/gunplay.ttf", 24);
  MLV_Sound *boom;
  int pays1, pays2;
  int fin_attaque = 0;

  MLV_draw_text_with_font(850, 520, "SUIVANT", font, MLV_COLOR_ORANGE);
  MLV_actualise_window();

  if(MLV_init_audio()){
    fprintf(stderr,"NIK");
    exit(1);
  }

  boom = MLV_load_sound("./ressources/OST/bruits/sf_explosion_01.wav");

  while(!fin_attaque){
    pays1 = saisir_pays();  // On saisie le pays choisi par le joueur

    if(pays1 == -2){        // Le Joueur a cliqué sur suivant
      fin_attaque++;
      continue;
    }

    // On s'assure que le pays choisi soit bien détenu par le joueur
    // et que son nombre de troupes soit supérieur à 1 (afin d'attquer)
    while(pays1 == -1
      || territoire[pays1].appartenance != joueur
      || territoire[pays1].nb_regiment == 1){
      if(pays1 == 2){
        break;
      }
      pays1=saisir_pays();
    }

    if(pays1 == -2){      // Le Joueur a cliqué sur suivant
      fin_attaque++;
      continue;
    }

    color_pays(pays1, 0);
    affichage_troupe(tla, territoire);

    pays2 = saisir_pays();  // On saisi le pays choisi par le joueur

    if(pays2 == -2){        // Le Joueur a cliqué sur suivant
      fin_attaque++;
      continue;
    }

    // On s'assure que le pays choisi soit bien détenu par l'autre joueur
    // et qu'il soient voisins
    while(pays2 == -1
        || territoire[pays2].appartenance == joueur
        || !est_voisin(pays1, pays2, tla)){
      if(pays1 == 2){
        break;
      }
      pays1=saisir_pays();
      pays2=saisir_pays();
    }

    if(pays2 == -2){
      fin_attaque++;
      continue;
    }
    else if(pays1 == pays2){
      color_pays(pays1, joueur);
      affichage_troupe(tla, territoire);
    }
    else{

      MLV_play_sound(boom, 1.0);

      confrontation(
        &territoire[pays1].nb_regiment,
        &territoire[pays2].nb_regiment
      );

      if(territoire[pays2].nb_regiment == 0){
        color_pays(pays1, joueur);
        color_pays(pays2, joueur);

        // Le joueur prend le territoire
        territoire[pays2].appartenance = joueur;

        // Les troupes bougent
        if(territoire[pays1].nb_regiment == 2){
          territoire[pays1].nb_regiment = 1;
          territoire[pays2].nb_regiment = 1;
        }
        else if(territoire[pays1].nb_regiment == 3){
          territoire[pays1].nb_regiment = 1;
          territoire[pays2].nb_regiment = 2;
        }
        else if(territoire[pays1].nb_regiment == 4){
          territoire[pays1].nb_regiment = 1;
          territoire[pays2].nb_regiment = 3;
        }
        else{
          // On affiche les troupes
          affichage_troupe(tla, territoire);

          valeur_troupe_transvasees(joueur, territoire, tla, pays1, pays2);
        }
      }
      else{
        color_pays(pays1, joueur);
        color_pays(pays2, joueur*-1);
      }
      affichage_troupe(tla, territoire);
    }
  }
  MLV_free_font(font);
  MLV_free_sound(boom);
  MLV_draw_filled_rectangle(800, 520, 200, 80, MLV_COLOR_BLACK);
  MLV_actualise_window();
}
