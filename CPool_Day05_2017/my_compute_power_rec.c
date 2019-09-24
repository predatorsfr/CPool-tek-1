/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** power rec
*/

int	my_compute_power_rec(int nb, int p)
{
	if (nb == 0 || p < 0)
		return(0);
	if (p == 0)
		return(1);
	return (nb * my_compute_power_rec(nb, p - 1));
}
