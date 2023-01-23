#include <stdio.h>

/*int main (void)
 {
 printf("Bonjour tout le MONDE :p \n ");
 return 0;
 }
 
 //on a une fonction nommée main, elle n'as pas de paramètre donc on écris void, une fonction en c ne doit faire qu'une chose et retourne toujours qqch. étant donné que l'on retourne 0, la fonction est de type intéger.printf, sert a afficher qqch et est inclus dans la librairie. ! voila voila La fonction main est obligatoire pour un programme c, C'EST le point de départ de notre programme
 // commandes utilisées :
 // pour changer de direction : cd cd /Users/yasmine/Desktop/dossierTest
 // pour crée l'executif de mon programme: gcc main.c -o hello,
 // pour le lancer dans mon terminal : ./hello
 */
 
 
 
/* int main (void){
 //Déclaration et affectation d'une variable de type int
 int airDuCarre = 0;
 float prixReservation= 2.77;
 signed char = 124;
 signed char = "A"; //= 65 table ascii ca prends moins de place ;)
 
 airDuCarre = 12; // on réaffecte une nouvelle valeur a la variable air du carré toujours un entier.
 
 float nombre = 124.22;
 int nombreEntier = (int)nombre; // c'est plus facile pour un affichage par exemple, ca s'apelle un cast donc une conversion de type, cette varaible stock donc 124.
 
 Les drapeaux qui permettents d'afficher des valeurs selon leur type !
 %d : int
 %f : double et float
 %c : char
 %s : chaine de caractères (string)
 
 
 printf("Le nombre est %d ou %.2f \n", nombreEntier, nombre );
 //.CHiffre pour choisir le nombre de chiffre apres la virgule dans un float :p a afficher
 const float PI = 3.14;
 //c'est pour ne jamais modifier la valeur de PI, elle est immuable grace au mots clés const. quand on met une variable en const, on l'écris en majuscule.
 register int chiffre = 12;
 //à l'poque on avait tout interet de dire que cette variable n'allait pas être stockée dans la RAM mais dans les registres , cela permettait de la traiter en priorité
 volatile int autreChiffre = 10;
 // en revanche cela disait que cette variable ne devait jamais passé par les registres. dans le cas ou certains périphériques n'ai pas accès au regisres comme les claviers ou la souris :p
 printf("PI = %.2f\n", PI);
 return 0;
 }
 
 int main (void)
 {
 int ageUtilisateur = 21;
 printf("Quel age avez vous ?");
 scanf("%d,", &ageUtilisateur);
 Tout est stocké dans des adresse, notre variable devient une adresse seulement quand on compile, avant ca elle n'est pas rattachée a la valeur donnée. Donc simplement donné le nom de la variable dans un scanf n'est pas suffisant; on veut recuperer l'adresse pour pouvoir y rentrer des données et pas le contenu.
 ageutilisateur = contenu de la variable (21);
 &ageutilisateur = adresse ou est stockée la variable
 printf("Vous avez %d ans \n", ageUtilisateur);
 return 0;
 }
 
int main (void){
    int calcul = 6 + 4;
    
    int nb1 = 34;
    int nb2 = 90;
    printf("%d \n", nb1 + nb2);
    printf("%d \n", calcul);
    //ou printf("%d \n", 6+4 );
    
    int niveauJoueur = -1;
    
    
    printf( "Choissisez le niveau de départ : ");
    scanf("%d’",&niveauJoueur);
    printf("Niveau de départ : %d\n",niveauJoueur);
    niveauJoueur++;
    
    printf("Niveau actuel : %d\n", niveauJoueur);
    return 0;
    
    
}



int main (void){
    
    int nombre = 8;
    
    if (nombre == 0) {
        printf("Ce nombre vaut bien 0 \n");
    }else if (nombre < 10 || nombre < 5) {
        printf("Non, ce nombre ne vaut pas 0. \n");
    }else {
        printf("blablka\n");
    }

    switch(nombre){
        case 0:
            printf("tu as 0 ans \n");
            break;
            
        case 8:
            printf(" age vaut 8 \n");
            break;
            
        default:
            printf("Tu as ni 0 ni 8 ans \n");
            break;
    }
     
    
    (nombre == 7) ? printf("tu as 7 ans \n"): printf("non tu n'as pas 7 ans \n");
    
    int age = 88;
    
    age = (nombre == 88) ? 1 :0;
    
    printf("il a  : %d \n",age);
    

    
    return 0;
}


int main (void){
    int i = 0;
   
        
    for(i = 0; i < 5 ; i++){
        printf("Bonjour \n");
    }
    
    //Dans une boucle for il y a d'abord 3 étapes. La premiere étant l'initialisation (ici on dit que i est égal a 0). La deuxieme est la condition d'arret, c'est le tant que un peu comme le while. La dernière étape est le pas, donc l'incrémentation ou la décrementation a faire. C'est un combiné d'une boucle while + décla de var. Elle sert notamment à faire des parcours. Il y a d'autres possibilitées dans son paramétrages qu'on ne voit pas encore.
    
    return 0;
 /Users/yasmine/Desktop/dossierTest/player.h
}


//Quand une fonction n'as pas de paramètre, on mets le mot-clé void.
//


int initBall(int posX);
void bonjour(void);

int main (void){
    
    int balleX;
    // cette variable n'existe que dans la fonction main, posX n'existe pas ici
    
    balleX = initBall(balleX);
    
    printf("Position de la balle initialisée à : %d \n",balleX);
    
    bonjour();
    return 0;
    
}
int initBall(posX){
    posX = 150;
    return posX;
}
void bonjour(void){
    printf("Bonjour\n");
}

#include "player.h"

int main(void)
{
    int niveau = 15;
    
    printf("Niveau actuel : %d\n", niveau);
    
    niveau = augmenteLevel();
    printf("Niveau après reset : %d\n", augmenteLevel());

    printf("Niveau après reset : %d\n", niveau);
    return 0;
}


#define TVA 20
//permet de definir qqch notamment une constante. très rapide, utile dans les tableaux, il ne sert pas a la compilation mais seulement pendant l'étape de préprocessing. Ici TVA seras toujours remplacé par la valeur attribuée ici 25.
#define print printf
#define LONGUEUR 12
#define LARGEUR 22
#define AIRE (LONGUEUR * LARGEUR)
int main (void){
    int prixHT = 15;
    int prixTTC = 0;
    
    prixTTC = prixHT + (prixHT * TVA / 100);
    print("Nous avons remplacé le nom de printf \n");
    print("voila la taille de l'aire : %s \n",__FILE__);
    return 0;
}


void echangeFunc (int *ptNb1, int *ptNb2){
    // valeur de la variable pointée, ne pas ounblier de préciser le type
    int temporaire = 0;
    
    temporaire = *ptNb2;
    *ptNb2 = *ptNb1;
    *ptNb1 = temporaire;
    
}
int main (void){
    int nombreA = 15;
    int nombreB= 28;
    
    int *ptNbA = &nombreA;
    int*ptNbB = &nombreB;
    printf("AVANT : A = %d et B = %d \n", nombreA, nombreB);
    echangeFunc(ptNbA, ptNbB);
    //adresse du pointeur
    printf("APRÈS : A = %d et B = %d \n", nombreA, nombreB);
}

#define TAILLE_TAB 5
void afficher_tableau(int *tab, int taille);

int main (void){
    //initialisation d'un tableau
    int tableau[TAILLE_TAB] = {5};
    int i;
    afficher_tableau(tableau,TAILLE_TAB);
    printf("\n \n");
    tableau[4]= 2;
    afficher_tableau(tableau,TAILLE_TAB);
    return 0;
}
void afficher_tableau(int *tab, int taille){
    int i;
    for(i = 0; i < taille; i++){
        printf("[%d]", tab[i]);
    }
}

#define NOMBRE_LIGNES 3
#define NOMBRE_COLONNES 2

int main (void){
    int damier [NOMBRE_LIGNES][NOMBRE_COLONNES] = {{1, 2},{3, 4},{5, 6}};
int i, j;
    for (i=0; i < NOMBRE_LIGNES;i++) {
        for(j= 0; j< NOMBRE_COLONNES; j++)
            printf("Elements d'indices : [%d][%d]= %d \n",i,j,damier[i][j]);
    }

return 0;
}
 */
#include <string.h>


//la fonction qui trouve le plus grand parmi trois nombres entiers
int maxi3 (int a, int b, int c);
int main (void){
    printf("Le plus grand nombre est %d \n",maxi3(2,9,3));
    printf("Le plus grand nombre est %d",maxi3(78,2,9));
}
int maxi3 (int a, int b, int c) {
    if ( a < b || c < b) {
       return b;
    }
    else if ( b < a || c < a) {
       return a;
    }else {
        return c;
    }
}
