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