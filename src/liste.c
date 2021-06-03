/*Définition de la structure liste */

#include <stdio.h>
#include <stdlib.h>
#include "utilitaire.h"
#include "liste.h"
#define NB_TERRITOIRES 42


liste_territoires initialisation_jeu(){
  int nb_appartenance_J1, index, num_territoire, nb_troupe_J1, nb_troupe_J2,
  nb_territoire_restant_J1, nb_territoire_restant_J2, nb_max, nb_troupe;
  liste_territoires territoire;

  territoire=(liste_territoires)malloc(NB_TERRITOIRES*sizeof(struct liste));
  verif_alloc(territoire);

  /*On initialise quel territoire appartient à qui*/
  for (index = 0; index < NB_TERRITOIRES; index++) {
    territoire[index].appartenance = 0; /*On indique que chaque territoire est libre */
  }

  nb_appartenance_J1 =0; /*Au début, le J1 n'a aucun territoire*/
  while(nb_appartenance_J1 != 21){
    num_territoire = rand()%NB_TERRITOIRES;
    if(territoire[num_territoire].appartenance==0){ /*Si le territoire n'a pas encore d'appartenance*/
      territoire[num_territoire].appartenance=1;
      nb_appartenance_J1++;
    }
  }

  for (index = 0; index < NB_TERRITOIRES; index++) { /*On attribut les territoires restant à J2*/
    if(territoire[index].appartenance == 0){
      territoire[index].appartenance = -1;
    }
  }

  /*On détermine le nombre de troupe par territoires pour chaque joueur */
  nb_troupe_J1=40;
  nb_troupe_J2=40;
  nb_territoire_restant_J1 = 21;
  nb_territoire_restant_J2=21;

  for(index=0;index<NB_TERRITOIRES; index++){
    if(territoire[index].appartenance==1){ /*Pour le J1*/
      nb_max = nb_troupe_J1 - nb_territoire_restant_J1;
      if(nb_max >= 3){
        nb_troupe=rand()%3 +1;
        territoire[index].nb_regiment = nb_troupe;
        nb_territoire_restant_J1 --;
        nb_troupe_J1 -= nb_troupe;
      }
      else if(nb_max==2){
        nb_troupe=rand()%2 +1;
        territoire[index].nb_regiment = nb_troupe;
        nb_territoire_restant_J1 --;
        nb_troupe_J1 -= nb_troupe;
      }
      else{
        nb_troupe=1;
        territoire[index].nb_regiment = nb_troupe;
        nb_territoire_restant_J1 --;
        nb_troupe_J1-= nb_troupe;
      }
    }
    else{ /*Pour le J2*/
      nb_max = nb_troupe_J2 - nb_territoire_restant_J2;
      if(nb_max >= 3){
        nb_troupe=rand()%3 +1;
        territoire[index].nb_regiment = nb_troupe;
        nb_territoire_restant_J2 --;
        nb_troupe_J2 -= nb_troupe;
      }
      else if(nb_max==2){
        nb_troupe=rand()%2 +1;
        territoire[index].nb_regiment = nb_troupe;
        nb_territoire_restant_J2 --;
        nb_troupe_J2 -= nb_troupe;
      }
      else{
        nb_troupe=1;
        territoire[index].nb_regiment = nb_troupe;
        nb_territoire_restant_J2 --;
        nb_troupe_J2-= nb_troupe;
      }

    }
  }

  /*Il ne faut pas oublier de vérifier s'il ne reste pas des troupes à distribuer*/
  for(index=0;index<NB_TERRITOIRES; index++){
    if(nb_troupe_J1!=0){
      if(territoire[index].appartenance == 1){
        territoire[index].nb_regiment +=1;
        nb_troupe_J1 -= 1;
      }
    }
    if(nb_troupe_J2!=0){
      if(territoire[index].appartenance==-1){
        territoire[index].nb_regiment+=1;
        nb_troupe_J2 -=1;
      }
    }
  }

  return territoire;
}
