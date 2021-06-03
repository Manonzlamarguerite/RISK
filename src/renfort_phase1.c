#include <stdlib.h>
#include <stdio.h>
#include "renfort_phase1.h"
#include "liste.h"
#include "tla.h"
#define NB_TERRITOIRE 42

int calc_nb_territoire(int joueur, liste_territoires territoire){
  int i;
  int nb_territoire;

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
    nb_troupe +=2
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
