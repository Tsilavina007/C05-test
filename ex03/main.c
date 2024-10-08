#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void) {

    printf("\n2**2 = 4 :           => your result = %d", ft_recursive_power(2, 2));
    printf("\n2**3 = 8 :           => your result = %d", ft_recursive_power(2, 3));
    printf("\n0**1 = 0 :           => your result = %d", ft_recursive_power(0, 1));
    printf("\n1**0 = 1 :           => your result = %d", ft_recursive_power(1, 0));
    printf("\n4**0 = 1 :           => your result = %d", ft_recursive_power(4, 0));
    printf("\n10**10 = 1410065408 :=> your result = %d", ft_recursive_power(10, 10));
    printf("\n0**0 = 1 :           => your result = %d", ft_recursive_power(0, 0));

    return 0;
}   