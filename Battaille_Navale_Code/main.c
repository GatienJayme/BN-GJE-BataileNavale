#include <stdio.h>

int main() {
    int choix;
    int const jouer = 1;
    int const regle = 2;
    int const parametre = 3;
    int const quitter = 0;


    printf("Bienvenue dans le Menu du jeu\n\n");

    printf("Taper %d pour jouer\n", jouer);
    printf("Taper %d pour afficher les regles\n", regle);
    printf("Taper %d pour les parametres\n", parametre) ;
    printf("Taper %d pour quitter le jeu\n\n", quitter);
    scanf("%d", &choix);

    if(choix == regle)
        printf("2. Regle de la Bataille navale\n"
           "Une grille de jeu numerotee de 1 a 10 horizontalement et de A a J verticalement.\n"
           "1 porte avion (5 cases)\n"
           "1 croiseur (4 cases)\n"
           "1 contre torpilleur (3 cases)\n"
           "1 sous-marin (3 cases)\n"
           "1 torpilleur (2 cases)");
    return 0;
}