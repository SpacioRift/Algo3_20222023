#include <stdio.h>
#include <stdlib.h>

// Question 1
int main() {
    int n;
    int *a;
    a = &n;

    printf("Entrez une valeurs :");
        scanf("%d", &n);
    printf("\n Valeur : %d \n Adresse de la valeur : %d \n", n, &a);

    return 0;
}

/*
//Question 2

int main() {
    char n;
    int *a;
    a = &n;

    printf("Entrez un caractère :");
        scanf("%c", &n);
    printf("\n Valeur : %c \n Adresse de la valeur : %d \n", n, &a);

    return 0;
}
*/

/*
//Question 3

void inverser_nombres(int *nombreA, int *nombreB)
{
    int temporaire = 0;

    temporaire = *nombreB;
    *nombreB = *nombreA;
    *nombreA = temporaire;
}

int mais(void)
{
    int nombreA = 25;
    int nombreB = 73;

    printf("Avant : A = %d et B = %d\n", nombreA, nombreB);
    inverser_nombres(&nombreA, &nombreB);
    printf("Après : A = %d et B = %d\n", nombreA, nombreB);

    return 0;
}
*/

/*
//Question 4

 void retourne(int *a, int *o, int *p, int *max, int *min)
{
* max = *a;
* min = *a;
    if(* max < *o && *o > *p)
        * max = *o;
    else if(* max > *p)
        * max = *a;
    else * max = *p;
    if(* min > *o && *o < *p)
        * min = *o;
    else if(* min < *p)
        * min = *a;
    else * min = *p;
}
void main()
{
    int a=50, o=20, p=350;
    int max = 0;
    int min = 0;
    printf("\n a = %d o = %d p = %d \n",a,o,p);
    retourne(&a, &o, &p, &max, &min);
    printf("\n Valeur la plus grande = %d \n Valeur la plus petite = %d",max,min);
}
*/