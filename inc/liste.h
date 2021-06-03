#ifndef LISTE_H
#define LISTE_H

typedef struct liste {
  int appartenance; /*Vaut 1 si appartient au J1, et -1 pour le J2*/
  int nb_regiment; /*Nombre de régiment(s) présent(s) sur le territoire */
}liste;
typedef struct liste * liste_territoires;

liste_territoires initialisation_jeu();
#endif
