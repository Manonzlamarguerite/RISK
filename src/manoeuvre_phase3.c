#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>
#include "coloriage.h"
#include "manoeuvre_phase3.h"
#include "tla.h"
#include "liste.h"
#include "clic.h"
#include "graphisme.h"

int valeur_troupe_transvasees(int joueur, liste_territoires territoire, liste_voisin tla, int pays1, int pays2){
  int nb_troupe_trans,nb_troupe1;
  char *nb_troupe_trans_c;
  MLV_Font *font;
  nb_troupe_trans=-1;
  nb_troupe1=territoire[pays1].nb_regiment;
  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 16);

  while(nb_troupe_trans == -1){

    MLV_draw_text_with_font(
      810,200,
      "Troupe(s) à transférée(s) :",
      font,
      MLV_COLOR_WHITE
    );

    MLV_wait_input_box(
      810,220,
      100, 30,
      MLV_COLOR_BLACK,
      MLV_COLOR_BLACK,
      MLV_COLOR_WHITE,
      "",
      &nb_troupe_trans_c
    );
    MLV_actualise_window();

    nb_troupe_trans=atoi(nb_troupe_trans_c);

    if(nb_troupe_trans<1){
      nb_troupe_trans=-1;
    }
    else if((nb_troupe1-nb_troupe_trans)<1){
      nb_troupe_trans=-1;
    }
    else{
      territoire[pays1].nb_regiment -=nb_troupe_trans;
      territoire[pays2].nb_regiment += nb_troupe_trans;
      affichage_troupe(tla, territoire);
      color_pays(pays1, joueur);
      color_pays(pays2, joueur);
      affichage_troupe(tla,territoire);
      MLV_draw_filled_rectangle(800, 150, 200, 150, MLV_COLOR_BLACK);
      MLV_actualise_window();
      return 0;
    }
  }
  return 0;
}

void phase3(int joueur, liste_territoires territoire, liste_voisin tla){
  int pays1, pays2;

  /*On s'occupe du choix des deux pays*/
  pays1=saisir_pays(); /*Selection du premier pays qui va donner des troupes*/

  /*Vérification de l'appartenance*/
  while(territoire[pays1].appartenance != joueur){
    pays1=saisir_pays();
  }

  /*Verification nombre de troupe du territoire >1*/
  while(territoire[pays1].nb_regiment == 1){
    pays1=saisir_pays();
  }
  color_pays(pays1, 0);
  affichage_troupe(tla,territoire);

  pays2=saisir_pays(); /*On saisit le deuxième pays*/

  /*Vérification de l'appartenance*/
  while(territoire[pays2].appartenance != joueur){
    pays2=saisir_pays();
    /*On vérifie que les deux pays sont voisins*/
    while(est_voisin(pays1,pays2,tla)!=1){
      pays2=saisir_pays();
    }
  }


  color_pays(pays2, 0);
  affichage_troupe(tla,territoire);

  /*On appelle ensuite notre fonction pour faire transferer nos troupes*/
  valeur_troupe_transvasees(joueur,territoire,tla,pays1,pays2);
}
