//exo 2
int sommeDeux(Tab t, int n){
    int res = 0;
    if (n > 0){
        res = t[n - 1] + sommeDeux(t, n-1);
    }
    return res;
}