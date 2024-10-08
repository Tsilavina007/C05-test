#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void) {

    printf("\nft_find_next_prime(0) = 0  :  => your result = %d", ft_find_next_prime(0));
    printf("\nft_find_next_prime(1) = 2  :  => your result = %d", ft_find_next_prime(1));
    printf("\nft_find_next_prime(2) = 2  :  => your result = %d", ft_find_next_prime(2));
    printf("\nft_find_next_prime(3) = 3  :  => your result = %d", ft_find_next_prime(3));
    printf("\nft_find_next_prime(4) = 5  :  => your result = %d", ft_find_next_prime(4));
    printf("\nft_find_next_prime(5) = 5  :  => your result = %d", ft_find_next_prime(5));
    printf("\nft_find_next_prime(9) = 11  :  => your result = %d", ft_find_next_prime(9));
    printf("\nft_find_next_prime(15) = 17  :  => your result = %d", ft_find_next_prime(15));
    printf("\nft_find_next_prime(35) = 37 :  => your result = %d", ft_find_next_prime(37));
    printf("\nft_find_next_prime(808) = 811  :  => your result = %d", ft_find_next_prime(811));
    printf("\nft_find_next_prime(1997) = 1999  :  => your result = %d", ft_find_next_prime(1999));
    printf("\nft_find_next_prime(2000) = 2003  :  => your result = %d", ft_find_next_prime(2000));

    return 0;
}   