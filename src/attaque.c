// Fichier contenant les fonctions relatives aux attaques

#include <stdlib.h>
#include <stdio.h>

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
    if(*nb_troupes_def > 2){
      de_J2[2] = rand()%6+1;
    }
    else{
      de_J2[2] = 0;
    }

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
