/*
** EPITECH PROJECT, 2017
** my_compute_power_it
** File description:
** compute power
*/

int my_compute_power_it (int nb, int p)
{
	int	b = nb;
	
	if ( nb == 0)
		return(0);
	if ( p == 0)
		return(1);
	while (p != 1) {
		nb = nb * b;
		p--;
	}
	return(nb);
}
