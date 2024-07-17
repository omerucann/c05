#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result;
    int i;

    i = power;
    result = 1;

    if(power < 0)
    {
        return (0);
    }
    else if(power == 0)
    {
        return (1);
    }
    while(i > 0)
    {
        result = result * nb;
        i--;
    }
    return (result);
}

int main()
{
    int a = 3;
    int b = 3;

    int c = ft_iterative_power(a, b);

    printf("%d", c);

}