// exo 1
void affiche(int *t, int n, int i){
    if (i == n){
        return;
    }
    printf("%d", t[0]);
    affiche(t+1, n, i+1);
}
