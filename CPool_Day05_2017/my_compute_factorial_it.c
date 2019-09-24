/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it
** File description:
** facto it
*/

int	my_compute_factorial_it (int nb)
{
	int	a = 1;
	int	b = nb;

	if (nb <= 1) {
		return(1);
	}
	while (b >= 2 ) {
		a = a * b;
		b--;
	}
	return(a);
}
