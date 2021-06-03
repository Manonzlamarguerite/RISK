#include <stdlib.h>
#include <stdio.h>

void verif_alloc(void* ptr){
  if(ptr==NULL){
    printf("Problème d'allocation\n");
    exit(0);
  }
}
