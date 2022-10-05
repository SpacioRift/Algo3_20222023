#include <stdio.h>
#include <stdlib.h>

void longueur(char chaine){
    char *p;
    p = chaine;
    int i = 0;
    while(*p != '\0'){
        printf("%c \n", *p);
        i = i + 1;
        p++;
    };
    printf("longueur de la chaine : %d \n", i);
};

void afficheInverse(){

};

int main(int argc, char **argv){
    char * chaine = "";
    printf("Entrez votre prénom :");
        scanf("%s", &chaine);
    longueur(chaine);
};
