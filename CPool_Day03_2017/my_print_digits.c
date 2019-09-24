/*
** EPITECH PROJECT, 2017
** my_print_digits
** File description:
** print digits
*/
int	my_print_digits(void)
{
	int	a = 48;
	int	z = 58;
	
	while ( a != z) {
		my_putchar(a);
		a = a + 1;
	}
	my_putchar('\n');
	return (0);
}
