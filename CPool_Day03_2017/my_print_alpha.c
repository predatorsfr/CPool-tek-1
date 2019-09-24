/*
** EPITECH PROJECT, 2017
** my_print_alpha.c
** File description:
** print alpha
*/
	
int	my_print_alpha (void)
{
	int	a = 97;
	int	z = 123;
	
	while ( a < z) {
		my_putchar(a);
	        a = a + 1;
	}
	my_putchar('\n');
	return (0);
}
