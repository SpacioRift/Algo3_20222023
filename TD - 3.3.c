#include <stdio.h>

void saisie(int T[], int N)
{
    if (N>0)
    {
        saisie(T, N-1);
        scanf("%d", &T[N-1]);
    }
}

int somme(int T[], int N)
{
    if (N>0)
    {
        return somme(T, N-1) + T[N-1];
    }
    else
    {
        return 0;
    }
}

void remplacer(int T[], int N, int e)
{
    if (N>0)
    {
        remplacer(T, N-1, e);
        if (T[N-1] == e)
        {
            T[N-1] = 0;
        }
    }
}

int max(int T[], int N)
{
    if (N>1)
    {
        int maxNmoins1 = max(T, N-1);
        if (maxNmoins1 > T[N-1])
        {
            return maxNmoins1;
        }
        else
        {
            return T[N-1];
        }
    }
    else
    {
        return T[0];
    }
}

void minMax(int T[], int N, int *min, int *max)
{
    if (N>1)
    {
        int minNmoins1, maxNmoins1;
        minMax(T, N-1, &minNmoins1, &maxNmoins1);
        if (minNmoins1 < T[N-1])
        {
            *min = minNmoins1;
        }
        else
        {
            *min = T[N-1];
        }
        if (maxNmoins1 > T[N-1])
        {
            *max = maxNmoins1;
        }
        else
        {
            *max = T[N-1];
        }
    }
    else
    {
        *min = T[0];
        *max = T[0];
    }
}

int main()
{
    int T[10];
    int min, max;
    saisie(T, 10);
    printf("Somme : %d", somme(T, 10));
    remplacer(T, 10, 3);
    printf("Max : %d", max(T, 10));
    minMax(T, 10 , &min, &max);
    printf("Min : %d - Max : %d ", min, max);
    return 0;
}