#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;

    if(nb <= 1)
    {
        return (0);
    }
    while(i < nb)
    {
        if(nb % i == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    int a = 43;

    int b = ft_is_prime(a);

    printf("%d", b);
}