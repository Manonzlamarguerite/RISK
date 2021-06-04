#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>
#include "renfort_phase1.h"
#include "liste.h"
#include "tla.h"
#include"clic.h"
#include "coloriage.h"
#include"graphisme.h"
#define NB_TERRITOIRE 42

int calc_nb_territoire(int joueur, liste_territoires territoire){
  int i;
  int nb_territoire;
  nb_territoire=0;

  for(i=0;i<NB_TERRITOIRE; i++){
    if(territoire[i].appartenance == joueur){
      nb_territoire++;
    }
  }

  return nb_territoire;
}

int nb_continent(int joueur, liste_territoires territoire){
  int nb_continent,i;
  int oceanie, asie, amerique_sud, amerique_nord,afrique, europe;
  oceanie=0;
  asie=0;
  amerique_sud=0;
  amerique_nord=0;
  afrique =0;
  europe=0;
  nb_continent =0;

  for(i=32; i<36; i++){
    if(territoire[i].appartenance==joueur){
      oceanie+=1;
    }
  }
  if(oceanie==4){
    nb_continent+=1;
  }

  for(i=9;i<13;i++){
    if(territoire[i].appartenance==joueur){
      amerique_sud +=1;
    }
  }
  if(amerique_sud==4){
    nb_continent +=1;
  }

  for(i=36; i<42; i++){
    if(territoire[i].appartenance==joueur){
      afrique +=1;
    }
  }
  if(afrique==6){
    nb_continent+=1;
  }

  for(i=0; i<9;i++){
    if(territoire[i].appartenance==joueur){
      amerique_nord +=1;
    }
  }
  if(amerique_nord==9){
    nb_continent +=1;
  }

  for(i=13; i<20;i++){
    if(territoire[i].appartenance==joueur){
      europe +=1;
    }
  }
  if(europe==7){
    nb_continent +=1;
  }

  for(i=20; i<33; i++){
    if(territoire[i].appartenance==joueur){
      asie +=1;
    }
  }
  if(asie==12){
    nb_continent +=1;
  }

  return nb_continent;
}

int calc_nb_troupe(int joueur, liste_territoires territoire, liste_voisin tla){
  int i;
  int nb_troupe, nb_territoire;
  int oceanie, amerique_sud, afrique, amerique_nord, europe, asie;
  oceanie=0;
  amerique_sud=0;
  afrique =0;
  amerique_nord=0;
  europe=0;
  asie=0;
  nb_troupe=0;
  nb_territoire=calc_nb_territoire(joueur, territoire);

  /*Première règle de calcul du nombre de territoire à distribuer*/
  if(nb_territoire/3 > 3){
    nb_troupe += nb_territoire/3;
  }
  else{
    nb_troupe += 3;
  }

  /*Deuxième règle: en fonction des continents conquérient par le joueur */
  /*Si le joueur détient l'Océanie/ l'amérique du Sud : +2 troupe*/
  for(i=32; i<36; i++){
    if(territoire[i].appartenance==joueur){
      oceanie+=1;
    }
  }
  if(oceanie==4){
    nb_troupe+=2;
  }

  for(i=9;i<13;i++){
    if(territoire[i].appartenance==joueur){
      amerique_sud +=1;
    }
  }
  if(amerique_sud==4){
    nb_troupe +=2;
  }

  /*Si le joueur détient l'Afrique : +3 */
  for(i=36; i<42; i++){
    if(territoire[i].appartenance==joueur){
      afrique +=1;
    }
  }
  if(afrique==6){
    nb_troupe +=3;
  }

  /*Si le joueur détient l'Europe/Amérique du Nord : +5 troupes */
  for(i=0; i<9;i++){
    if(territoire[i].appartenance==joueur){
      amerique_nord +=1;
    }
  }
  if(amerique_nord==9){
    nb_troupe +=5;
  }

  for(i=13; i<20;i++){
    if(territoire[i].appartenance==joueur){
      europe +=1;
    }
  }
  if(europe==7){
    nb_troupe += 5;
  }

  /*Si le joueur détient l'Asie : +7 troupes */
  for(i=20; i<33; i++){
    if(territoire[i].appartenance==joueur){
      asie +=1;
    }
  }
  if(asie==12){
    nb_troupe +=7;
  }

  return nb_troupe;
}

int clic_territoire_renforce(int joueur, liste_territoires territoire,liste_voisin tla, int nb_troupe){
  int pays, nb_ajouter;
  char* nb_ajouter_c;
  MLV_Font *font;
  pays=saisir_pays();
  nb_ajouter=-1;
  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 18);


  MLV_draw_filled_rectangle(
    810,200,
    200,50,
    MLV_COLOR_BLACK
  );
  MLV_actualise_window();
  /*On vérifie que le joueur a cliqué sur un de ses territoire à lui*/
  if(territoire[pays].appartenance!=joueur){
    return nb_troupe; /*On sort de la fonction*/
  }

  /*On selectionne donc le pays*/
  color_pays(pays, 0);
  affichage_troupe(tla, territoire);

  /*On fait apparaitre une zone input dans la fenetre et on saisie l'entrée*/
  MLV_draw_text_with_font(
    810, 200,
    "Ajouter .. troupe(s)",
    font,
    MLV_COLOR_WHITE
  );

  MLV_actualise_window();

  while(nb_ajouter == -1 ){
    MLV_wait_input_box(
      810, 220,
      150, 50,
      MLV_COLOR_BLACK,
      MLV_COLOR_BLACK,
      MLV_COLOR_WHITE,
      "... : ",
      &nb_ajouter_c
    );

    MLV_draw_text_with_font(
      900, 365,
      nb_ajouter_c,
      font,
      MLV_COLOR_BLACK
    );


  /*On met à jour le nombre de troupe*/
  nb_ajouter=atoi(nb_ajouter_c);

  printf("%d\n",nb_ajouter);
  printf("%d\n",nb_troupe );
  if(nb_troupe>nb_ajouter){
    territoire[pays].nb_regiment += nb_ajouter;
    nb_troupe -= nb_ajouter;
    color_pays(pays, joueur);
    affichage_troupe(tla, territoire);
    MLV_draw_filled_rectangle(
      810,200,
      200,50,
      MLV_COLOR_BLACK
    );

    MLV_actualise_window();
  }
  else{
    color_pays(pays,joueur);
    affichage_troupe(tla,territoire);
    MLV_draw_filled_rectangle(
      810,200,
      200,50,
      MLV_COLOR_BLACK
    );
    MLV_draw_text_with_font(
      810,200,
      "Nombre invalide",
      font,
      MLV_COLOR_WHITE
    );
    MLV_actualise_window();
  }

  }

  return nb_troupe;
}

void phase1(int joueur, liste_territoires territoire, liste_voisin tla){
  int nb_troupe;
  MLV_Font *font;
  nb_troupe = calc_nb_troupe(joueur, territoire, tla);
  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 12);

  while(nb_troupe!=0){
    MLV_draw_text_with_font(
      810,150,
      "Nombre de troupe disponible : %d",
      font,
      MLV_COLOR_WHITE,
      nb_troupe
    );
    MLV_actualise_window();
    nb_troupe=clic_territoire_renforce(joueur, territoire, tla, nb_troupe);
  }
}
