#include <stdio.h>
#include <stdlib.h>
#define N 10
typedef int Tab[N];

void f(Tab t, int n){
    int b=1, j=n, i;
    while(b==1)
    {
        b=0;
        i=0;
        while(i<j)
        {
            if(t[i]>t[i+1])
               {
                   permute(t,i,i+1);
                    b=1;
               }
            i++;
        }
        j--;
    }
}

int rechDicho(Tab t, int c, int g, int d){
    int res = -1;
    if (g < c)
    {
        if (t[g] == d)
        {
            res = g;
        }
        else
        {
            res = rechDicho(t, c, g+1, d);
        }
    }
    return res;
};
//exo 1
int indiceMin(int tableau[], int tailleTab){
    int i,j=0;
    for (i = 0;i<tailleTab;i++){ //
        if (tableau[j] > tableau[i+1]) {
            j = i+1;
        }
    }
    return j;
}
//exo 2
int valeurMin(int tableau[], int tailleTab, int i, int j){
    for (i = 0;i<tailleTab;i++){ //
        if (tableau[j] > tableau[i+1]) {
            j = i+1;
        }
    }
    return j;
}

void permute(int tableau[],int i, int j){
    int temporaire;
    temporaire = tableau[i];
    tableau[i] = tableau[j];
    tableau[j] = temporaire;
}

void afficheTab(int tableau[], int tailleTab)
{
    int i;
    for(i=0;i<tailleTab;i++)
    {
        printf("%d ",tableau[i]);
    }
    printf("\n");
}

int main(){
    Tab t1 = {3, 17, 9, 15, 2, 7, 10, 9, 8, 12};

   printf("L'indice de la valeur 15 est %d\n", rechDicho(t1, N, 0, 15));
   printf("L'indice de la valeur min est %d \n", indiceMin(t1, N));
   printf("L'indice de la valeur min entre i et j est %d \n", valeurMin(t1, N, 0, 10));
   printf("Avant permute : \n");
   afficheTab(t1, N);
   permute(t1,5,0);
   printf("Après permute : \n");
   afficheTab(t1, N);
   f(t1, 9);
   afficheTab(t1, 9);
}