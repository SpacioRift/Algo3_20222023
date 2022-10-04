#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef struct{
    char nom[15], prenom[15];
    int code;
    float salaire;
}Employe;

void saisieEmploye(Employe * e){
    printf("Entrez votre prénom : ");
        scanf("%s \n", (*e).nom);
    printf("Entrez votre prénom : ");
        scanf("%s \n", (*e).prenom);
    printf("Entrez votre code : ");
        scanf("%d \n", (*e).code);
    printf("Entrez votre salaire : ");
        scanf("%f \n", (*e).salaire);
    
};

void afficherEmploye(Employe * e){
    printf("Nom : %s \n", (*e).nom);
    printf("Prénom : %s \n", (*e).prenom);
    printf("Code : %d \n", (*e).code);
    printf("Salaire : %f \n", (*e).salaire);
};

int main(){
    Employe e;
    saisieEmploye(&e);
    afficherEmploye(&e);
    
    return 0;
};
