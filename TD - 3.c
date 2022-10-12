#include <stdio.h>
#include <stdlib.h>

void longueur(char* chaine){
    printf("%s", chaine);
    int i = 0;
    while(chaine[i] != '\0'){
        i++;
    };
    printf("longueur de la chaine : %d \n", i);
};

void afficheInverse(char* chaine){
    int i = longueur(chaine) -1;
    while (i>=0){
        printf("%c", chaine[i]);
        i--;
    }
};

int equalChain(char* chaine, char* otherChain){
    int i=0;
    while(chaine[i] != '\0' && otherChain[i] == '\0'){
        if(chaine[i] != otherChain[i]){
            return 0;
        }
        i++
    }

    if(chaine[i] == '\0' && otherChain[i] == '\0'){
        return 1;
    }ele{
        return 0;
    }
};

int main(){
    char chaine[25];
    char otherChain[25];
    printf("Entrez votre prénom :\n")
        scanf("%c", &chaine);
    printf("Entrez un autre prénom :\n");
        scanf("%c", &otherChain);
    longueur(chaine);
    longueur(otherChain);
    afficheInverse(chaine);
    afficheInverse(otherChain);
    printf("\n");

    if(equalChain(chaine, otherChain) == 1){
    printf("Les deux chaines sont égales \n");
    }else{
        printf("Les deux chaines ne sont pas égales \n")
    }
    return 0;
};
