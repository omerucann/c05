#include <stdio.h>

int ft_fibonacci(int index)
{
    if(index < 0)
    {
        return (-1);
    }
    if(index == 1 || index == 2)
    {
        return (1);
    }
    else if(index == 0)
    {
        return (0);
    }
    return(ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int main()
{
    int a = 6;

    int b = ft_fibonacci(a);

    printf("%d", b);
}