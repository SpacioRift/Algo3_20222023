//exo 4
void indicesDesc(Tab t, int n , int i){
    if (i >= 0)
    {
        printf("t[%d]=%d\n", i, t[i]);
        indicesDesc(t, n, i-1);
    }
}