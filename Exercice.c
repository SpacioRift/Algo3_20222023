include <stdio.h>

int addition(int nb1, int nb2)
{
    int result1;
    result1 = (nb1+nb2);
    return(result1);
}

int divise(int nb3, int nb4)
{
    int result2;
    result2 = (nb3/nb4);
    return(result2);
}

int main ()
{
    printf("%d",addition(2,6));
    printf("\n");
    printf("%d",addition(10,30));
    printf("\n");
    printf("%d",divise(6,2));
    return 0;
}