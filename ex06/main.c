#include <stdio.h>

int ft_is_prime(int index);

int main(void) {

    printf("\nft_is_prime(0) = 0  :  => your result = %d", ft_is_prime(0));
    printf("\nft_is_prime(1) = 0  :  => your result = %d", ft_is_prime(1));
    printf("\nft_is_prime(2) = 1  :  => your result = %d", ft_is_prime(2));
    printf("\nft_is_prime(3) = 1  :  => your result = %d", ft_is_prime(3));
    printf("\nft_is_prime(4) = 0  :  => your result = %d", ft_is_prime(4));
    printf("\nft_is_prime(5) = 1  :  => your result = %d", ft_is_prime(5));
    printf("\nft_is_prime(9) = 0  :  => your result = %d", ft_is_prime(9));
    printf("\nft_is_prime(15) = 0  :  => your result = %d", ft_is_prime(15));
    printf("\nft_is_prime(37) = 1  :  => your result = %d", ft_is_prime(37));
    printf("\nft_is_prime(811) = 1  :  => your result = %d", ft_is_prime(811));
    printf("\nft_is_prime(1999) = 1  :  => your result = %d", ft_is_prime(1999));
    printf("\nft_is_prime(1998) = 0  :  => your result = %d", ft_is_prime(1998));

    return 0;
}   