/*
** EPITECH PROJECT, 2017
** my_compute_factorial_rec
** File description:
** facto rec
*/
int my_compute_factorial_rec (int nb)
{
	if(nb == 0)
		return(1);
	nb = nb * my_compute_factorial_rec(nb - 1);
	return (nb);
}
