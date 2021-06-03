// Fichier source contenant les fonctions relatives au clic

#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>

int saisir_pays(){
  int x, y;

  MLV_wait_mouse(&x, &y);

  if(30 < x && x < 60 && 60 < y && y < 90){
    return 0;
  }
  if(60 < x && x < 120 && 60 < y && y < 120){
    return 0;
  }

  if(120 < x && x < 210 && 60 < y && y < 90){
    return 1;
  }

  if(300 < x && x < 360 && 30 < y && y < 60){
    return 2;
  }
  if(330 < x && x < 360 && 30 < y && y < 90){
    return 2;
  }

  if(120 < x && x < 180 && 90 < y && y < 150){
    return 3;
  }

  if(180 < x && x < 240 && 90 < y && y < 150){
    return 4;
  }

  if(240 < x && x < 300 && 90 < y && y < 150){
    return 5;
  }

  if(90 < x && x < 180 && 150 < y && y < 210){
    return 6;
  }

  if(150 < x && x < 180 && 210 < y && y < 240){
    return 7;
  }
  if(180 < x && x < 270 && 150 < y && y < 240){
    return 7;
  }
  if(270 < x && x < 300 && 150 < y && y < 180){
    return 7;
  }

  if(90 < x && x < 150 && 210 < y && y < 240){
    return 8;
  }
  if(120 < x && x < 150 && 210 < y && y < 300){
    return 8;
  }

  if(120 < x && x < 150 && 300 < y && y < 360){
    return 9;
  }
  if(120 < x && x < 240 && 300 < y && y < 330){
    return 9;
  }

  if(90 < x && x < 120 && 330 < y && y < 360){
    return 10;
  }
  if(90 < x && x < 150 && 360 < y && y < 450){
    return 10;
  }

  if(150 < x && x < 270 && 330 < y && y < 450){
    return 11;
  }
  if(180 < x && x < 240 && 450 < y && y < 480){
    return 11;
  }

  if(120 < x && x < 180 && 450 < y && y < 540){
    return 12;
  }
  if(150 < x && x < 180 && 540 < y && y < 570){
    return 12;
  }
  if(180 < x && x < 210 && 480 < y && y < 540){
    return 12;
  }

  if(390 < x && x < 420 && 60 < y && y < 90){
    return 13;
  }

  if(420 < x && x < 450 && 90 < y && y < 120){
    return 14;
  }

  if(480 < x && x < 540 && 90 < y && y < 120){
    return 15;
  }

  if(510 < x && x < 540 && 120 < y && y < 240){
    return 16;
  }
  if(540 < x && x < 570 && 90 < y && y < 210){
    return 16;
  }

  if(390 < x && x < 450 && 150 < y && y < 180){
    return 17;
  }
  if(390 < x && x < 420 && 180 < y && y < 210){
    return 17;
  }

  if(450 < x && x < 510 && 150 < y && y < 180){
    return 18;
  }

  if(450 < x && x < 510 && 180 < y && y < 210){
    return 19;
  }
  if(480 < x && x < 510 && 210 < y && y < 240){
    return 19;
  }

  if(570 < x && x < 600 && 90 < y && y < 210){
    return 20;
  }

  if(600 < x && x < 630 && 90 < y && y < 180){
    return 21;
  }

  if(600 < x && x < 690 && 60 < y && y < 90){
    return 22;
  }
  if(630 < x && x < 690 && 60< y && y < 120){
    return 22;
  }

  if(720 < x && x < 780 && 30 < y && y < 60){
    return 23;
  }
  if(690 < x && x < 750 && 60 < y && y < 120){
    return 23;
  }
  if(690 < x && x < 720 && 120 < y && y < 150){
    return 23;
  }

  if(630 < x && x < 690 && 120 < y && y < 150){
    return 24;
  }

  if(630 < x && x < 720 && 150 < y && y < 180){
    return 25;
  }

  if(750 < x && x < 780 && 120 < y && y < 210){
    return 26;
  }

  if(480 < x && x < 570 && 240 < y && y < 270){
    return 27;
  }
  if(510 < x && x < 570 && 270 < y && y < 300){
    return 27;
  }
  if(540 < x && x < 570 && 300 < y && y < 330){
    return 27;
  }

  if(540 < x && x < 600 && 210 < y && y < 240){
    return 28;
  }
  if(570 < x && x < 600 && 240 < y && y < 270){
    return 28;
  }

  if(600 < x && x < 720 && 180 < y && y < 270){
    return 29;
  }

  if(570 < x && x < 630 && 270 < y && y < 330){
    return 30;
  }
  if(570 < x && x < 600 && 270 < y && y < 300){
    return 30;
  }

  if(630 < x && x < 690 && 270 < y && y < 300){
    return 31;
  }
  if(630 < x && x < 660 && 300 < y && y < 360){
    return 31;
  }

  if(600 < x && x < 630 && 390 < y && y < 420){
    return 32;
  }
  if(600 < x && x < 660 && 420 < y && y < 450){
    return 32;
  }

  if(690 < x && x < 750 && 420 < y && y < 450){
    return 33;
  }

  if(630 < x && x < 690 && 480 < y && y < 570){
    return 34;
  }

  if(690 < x && x < 750 && 480 < y && y < 570){
    return 35;
  }

  if(330 < x && x < 390 && 240 < y && y < 270){
    return 36;
  }
  if(300 < x && x < 420 && 270 < y && y < 300){
    return 36;
  }
  if(300 < x && x < 390 && 300 < y && y < 360){
    return 36;
  }

  if(390 < x && x < 480 && 240 < y && y < 270){
    return 37;
  }
  if(360 < x && x < 480 && 270 < y && y < 300){
    return 37;
  }

  if(330 < x && x < 420 && 360 < y && y < 390){
    return 38;
  }
  if(390 < x && x < 420 && 390 < y && y < 420){
    return 38;
  }

  if(390 < x && x < 480 && 300 < y && y < 360){
    return 39;
  }
  if(390 < x && x < 510 && 330 < y && y < 420){
    return 39;
  }
  if(510 < x && x < 540 && 360 < y && y < 420){
    return 39;
  }

  if(390 < x && x < 510 && 420 < y && y < 480){
    return 40;
  }
  if(420 < x && x < 480 && 480 < y && y < 540){
    return 40;
  }

  if(540 < x && x < 570 && 450 < y && y < 480){
    return 41;
  }

  return -1;
}
