/*
** EPITECH PROJECT, 2017
** my_print_comb2
** File description:
** print comb 2
*/

int	my_print_comb2(void)
{
	int	a;
	int	b;
	
	a = 0;
	while (a <= 98){
		b = a + 1;
		while (b <= 99){
			my_putchar((a/10)+48);
			my_putchar((a%10)+48);
			my_putchar(' ');
	       		my_putchar((b/10)+48);
		       	my_putchar((b%10)+48);
			if ( a == 98)
				return (0);
			my_putchar(',');
			my_putchar(' ');
			b = b + 1;
		}
		a = a + 1;
	}
	return (0);
}
