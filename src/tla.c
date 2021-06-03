/*Les TLA vont servir pour savoir quel territoire a une frontière commune
avec quel autre territoire*/

#include <stdio.h>
#include <stdlib.h>
#include "tla.h"
#include "utilitaire.h"
#define NB_TERRITOIRES 42
#define NB_VOISIN_MAX 6

liste_voisin creation_tla(){
  int i,j;
  liste_voisin tla;
  tla=(liste_voisin)malloc(sizeof(tla_voisin)*NB_TERRITOIRES);
  verif_alloc(tla);

  for(i=0;i<NB_TERRITOIRES;i++){
    for(j=0;j<NB_VOISIN_MAX;j++){
      tla[i].voisin[j]=-1;
    }
  }

  /*Amérique du Nord*/
  tla[0].voisin[0]=1;
  tla[0].voisin[1]=3;
  tla[0].voisin[2]=23;

  tla[1].voisin[0]=0;
  tla[1].voisin[1]=2;
  tla[1].voisin[2]=3;
  tla[1].voisin[3]=4;

  tla[2].voisin[0]=1;
  tla[2].voisin[1]=4;
  tla[2].voisin[2]=5;
  tla[2].voisin[3]=13;

  tla[3].voisin[0]=0;
  tla[3].voisin[1]=1;
  tla[3].voisin[2]=4;
  tla[3].voisin[3]=6;

  tla[4].voisin[0]=1;
  tla[4].voisin[1]=2;
  tla[4].voisin[2]=3;
  tla[4].voisin[3]=5;
  tla[4].voisin[4]=7;

  tla[5].voisin[0]=2;
  tla[5].voisin[1]=4;
  tla[5].voisin[2]=7;

  tla[6].voisin[0]=3;
  tla[6].voisin[1]=7;
  tla[6].voisin[2]=8;

  tla[7].voisin[0]=4;
  tla[7].voisin[1]=5;
  tla[7].voisin[2]=6;
  tla[7].voisin[3]=8;

  tla[8].voisin[0]=6;
  tla[8].voisin[1]=7;
  tla[8].voisin[2]=9;

  /*Amérique du Sud*/
  tla[9].voisin[0]=8;
  tla[9].voisin[1]=10;
  tla[9].voisin[2]=11;

  tla[10].voisin[0]=9;
  tla[10].voisin[1]=11;
  tla[10].voisin[2]=12;

  tla[11].voisin[0]=9;
  tla[11].voisin[1]=10;
  tla[11].voisin[2]=12;
  tla[11].voisin[3]=36;

  tla[12].voisin[0]=10;
  tla[12].voisin[1]=11;

  /*Europe*/
  tla[13].voisin[0]=2;
  tla[13].voisin[1]=14;
  tla[13].voisin[2]=15;

  tla[14].voisin[0]=13;
  tla[14].voisin[1]=15;
  tla[14].voisin[2]=17;
  tla[14].voisin[3]=18;

  tla[15].voisin[0]=13;
  tla[15].voisin[1]=14;
  tla[15].voisin[2]=16;
  tla[15].voisin[3]=18;

  tla[16].voisin[0]=15;
  tla[16].voisin[1]=18;
  tla[16].voisin[2]=19;
  tla[16].voisin[3]=20;
  tla[16].voisin[4]=28;

  tla[17].voisin[0]=14;
  tla[17].voisin[1]=18;
  tla[17].voisin[2]=19;
  tla[17].voisin[3]=36;

  tla[18].voisin[0]=14;
  tla[18].voisin[1]=15;
  tla[18].voisin[2]=16;
  tla[18].voisin[3]=17;
  tla[18].voisin[4]=19;

  tla[19].voisin[0]=16;
  tla[19].voisin[1]=18;
  tla[19].voisin[2]=27;
  tla[19].voisin[3]=37;

  /*Asie*/
  tla[20].voisin[0]=16;
  tla[20].voisin[1]=21;
  tla[20].voisin[2]=28;
  tla[20].voisin[3]=29;

  tla[21].voisin[0]=20;
  tla[21].voisin[1]=21;
  tla[21].voisin[2]=24;
  tla[21].voisin[3]=29;

  tla[22].voisin[0]=21;
  tla[22].voisin[1]=23;
  tla[22].voisin[2]=24;

  tla[23].voisin[0]=0;
  tla[23].voisin[1]=22;
  tla[23].voisin[2]=24;
  tla[23].voisin[3]=25;
  tla[23].voisin[4]=26;

  tla[24].voisin[0]=21;
  tla[24].voisin[1]=22;
  tla[24].voisin[2]=23;
  tla[24].voisin[3]=25;

  tla[25].voisin[0]=21;
  tla[25].voisin[1]=23;
  tla[25].voisin[2]=24;
  tla[25].voisin[3]=26;
  tla[25].voisin[4]=29;

  tla[26].voisin[0]=23;
  tla[26].voisin[1]=25;

  tla[27].voisin[0]=16;
  tla[27].voisin[1]=19;
  tla[27].voisin[2]=28;
  tla[27].voisin[3]=30;
  tla[27].voisin[4]=37;

  tla[28].voisin[0]=16;
  tla[28].voisin[1]=20;
  tla[28].voisin[2]=27;
  tla[28].voisin[3]=29;
  tla[28].voisin[4]=30;

  tla[29].voisin[0]=20;
  tla[29].voisin[1]=21;
  tla[29].voisin[2]=25;
  tla[29].voisin[3]=28;
  tla[29].voisin[4]=30;
  tla[29].voisin[5]=31;

  tla[30].voisin[0]=27;
  tla[30].voisin[1]=28;
  tla[30].voisin[2]=29;
  tla[30].voisin[3]=31;

  tla[31].voisin[0]=29;
  tla[31].voisin[1]=30;
  tla[31].voisin[2]=32;

  /*Océanie*/
  tla[32].voisin[0]=31;
  tla[32].voisin[1]=33;
  tla[32].voisin[2]=34;

  tla[33].voisin[0]=32;
  tla[33].voisin[1]=34;
  tla[33].voisin[2]=35;

  tla[34].voisin[0]=32;
  tla[34].voisin[1]=33;
  tla[34].voisin[2]=35;

  tla[35].voisin[0]=33;
  tla[35].voisin[1]=34;

  /*Afrique*/
  tla[36].voisin[0]=11;
  tla[36].voisin[1]=17;
  tla[36].voisin[2]=37;
  tla[36].voisin[3]=38;
  tla[36].voisin[4]=39;

  tla[37].voisin[0]=19;
  tla[37].voisin[2]=27;
  tla[37].voisin[3]=36;
  tla[37].voisin[4]=39;

  tla[38].voisin[0]=36;
  tla[38].voisin[1]=39;
  tla[38].voisin[2]=40;

  tla[39].voisin[0]=36;
  tla[39].voisin[1]=37;
  tla[39].voisin[2]=38;
  tla[39].voisin[3]=40;
  tla[39].voisin[4]=41;

  tla[40].voisin[0]=38;
  tla[40].voisin[1]=39;
  tla[40].voisin[2]=41;

  tla[41].voisin[0]=39;
  tla[41].voisin[1]=40;

  return tla;
}

/*Fonction qui retourne 1 si le pays1 et pays2 sont voisins*/
int est_voisin(int pays1, int pays2,liste_voisin tla){
  int i,c;
  c=0; /*On suppose que pays1 et pays2 ne sont pas voisin*/

  for(i=0;i<NB_VOISIN_MAX;i++){
    if(tla[pays1].voisin[i]==pays2){
      c=1;
    }
  }

  return c;
}
