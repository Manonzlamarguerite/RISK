#ifndef  PHASE_1
#define PHASE_1
#include "liste.h"
#include "tla.h"
int calc_nb_territoire(int joueur, liste_territoires territoire);
int nb_continent(int joueur, liste_territoires territoire);
int calc_nb_troupe(int joueur, liste_territoires territoire, liste_voisin tla);
int clic_territoire_renforce(int joueur, liste_territoires territoire,liste_voisin tla, int nb_troupe);
void phase1(int joueur, liste_territoires territoire, liste_voisin tla);
#endif
