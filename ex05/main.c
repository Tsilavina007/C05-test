#include <stdio.h>

int ft_sqrt(int index);

int main(void) {

    printf("\nft_sqrt(0) = 0  :  => your result = %d", ft_sqrt(0));
    printf("\nft_sqrt(1) = 1  :  => your result = %d", ft_sqrt(1));
    printf("\nft_sqrt(2) = 0  :  => your result = %d", ft_sqrt(2));
    printf("\nft_sqrt(3) = 0  :  => your result = %d", ft_sqrt(3));
    printf("\nft_sqrt(4) = 2  :  => your result = %d", ft_sqrt(4));
    printf("\nft_sqrt(8) = 0  :  => your result = %d", ft_sqrt(8));
    printf("\nft_sqrt(9) = 3  :  => your result = %d", ft_sqrt(9));
    printf("\nft_sqrt(15) = 0  :  => your result = %d", ft_sqrt(15));
    printf("\nft_sqrt(25) = 5  :  => your result = %d", ft_sqrt(25));
    printf("\nft_sqrt(125) = 0  :  => your result = %d", ft_sqrt(125));
    printf("\nft_sqrt(2147302921) = 46339  :  => your result = %d", ft_sqrt(2147302921));
    return 0;
}   
