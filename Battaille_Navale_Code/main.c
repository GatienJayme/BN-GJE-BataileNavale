#include <stdio.h>
#include <windows.h>

#define SIZE 10
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

void TopBorder(int width) {
    printf("%c", STLC);
    for (int i = 0; i < width; i++) {
        printf("%c%c%c%c",SHSB, SHSB,SHSB, SHTB);
}
    printf("%c%c%c%c\n", SHSB, SHSB, SHSB, STRC);
}

void VerticalBars(int width) {
    for (int i = 0; i <= width; i++) {
        printf("%c   ", SVSB);
    }
    printf("%c\n", SVSB);
}

void HorizontalBars(int width) {
    printf("%c%c%c%c", SVLB, SHSB, SHSB, SHSB);
    for (int i = 0; i < width; i++) {
        printf("%c%c%c%c", SC, SHSB, SHSB, SHSB);
    }
    printf("%c\n", SVRB);
}

void BottomBorder(int width) {
    printf("%c", SBLC);
    for (int i = 0; i < width; i++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHBB);
    }
    printf("%c%c%c%c", SHSB, SHSB, SHSB, SBRC);
}

int main() {
    int choix;
    int const jouer = 1;
    int const regle = 2;
    int const parametre = 3;
    int const quitter = 0;

    for (int row = 0; row < SIZE; row++) {
        if (row == 0) // first line
        {
            TopBorder(SIZE);
        }
        else
        {
            HorizontalBars(SIZE);
        }
        VerticalBars(SIZE);
    }
    BottomBorder(SIZE);

    printf("Bienvenue dans le Menu du jeu\n\n");

    printf("Taper %d pour jouer\n", jouer);
    printf("Taper %d pour afficher les regles\n", regle);
    printf("Taper %d pour les parametres\n", parametre);
    printf("Taper %d pour quitter le jeu\n\n", quitter);
    scanf("%d", &choix);

    if (choix == regle)
        printf("2. Regle de la Bataille navale\n"
               "Une grille de jeu numerotee de 1 a 10 horizontalement et de A a J verticalement.\n"
               "1 porte avion (5 cases)\n"
               "1 croiseur (4 cases)\n"
               "1 contre torpilleur (3 cases)\n"
               "1 sous-marin (3 cases)\n"
               "1 torpilleur (2 cases)");

    return 0;
}