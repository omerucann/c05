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

int ft_find_next_prime(int nb)
{
    unsigned int i;

    i = nb;
    while (ft_is_prime(i) == 0)
    {
        i++;
    }
    return (i);
    
}

int main()
{
    int a = 9;
    int b = ft_find_next_prime(a);

    printf("%d", b);
}