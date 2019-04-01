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
#define TOUCHE 176 // ░
#define COULE 219 // █
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
int grille[SIZE][SIZE] = {{3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                          {3, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                          {3, 0, 0, 3, 3, 3, 0, 0, 4, 5},
                          {0, 0, 2, 2, 0, 0, 0, 1, 4, 5},
                          {0, 0, 0, 0, 0, 0, 0, 0, 4, 5},
                          {4, 0, 0, 0, 0, 0, 0, 0, 4, 5},
                          {4, 0, 0, 0, 0, 0, 0, 0, 0, 5},
                          {4, 0, 0, 0, 0, 0, 2, 0, 0, 0},
                          {4, 0, 0, 0, 0, 0, 2, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0, 2, 2}};

// Cette fonction sert à ne pas faire planter le programme en utilisant des lettres
void vider_buffer() {

    int c;
    do {
        c = getchar();
    } while (c != EOF && c != '\n');
}

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
    // %3d est utliser pour dire que dans l'espeace il y a trois espace pour ecrire
    printf("%3d", a);
    int vcase;
    char charcase;
    for (int i = 0; i < width; i++) {
        vcase = grille[a - 1][i];
        charcase = ' ';
        // boucle pour touche affichage ░
        if (vcase > 10 && vcase < 20) {
            charcase = TOUCHE; // ░;
        }
        // boucle pour a l'eau affichage .
        if (vcase < 0) {
            charcase = '.';
        }
        // boucle pour coule affichage █
        if (vcase > 20 && vcase < 30) {
            charcase = COULE; // █
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

void playgame() {
    int test = 0;
    while (test != 1) {
        printf("choississez une cible :\n");
        // afficher la grille
        printf("Voici votre grille\n");
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

        // demandez des coordonnees de tirs
        char tir[5];
        printf("Faites votre Tirs ET TOUCHE UN BATEAU !!!\n");
        printf("Entrez vos coordonnees :");
        scanf("%s", tir);
        int col = tir[1] -49; // ligne
        int li = tir[0] -65; // colonne
        int valcase = grille[col][li];
        if(valcase == 0){
            grille[col][li] = -1;
            printf("a l'eau\n");
        }
        else if(valcase > 1 && valcase < 10){
            grille[col][li] = valcase > 1 && valcase < 10;
            printf("Touche");
        }
        else{

            grille[col][li] = valcase > 20 && valcase < 30;
            printf("Touche Coule");

        }
        printf("%d %d %d", li, col, valcase);

        /*int col2 = tir[2] -51; // conlonne
        int li2 = tir[1] -67; // ligne
        int valcase2 = grille[col][li];
        if(valcase2 == 0){
            grille[col][li] = vcase > 10 && vcase < 20;
        }*/
        // appliquer les tirs sur le modele
        char charcase;
        int hits[10];
        for (hits[10] = 0; hits[10] < 1; hits[10]++) {
            if (hits[10] == 1) {
                printf("touche\n");
                charcase = TOUCHE;
            }

        }
    }
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
        while (!(choix == 1 || choix == 2 || choix == 3 || choix == 0)) {
            vider_buffer();
            // Cela sert a nettoyer les réponses
            system("cls");
            printf("Bienvenue dans le Menu du jeu\n\n");
            printf("Taper %d pour jouer\n", jouer);
            printf("Taper %d pour afficher les regles\n", regle);
            printf("Taper %d pour les parametres\n", parametre);
            printf("Taper %d pour quitter le jeu\n\n", quitter);

            scanf("%d", &choix);
        }


        // Numero 1 = jouer
        if (choix == jouer) {
            playgame();
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
            printf("3. affichage des parametres de la grille\n\n");

        }

        // Numero 0 = quitter le jeu
        if (choix == quitter) {
            return 0;
        }
        // boucle pour ne pas utiliser d'autre nombre que ceux proposer pour ne pas faire planter le programme
        if (choix > 3) {
            printf("Mettez un veritable numero :)\n\n");
        }
    }
}