#define NB_VOISIN_MAX 6

typedef struct tla_voisin{
  int voisin[NB_VOISIN_MAX];
}tla_voisin;
typedef tla_voisin * liste_voisin;

liste_voisin creation_tla();
int est_voisin(int pays1, int pays2,liste_voisin tla);
