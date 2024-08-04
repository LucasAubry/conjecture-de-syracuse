#include "stdio.h"

int	conjecture_de_syracuse(unsigned long long	i, unsigned long long nbr_detape)
{
	while (i != 1)
	{
		if (i == 0)
			return (1);
		if (i % 2 != 0)
			i = (i * 3) + 1;
		else
			i = i / 2;
		nbr_detape++;
		//printf(" %llu, ", i);
	}
	return (0);
}

int	main(void)
{
	unsigned long long	i;
	unsigned long long nbr_detape = 0;

	i = 1;
	while (1)
	{
		if (conjecture_de_syracuse(i, nbr_detape))
		{
			printf("VICTOIRE LE NOMBRE EST %llu\n, et le nombre de d'etape est %llu", i, nbr_detape);
			return (1);
		}
		printf(" %llu, ", i);
		i++;
	}
}
//nombre max tester est 295147905179352825856
