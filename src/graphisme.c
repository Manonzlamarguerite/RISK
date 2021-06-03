#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>
#include "coloriage.h"
#include "graphisme.h"

#define NB_TERRITOIRE 42

void affichage_troupe(liste_voisin tla, liste_territoires territoire){
  MLV_Font *font;
  char nb_troupe[5];
  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 16);

  /*Amérique du Nord*/
  sprintf(nb_troupe,"%d", territoire[0].nb_regiment);
  MLV_draw_text_with_font(
    80,80,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[1].nb_regiment);
  MLV_draw_text_with_font(
    160,70,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[2].nb_regiment);
  MLV_draw_text_with_font(
    345,50,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[3].nb_regiment);
  MLV_draw_text_with_font(
    150,120,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[4].nb_regiment);
  MLV_draw_text_with_font(
    210, 100,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[5].nb_regiment);
  MLV_draw_text_with_font(
    270, 100,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[6].nb_regiment);
  MLV_draw_text_with_font(
    145,170,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[7].nb_regiment);
  MLV_draw_text_with_font(
    220,170,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[8].nb_regiment);
  MLV_draw_text_with_font(
    130,250,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  /*Amérique du Sud*/
  sprintf(nb_troupe,"%d", territoire[9].nb_regiment);
  MLV_draw_text_with_font(
    180,310,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[10].nb_regiment);
  MLV_draw_text_with_font(
    120,400,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[11].nb_regiment);
  MLV_draw_text_with_font(
    210,400,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[12].nb_regiment);
  MLV_draw_text_with_font(
    160,510,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  /*Europe*/
  sprintf(nb_troupe,"%d", territoire[13].nb_regiment);
  MLV_draw_text_with_font(
    400,70,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[14].nb_regiment);
  MLV_draw_text_with_font(
    430,100,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[15].nb_regiment);
  MLV_draw_text_with_font(
    510,100,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[16].nb_regiment);
  MLV_draw_text_with_font(
    540,160,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[17].nb_regiment);
  MLV_draw_text_with_font(
    420,160,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[18].nb_regiment);
  MLV_draw_text_with_font(
    480,160,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

  sprintf(nb_troupe,"%d", territoire[19].nb_regiment);
  MLV_draw_text_with_font(
    480,190,
    nb_troupe,
    font,
    MLV_COLOR_BLACK
  );

/*Asie*/
sprintf(nb_troupe,"%d", territoire[20].nb_regiment);
MLV_draw_text_with_font(
  580,150,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[21].nb_regiment);
MLV_draw_text_with_font(
  610,130,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[22].nb_regiment);
MLV_draw_text_with_font(
  660,90,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[23].nb_regiment);
MLV_draw_text_with_font(
  720,90,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[24].nb_regiment);
MLV_draw_text_with_font(
  660,130,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[25].nb_regiment);
MLV_draw_text_with_font(
  660,160,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[26].nb_regiment);
MLV_draw_text_with_font(
  760,160,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);
sprintf(nb_troupe,"%d", territoire[27].nb_regiment);
MLV_draw_text_with_font(
  540,280,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[28].nb_regiment);
MLV_draw_text_with_font(
  580,220,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[29].nb_regiment);
MLV_draw_text_with_font(
  660,210,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[30].nb_regiment);
MLV_draw_text_with_font(
  600,290,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[31].nb_regiment);
MLV_draw_text_with_font(
  640,290,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

/*Océanie*/

sprintf(nb_troupe,"%d", territoire[32].nb_regiment);
MLV_draw_text_with_font(
  610,410,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[33].nb_regiment);
MLV_draw_text_with_font(
  720,420,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[34].nb_regiment);
MLV_draw_text_with_font(
  650,520,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[35].nb_regiment);
MLV_draw_text_with_font(
  720,520,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

/*Afrique*/

sprintf(nb_troupe,"%d", territoire[36].nb_regiment);
MLV_draw_text_with_font(
  360,310,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[37].nb_regiment);
MLV_draw_text_with_font(
  450,250,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[38].nb_regiment);
MLV_draw_text_with_font(
  390,370,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[39].nb_regiment);
MLV_draw_text_with_font(
  460,360,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[40].nb_regiment);
MLV_draw_text_with_font(
  450,460,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

sprintf(nb_troupe,"%d", territoire[41].nb_regiment);
MLV_draw_text_with_font(
  550,460,
  nb_troupe,
  font,
  MLV_COLOR_BLACK
);

  MLV_actualise_window();
}

// Actualisation du bandeau à droite
void affichage_bandeau_droite(int terr1,
                              int terr2,
                              int cont1,
                              int cont2,
                              int trp1,
                              int trp2,
                              int tour
                            ){
  // Police de caractère
  MLV_Font *font;

  // On efface ce qui est présent
  MLV_draw_filled_rectangle(800, 0, 200, 600, MLV_COLOR_BLACK);

  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 24);
  MLV_draw_text_with_font(810, 20, "JOUEUR 1", font, MLV_COLOR_RED);

  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 18);
  MLV_draw_text_with_font(820,50,"TERRITOIRES : %d",font,MLV_COLOR_RED,terr1);
  MLV_draw_text_with_font(820,70,"CONTINENTS : ...",font,MLV_COLOR_RED,cont1);
  MLV_draw_text_with_font(820,90,"TROUPES : 40",font,MLV_COLOR_RED,trp1);


  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 24);
  MLV_draw_text_with_font(810, 350, "JOUEUR 2", font, MLV_COLOR_GREEN);

  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 18);
  MLV_draw_text_with_font(820,380,"TERRITOIRES : %d",font,MLV_COLOR_GREEN,terr1);
  MLV_draw_text_with_font(820,400,"CONTINENTS : ...",font,MLV_COLOR_GREEN,cont1);
  MLV_draw_text_with_font(820,420,"TROUPES : 40", font, MLV_COLOR_GREEN,trp1);

  font = MLV_load_font("./ressources/fonts/gunplay.ttf", 24);
  if(tour == 0){
    MLV_draw_text_with_font(840,500,"TOUR : J1",font,MLV_COLOR_ORANGE,terr1);
  }
  else{
    MLV_draw_text_with_font(840,500,"TOUR : J2",font,MLV_COLOR_ORANGE,terr1);
  }

  // Libération de la police
  MLV_free_font(font);

  MLV_actualise_window();
}

// Fonction d'initialisation du graphisme de début de partie
void init_graphisme(){
  // Création de la fenêtre
  MLV_create_window("RISK", "RISK", 1000, 600);

  // Arrière plan
  MLV_Image *img = MLV_load_image("./ressources/img/world.png");
  MLV_draw_image(img, 0, 0);
}
