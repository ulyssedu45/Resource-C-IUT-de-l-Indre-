/*****************************************************************************************

TUTO IUT: Les pointeur, BALLESTEROS Ulysse, 2018-2019
Les_pointeur/main.c
*****************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#include <time.h> // pour la fonction rand()

#define TAILLE_DE_MON_TABLEAU 10


// prototype
void remplireMonTableau(int *pointeurSurMonTableau);
void changerMonChar(char *pointeurSurMonChar);


int main()
{
    srand(time(NULL)); // init du seed pour les rand()



    // on créer le tableau de type int -> ( les type bytes, char, etc sont possible aussi )
    // mon tableau est actulement vide
    int monTableau[TAILLE_DE_MON_TABLEAU];

    // le & dit qu'on envoie l'addresse de montableau
    remplireMonTableau(monTableau);

    //affichage des valeur mise dans monTableau
    for(int i = 0; i < TAILLE_DE_MON_TABLEAU; i++){

        printf("%d\n", monTableau[i]);

    }

    /*********************************************************************/
    printf("\n");
    /*********************************************************************/

    // ici on créer MonChar et on lui donne 'a' comme valeur
    char monChar = 'a';

    //on affiche monChar dans la console
    printf("%c\n", monChar);

    //on appel changerMonChar et on lui envoie l'adresse de monChar (grace au &)
    changerMonChar(&monChar);

    //on affiche monChar dans la console
    printf("%c\n", monChar);
    return 0;
}

void remplireMonTableau(int *pointeurSurMonTableau){

    //une boucle qui va pacourire tout le tableau
    //la taille du tableau est de 10 element donc les index vont de 0 à 9 -> (0 -> nombre d'element-1)
    for(int i = 0; i < TAILLE_DE_MON_TABLEAU; i++){

      pointeurSurMonTableau[i] = 1;// on met des nombre aléatoire

    }

}

void changerMonChar(char *pointeurSurMonChar){

    *pointeurSurMonChar = 'b';// ici on change directement monChar

}
