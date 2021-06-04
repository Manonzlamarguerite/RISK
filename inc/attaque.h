// Fichier header contenant les prototypes des fonctions relatives à l'attaque

#ifndef ATTAQUE_H_
#define ATTAQUE_H_

#include "liste.h"
#include "tla.h"

void tri_tab_de(int *tab);
void confrontation(int *nb_troupes_atq, int *nb_troupes_def);
void phase2(int joueur, liste_territoires territoire, liste_voisin tla);

#endif
