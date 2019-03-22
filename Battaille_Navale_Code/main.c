// Programm: bataille navale game
// Author: Gatien Jayme
// Date: 22.03.2019
#include <stdio.h>
#include <windows.h>

#define SIZE 10 // constante de la grille
// Constante pour faire la grille
#define STLC 218 // ┌, Single Top Left Corner
#define STRC 191 // ┐, Single Top Right Corner
#define SBLC 192 // └, Single Bottom Left Corner
#define SBRC 217 // ┘, Single Bottom Right Corner
#define SVSB 179 // │, Single Vertical Simple Border
#define SVRB 180 // ┤, Single Vertical Right Border
#define SVLB 195 // ├, Single Vertical Left Border
#define SHSB 196 // ─, Single Horizontal Simple Border
#define SHBB 193 // ┴, Single Horizontal Bottom Border
#define SHTB 194 // ┬, Single Horizontal Top Border
#define SC   197 // ┼, Single Center
#define DTLC 201 // ╔, Double Top Left Corner
#define DTRC 187 // ╗, Double Top Right Corner
#define DBLC 200 // ╚, Double Bottom Left Corner
#define DBRC 188 // ╝, Double Bottom Right Corner
#define DVSB 186 // ║, Double Vertical Simple Border
#define DVRB 185 // ╣, Double Vertical Right Border
#define DVLB 204 // ╠, Double Vertical Left Border
#define DHSB 205 // ═, Double Horizontal Simple Border
#define DHBB 202 // ╩, Double Horizontal Bottom Border
#define DHTB 203 // ╦, Double Horizontal Top Border
#define DC   206 // ╬, Double Center

// Affichage de la grille
int grille[10][10] = {{3, 0,  0,  0,  0,  0, -1, 0, 0, 0},
                      {3, 0,  0,  1,  0,  0, -1, 0, 0, 0},
                      {3, 0,  -1, 0,  0,  0, 0,  5, 0, 0},
                      {0, 2,  2,  -1, 0,  0, 0,  5, 0, 0},
                      {0, 0,  0,  0,  -1, 0, 0,  5, 0, 0},
                      {4, 0,  -1, 0,  0,  0, 0,  5, 0, 0},
                      {4, 0,  0,  1,  -1, 0, 0,  5, 0, 0},
                      {4, -1, 0,  0,  0,  0, 2,  0, 0, 0},
                      {4, 0,  0,  -1, 0,  0, 2,  0, 0, 0},
                      {0, -1, 0,  0,  0,  0, 0,  0, 0, 0}};

// Ligne du haut fonction entiere
void TopBorder(int width) {
    printf("     ");
    for (int j = 0; j < width; ++j) {
        printf("%c   ", j + 'A');
    }
    printf("\n");
    printf("   %c", STLC);
    for (int i = 0; i < width - 1; i++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHTB);
    }
    printf("%c%c%c%c\n", SHSB, SHSB, SHSB, STRC);
}

// Ligne vertical fonction entiere
void VerticalBars(int width, int a) {
    printf("%3d", a);
    int vcase = 3;
    char charcase;
    for (int i = 0; i < width; i++) {
        vcase = grille [a-1] [i];
        charcase = ' ';
        if(vcase < 0){
            charcase = '.';
        }
        if(vcase > 0){
            charcase = 'x';
        }
         printf("%c %c ", SVSB, charcase);
    }
    printf("%c\n", SVSB);
}

// Ligne horizontal fonction entiere
void HorizontalBars(int width) {
    printf("   %c%c%c%c", SVLB, SHSB, SHSB, SHSB);
    for (int i = 0; i < width - 1; i++) {
        printf("%c%c%c%c", SC, SHSB, SHSB, SHSB);
    }
    printf("%c\n", SVRB);
}

// Ligne du bas fonction entiere
void BottomBorder(int width) {
    printf("   %c", SBLC);
    for (int i = 0; i < width - 1; i++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHBB);
    }
    printf("%c%c%c%c\n", SHSB, SHSB, SHSB, SBRC);
}

int main() {
    int choix; // Choix de la personne qui jouera
    int const jouer = 1; // Jouer a la bataille
    int const regle = 2; // Afficher les règle
    int const parametre = 3; // Parametre de la grille
    int const quitter = 0; // Quitter le programme

    while (1) {
        // Menu du jeu
        printf("Bienvenue dans le Menu du jeu\n\n");

        printf("Taper %d pour jouer\n", jouer);
        printf("Taper %d pour afficher les regles\n", regle);
        printf("Taper %d pour les parametres\n", parametre);
        printf("Taper %d pour quitter le jeu\n\n", quitter);
        scanf("%d", &choix);

        // Numero 1 = jouer
        if (choix == jouer) {
            for (int row = 0; row < SIZE; row++) {
                if (row == 0) // first line
                {
                    TopBorder(SIZE);
                } else {
                    HorizontalBars(SIZE);
                }
                VerticalBars(SIZE, row + 1);
            }
            BottomBorder(SIZE);
        }

        // Numero 2 = regle du jeu
        if (choix == regle) {
            printf("2. Regle de la Bataille navale\n"
                   "Une grille de jeu numerotee de 1 a 10 horizontalement et de A a J verticalement.\n"
                   "1 porte avion (5 cases)\n"
                   "1 croiseur (4 cases)\n"
                   "1 contre torpilleur (3 cases)\n"
                   "1 sous-marin (3 cases)\n"
                   "1 torpilleur (2 cases)");
        }

        // Numero 3 = parametre de la grille
        if (choix == parametre) {
            printf("3. affichage des parametres de la grille");

        }

        // Numero 0 = quitter le jeu
        if (choix == quitter) {
            return 0;
        }
        if (choix > 3) {
            printf("Mettez un veritable numero :)\n\n");
        }
    }
}