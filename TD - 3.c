#include <stdio.h>
#include <stdlib.h>

typedef char chaine[15];

 void longueur(chaine * c){
    int i = 0;
    while(c[i] ! '0'){
        i++;
    };
    printf("longueur de la chaine : %d \n", i);
};

int main(){
    chaine c;
    printf("Entrez votre prénom :");
        scanf("%s", &c);
    longueur(&c);
};