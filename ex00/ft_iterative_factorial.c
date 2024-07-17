#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i; 
    int result; // faktoriyel sonucunu bu değişkende tutuyorum

    i = 1;
    result = 1; // i ye ve resulta geçiçi değişkenler atadım

    if(nb < 0)
    {
        return (0);  // bu döngü içinde eğer sayı sıfırdan küçükse faktöriyeli alınmayacak ve 0 döndürecek.
    }
    else if(nb == 0)
    {
        return (1); // eğer 0 girilirse faktöriyeli 1 olduğu için direkt 1 döndürecek
    }
    while(nb >= i)
    {
        result = result * i; // fonksiyon aldığımız için i her adımda bir sonraki sayıya geçiyor örneğin 3 sayısı için önce gelecek
        i++;  // 1 yazdıracak sonra i++ yapıp 2 ye geçecek 2 = 2*1 = 2 sonra i++ yapacak 3 = 3*2 den 6 olacak nb artık i ile eşit 
        // için i++ yapmayacak ve döngü sonlanacak
    }
    
    return (result);
}
int main()
{
    int a = 3;
    int b = ft_iterative_factorial(a);
    printf("%d", b);
}