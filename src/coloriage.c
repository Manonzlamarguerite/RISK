// Fichier source contenant les fonctions de coloriage des territoires

#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>

void color_alaska(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(31, 61, 88, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(61, 89, 58, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(31, 61, 88, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(61, 89, 58, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(31, 61, 88, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(61, 89, 58, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_amerique_nord(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(121, 61, 88, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(121, 61, 88, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(121, 61, 88, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_alberta(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(121, 91, 58, 58, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(121, 91, 58, 58, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(121, 91, 58, 58, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_ontario(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(181, 91, 58, 58, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(181, 91, 58, 58, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(181, 91, 58, 58, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_quebec(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(241, 91, 58, 58, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(241, 91, 58, 58, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(241, 91, 58, 58, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_amerique_est(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(181, 151, 88, 88, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(269, 151, 30, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(151, 211, 30, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(181, 151, 88, 88, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(269, 151, 30, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(151, 211, 30, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(181, 151, 88, 88, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(269, 151, 30, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(151, 211, 30, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_amerique_ouest(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(91, 151, 88, 58, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(91, 151, 88, 58, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(91, 151, 88, 58, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_amerique_centrale(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(91, 211, 58, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(121, 211, 28, 88, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(91, 211, 58, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(121, 211, 28, 88, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(91, 211, 58, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(121, 211, 28, 88, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_groenland(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(301, 31, 58, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(331, 59, 28, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(301, 31, 58, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(331, 59, 28, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(301, 31, 58, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(331, 59, 28, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_venezuela(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(121, 301, 28, 58, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(121, 301, 118, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(121, 301, 28, 58, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(121, 301, 118, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(121, 301, 28, 58, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(121, 301, 118, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_perou(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(91, 331, 28, 30, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(91, 361, 58, 88, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(91, 331, 28, 30, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(91, 361, 58, 88, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(91, 331, 28, 30, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(91, 361, 58, 88, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_bresil(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(151, 331, 118, 118, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(181, 449, 58, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(151, 331, 118, 118, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(181, 449, 58, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(151, 331, 118, 118, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(181, 449, 58, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_argentine(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(121, 451, 58, 88, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(179, 481, 31, 58, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(151, 539, 28, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(121, 451, 58, 88, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(179, 481, 31, 58, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(151, 539, 28, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(121, 451, 58, 88, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(179, 481, 31, 58, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(151, 539, 28, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_japon(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(751, 121, 28, 88, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(751, 121, 28, 88, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(751, 121, 28, 88, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_kamtchatka(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(691, 61, 58, 58, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(691, 119, 28, 30, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(721, 31, 58, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(721, 31, 28, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(691, 61, 58, 58, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(691, 119, 28, 30, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(721, 31, 58, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(721, 31, 28, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(691, 61, 58, 58, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(691, 119, 28, 30, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(721, 31, 58, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(721, 31, 28, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_tchita(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(631, 121, 58, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(631, 121, 58, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(631, 121, 58, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_mongolie(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(631, 151, 88, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(631, 151, 88, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(631, 151, 88, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_chine(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(601, 181, 118, 88, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(601, 181, 118, 88, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(601, 181, 118, 88, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_syberie(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(601, 91, 28, 88, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(601, 91, 28, 88, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(601, 91, 28, 88, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_oural(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(571, 91, 28, 118, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(571, 91, 28, 118, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(571, 91, 28, 118, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_yakoutie(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(631, 61, 58, 58, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(601, 61, 30, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(631, 61, 58, 58, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(601, 61, 30, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(631, 61, 58, 58, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(601, 61, 30, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_siam(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(631, 271, 58, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(631, 271, 28, 88, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(631, 271, 58, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(631, 271, 28, 88, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(631, 271, 58, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(631, 271, 28, 88, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_australie_est(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(691, 481, 58, 88, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(691, 481, 58, 88, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(691, 481, 58, 88, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_australie_ouest(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(631, 481, 58, 88, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(631, 481, 58, 88, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(631, 481, 58, 88, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_nouvelle_guinee(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(691, 421, 58, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(691, 421, 58, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(691, 421, 58, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_indonesie(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(601, 391, 28, 58, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(629, 421, 30, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(601, 391, 28, 58, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(629, 421, 30, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(601, 391, 28, 58, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(629, 421, 30, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_madagascar(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(541, 451, 28, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(541, 451, 28, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(541, 451, 28, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_inde(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(571, 271, 58, 58, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(571, 271, 28, 88, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(571, 271, 58, 58, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(571, 271, 28, 88, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(571, 271, 58, 58, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(571, 271, 28, 88, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_islande(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(391, 60, 28, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(391, 60, 28, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(391, 60, 28, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_grande_bretagne(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(421, 91, 28, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(421, 91, 28, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(421, 91, 28, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_scandinavie(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(481, 91, 59, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(481, 91, 59, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(481, 91, 59, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_europe_occidentale(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(391, 151, 58, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(391, 179, 28, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(391, 151, 58, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(391, 179, 28, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(391, 151, 58, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(391, 179, 28, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_europe_du_nord(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(451, 151, 58, 28, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(451, 151, 58, 28, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(451, 151, 58, 28, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_ukraine(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(541, 91, 28, 118, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(511, 121, 29, 118, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(540, 121, 2, 88, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(541, 91, 28, 118, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(511, 121, 29, 118, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(540, 121, 2, 88, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(541, 91, 28, 118, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(511, 121, 29, 118, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(540, 121, 2, 88, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_europe_du_sud(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(451, 181, 58, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(481, 209, 28, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(451, 181, 58, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(481, 209, 28, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(451, 181, 58, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(481, 209, 28, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_afghanistan(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(541, 211, 58, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(571, 239, 28, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(541, 211, 58, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(571, 239, 28, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(541, 211, 58, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(571, 239, 28, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_moyen_orient(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(481, 241, 88, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(511, 269, 58, 30, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(541, 299, 28, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(481, 241, 88, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(511, 269, 58, 30, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(541, 299, 28, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(481, 241, 88, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(511, 269, 58, 30, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(541, 299, 28, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_afrique_du_sud(int color){
  if(color == 1){
      MLV_draw_filled_rectangle(391, 421, 118, 59, MLV_COLOR_RED);
      MLV_draw_filled_rectangle(421, 480, 58, 59, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(391, 421, 118, 59, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(421, 480, 58, 59, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(391, 421, 118, 59, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(421, 480, 58, 59, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_afrique_de_l_est(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(391, 301, 88, 32, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(391, 331, 118, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(421, 361, 118, 58, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(421, 359, 88, 5, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(391, 301, 88, 32, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(391, 331, 118, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(421, 361, 118, 58, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(421, 359, 88, 5, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(391, 301, 88, 32, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(391, 331, 118, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(421, 361, 118, 58, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(421, 359, 88, 5, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_afrique_du_nord(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(331, 241, 58, 30, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(301, 271, 118, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(301, 299, 88, 60, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(331, 241, 58, 30, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(301, 271, 118, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(301, 299, 88, 60, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(331, 241, 58, 30, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(301, 271, 118, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(301, 299, 88, 60, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_congo(int color){
  if(color == 1){
      MLV_draw_filled_rectangle(331, 361, 88, 28, MLV_COLOR_RED);
      MLV_draw_filled_rectangle(391, 389, 28, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(331, 361, 88, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(391, 389, 28, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(331, 361, 88, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(391, 389, 28, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_egypte(int color){
  if(color == 1){
    MLV_draw_filled_rectangle(391, 241, 88, 28, MLV_COLOR_RED);
    MLV_draw_filled_rectangle(421, 269, 58, 30, MLV_COLOR_RED);
  }
  else if(color == 0){
    MLV_draw_filled_rectangle(391, 241, 88, 28, MLV_COLOR_ORANGE);
    MLV_draw_filled_rectangle(421, 269, 58, 30, MLV_COLOR_ORANGE);
  }
  else{
    MLV_draw_filled_rectangle(391, 241, 88, 28, MLV_COLOR_GREEN);
    MLV_draw_filled_rectangle(421, 269, 58, 30, MLV_COLOR_GREEN);
  }
  MLV_actualise_window();
}

void color_pays(int pays, int flag){
  switch(pays){
    case 0:
      color_alaska(flag);
      break;
    case 1:
      color_amerique_nord(flag);
      break;
    case 2:
      color_groenland(flag);
      break;
    case 3:
      color_alberta(flag);
      break;
    case 4:
      color_ontario(flag);
      break;
    case 5:
      color_quebec(flag);
      break;
    case 6:
      color_amerique_ouest(flag);
      break;
    case 7:
      color_amerique_est(flag);
      break;
    case 8:
      color_amerique_centrale(flag);
      break;
    case 9:
      color_venezuela(flag);
      break;
    case 10:
      color_perou(flag);
      break;
    case 11:
      color_bresil(flag);
      break;
    case 12:
      color_argentine(flag);
      break;
    case 13:
      color_islande(flag);
      break;
    case 14:
      color_grande_bretagne(flag);
      break;
    case 15:
      color_scandinavie(flag);
      break;
    case 16:
      color_ukraine(flag);
      break;
    case 17:
      color_europe_occidentale(flag);
      break;
    case 18:
      color_europe_du_nord(flag);
      break;
    case 19:
      color_europe_du_sud(flag);
      break;
    case 20:
      color_oural(flag);
      break;
    case 21:
      color_syberie(flag);
      break;
    case 22:
      color_yakoutie(flag);
      break;
    case 23:
      color_kamtchatka(flag);
      break;
    case 24:
      color_tchita(flag);
      break;
    case 25:
      color_mongolie(flag);
      break;
    case 26:
      color_japon(flag);
      break;
    case 27:
      color_moyen_orient(flag);
      break;
    case 28:
      color_afghanistan(flag);
      break;
    case 29:
      color_chine(flag);
      break;
    case 30:
      color_inde(flag);
      break;
    case 31:
      color_siam(flag);
      break;
    case 32:
      color_indonesie(flag);
      break;
    case 33:
      color_nouvelle_guinee(flag);
      break;
    case 34:
      color_australie_ouest(flag);
      break;
    case 35:
      color_australie_est(flag);
      break;
    case 36:
      color_afrique_du_nord(flag);
      break;
    case 37:
      color_egypte(flag);
      break;
    case 38:
      color_congo(flag);
      break;
    case 39:
      color_afrique_de_l_est(flag);
      break;
    case 40:
      color_afrique_du_sud(flag);
      break;
    case 41:
      color_madagascar(flag);
      break;
    default:
      fprintf(stderr, "Erreur, numéro de pays incorrect, fonction color_pays");
      exit(-1);
      break;
  }
}
