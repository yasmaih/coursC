//
//  player.c
//  
//
//  Created by Yasmine Aichi on 14/01/2023.
//

#include <stdio.h>

int maxi3 (int a, int b, int c);
int maxi4 (int a, int b, int c, int d);
int maxi5 (int a, int b, int c, int d);
int main (void){
    printf("Le plus grand nombre est %d \n",maxi3(2,9,3));
    printf("Le plus grand nombre est %d \n",maxi4(7,88,2,0));
    printf("Le plus grand nombre est %d \n",maxi5(7,88,2,0));
    
}


//la fonction qui trouve le plus grand parmi trois nombres entiers ;
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

//la fonction qui trouve le plus grand parmi quatre nombres entiers
int maxi2 (int a, int b) {
    if ( a < b ) {
       return b;
    }
    else {
       return a;
    }
}

int maxi4 (int a,int b, int c, int d) {
    int firstMax2 = maxi2(a,b);
    int secondMax2 = maxi2(c,d);
    int finalMax4 = maxi2(firstMax2, secondMax2);
    return finalMax4;
}

//la fonction qui trouve le plus petit parmi cinq nombres entiers ;
int min2 (int a, int b) {
    if ( a < b ) {
       return a;
    }
    else {
       return b;
    }
}
//essaye avec un tableau go ma vie 
