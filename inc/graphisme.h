#ifndef GRAPHISME_H
#define GRAPHISME_H
#include"tla.h"
#include "liste.h"

void affichage_troupe(liste_voisin tla, liste_territoires territoire);
void affichage_bandeau_droite(int terr1,
                              int terr2,
                              int cont1,
                              int cont2,
                              int trp1,
                              int trp2,
                              int tour
                            );
void init_graphisme();

#endif
