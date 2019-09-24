/*
** EPITECH PROJECT, 2017
** my_print_alpha.c
** File description:
** print alpha
*/
int	my_print_revalpha (void)
{
	int	a = 122;
	int	z = 96;
	
	while ( a > z) {
		my_putchar(a);
	        a = a - 1;
	}
	my_putchar('\n');
	return (0);
}
