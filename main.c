#include <stdio.h>
#define N 10

typedef int Tab[N];

int somme(Tab t, int n, int i )
{ int res=0;
printf ("Calcul de la somme a partir de l’indice %d :\n",i);
if (i<n)
{ printf ("\t appel du calcul de la somme a partir de l’indice %d :\n",i+1);
res=t[i]+somme(t,n,i+1);
printf ("\t addition avec t[%d]\n",i );
}
printf ("\t Somme a partir de l’indice %d = %d\n\n",i,res);
return res ;
}

// exo 1
void affiche(int *t, int n, int i){
    if (i == n){
        return;
    }
    printf("%d", t[0]);
    affiche(t+1, n, i+1);
}

//exo 2
int sommeDeux(Tab t, int n){
    int res = 0;
    if (n > 0){
        res = t[n - 1] + sommeDeux(t, n-1);
    }
    return res;
}

//exo 3
int valeurSup(Tab t, int n , int i, int v){
    int res = 0;
    if (i < n)
    {
        if (t[i] > v)
        {
            res=1+valeurSup(t, n, i+1, v);
        }
        else
        {
            res=valeurSup(t, n, i+1, v);
        }
    }
    return res;
}

//exo 4
void indicesDesc(Tab t, int n , int i){
    if (i >= 0)
    {
        printf("t[%d]=%d\n", i, t[i]);
        indicesDesc(t, n, i-1);
    }
}

//exo 5
int rechNonTrie(Tab t, int n , int i, int v){
    int res = -1;
    if (i < n)
    {
        if (t[i] == v)
        {
            res = i;
        }
        else
        {
            res=rechNonTrie(t, n, i+1, v);
        }
    }
    return res;
}

//exo 6
int rechDicho(Tab t, int n , int i, int v){
    int res = -1;
    if (i < n)
    {
        if (t[i] == v)
        {
            res = i;
        }
        else
        {
            res = rechDicho(t, n, i+1, v);
        }
    }
    return res;
}

int main(){ 
Tab t1 = {4,2,8,0,7,3,1,5,9,6};
Tab t2 = {0,1,2,3,4,5,6,7,8,9};
printf ("La somme des entiers du tableau t1 = %d\n",somme(t1, N, 0));
affiche(&t1, N, 0);
printf("La somme des entiers du tableau t1 est %d\n",sommeDeux(t1, N));
printf("Le nombre d'elements du tableau de valeur superieur a 5 est %d\n",valeurSup(t1, N, 0, 5));
indicesDesc(t1, N, N-1);
printf("L'indice de la valeur 7 est %d\n",rechNonTrie(t1, N, 0, 7));
printf("L'indice de la valeur 5 est %d\n",rechDicho(t2, N, 0, 5));
return 0;
}
