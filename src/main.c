// Fichier source contenant la fonction principale du jeu

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <MLV/MLV_all.h>
#include "coloriage.h"
#include "clic.h"
#include "tla.h"
#include "liste.h"

int main(){
  MLV_create_window("RISK", "RISK", 1000, 600);
  MLV_Image *img = MLV_load_image("./ressources/img/world.png");
  MLV_draw_image(img, 0, 0);
  MLV_actualise_window();

  int i;

  srand(time(NULL));

  MLV_Font *font;

  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 24);
  MLV_draw_text_with_font(810, 20, "JOUEUR 1", font, MLV_COLOR_RED);

  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 18);
  MLV_draw_text_with_font(820, 50, "TERRITOIRES : 21", font, MLV_COLOR_RED);
  MLV_draw_text_with_font(820, 70, "CONTINENTS : ...", font, MLV_COLOR_RED);
  MLV_draw_text_with_font(820, 90, "TROUPES : 40", font, MLV_COLOR_RED);


  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 24);
  MLV_draw_text_with_font(810, 350, "JOUEUR 2", font, MLV_COLOR_GREEN);

  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 18);
  MLV_draw_text_with_font(820, 380, "TERRITOIRES : 21", font, MLV_COLOR_GREEN);
  MLV_draw_text_with_font(820, 400, "CONTINENTS : ...", font, MLV_COLOR_GREEN);
  MLV_draw_text_with_font(820, 420, "TROUPES : 40", font, MLV_COLOR_GREEN);


  MLV_actualise_window();

  liste_territoires global_list = initialisation_jeu();

  for(i = 0; i < 42; i++){
    color_pays(i, global_list[i].appartenance == 1);
  }

  MLV_wait_seconds(3000);

  exit(0);
}
