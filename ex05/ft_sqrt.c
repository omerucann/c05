#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 1;

    if(nb > 0)
    {
        while(i < nb / i)
        {
            i++;
        }
        if(i * i == nb)
        {
            return (i);
        }
    }
    return (0);
}

int main()
{
    int a = 49;

    int b = ft_sqrt(a);

    printf("%d", b);
}