
#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nb) {
	if (nb < 0) 
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10) 
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) ft_putchar(nb + 48);
}

void	ft_print_comb2(void)
{
	int	x1;
	int	x2;

	x1 = 0;
	while (x1 <= 98)
	{
		x2 = x1 + 1;
		while (x2 <= 99)
		{
			ft_putnbr(x1);
			write (1, " ",  1);
			ft_putnbr(x2);
			if (x1 == 98 && x2 == 99)
				write (1, "\n", 1);
			else
				write (1, ", ", 2);
			x2++;
		}
	x1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
