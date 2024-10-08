#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void) {
    int nb1 = 1;
    int nb2 = -3;
    int nb3 = 3;
    int nb4 = 4;
    int nb10 = 10;
    int nb121 = 121;
    int nb0 = 0;

    printf("\n1! = 1 :        => your result = %d", ft_iterative_factorial(nb1));
    printf("\n-3! = 0 :       => your result = %d", ft_iterative_factorial(nb2));
    printf("\n3! = 6 :        => your result = %d", ft_iterative_factorial(nb3));
    printf("\n4! = 24 :       => your result = %d", ft_iterative_factorial(nb4));
    printf("\n10! = 3628800 : => your result = %d", ft_iterative_factorial(nb10));
    printf("\n121! = 0 :      => your result = %d", ft_iterative_factorial(nb121));
    printf("\n0! = 1 :        => your result = %d", ft_iterative_factorial(nb0));

    return 0;
}   