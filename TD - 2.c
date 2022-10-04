#include <stdio.h>
#include <stdlib.h>

#define MAX 100;
typedef char tabEmploye[MAX];
typedef char Chaine[15];

typedef struct{
    char nom[15], prenom[15];
    int code;
    float salaire;
}Employe;

void saisieEmploye(Employe * e){
    printf("Entrez votre nom :");
        scanf("%s \n", (*e).nom);
    printf("Entrez votre prénom :");
        scanf("%s \n", (*e).prenom);
    printf("Entrez votre code :");
        scanf("%d \n", (*e).code);
    printf("Entrez votre salaire :");
        scanf("%f \n", (*e).salaire);
    
};

void afficherEmploye(Employe * e){
    printf("Nom : %s \n", (*e).nom);
    printf("Prénom : %s \n", (*e).prenom);
    printf("Code : %d \n", (*e).code);  //sort l'adresse de (*e).code
    printf("Salaire : %f \n", (*e).salaire);
};

void modifEmploye(Employe *e)
{
    printf("Entrez le nouveau nom de l'employe :\n ");
    scanf("%s", (*e).nom);
    printf("Entrez le nouveau prenom de l'employe :\n ");
    scanf("%s", (*e).prenom);
    printf("Entrez le nouveau code de fonction de l'employe :\n ");
    scanf("%d", (*e).code);
    printf("Entrez le nouveau salaire de l'employe :\n ");
    scanf("%f", (*e).salaire);
};

int main(){
    Employe e;
    saisieEmploye(&e);
    afficherEmploye(&e);
    modifEmploye(&e);
    afficherEmploye(&e);

    return 0;
};
