/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** get nbr
*/

#include <unistd.h>

int my_putchar(char c)
{
	write(1, &c, 1);
}
int my_getnbr(char const *str)
{
	static int sign = 1;
	int nbr;
	int i;
	int j = 0;

	if (*str == '0' || *str == '+')
	{
		if (*str == '+')
			sign = 1;
		return (my_getnbr(str + 1));
	}
	else if (*str == '-')
	{
		while (*str == '-') {
			str++;
			j++;
		}
		str--;
		if (j % 2 == 0)
			sign = 1;
		else
			sign = -1;
		return (my_getnbr(str + 1));
	}
	nbr = 0;
	i = -1;
	while (str[++i] != '\0' && !(str[i] < '0' || str[i] > '9'))
		nbr = (nbr * 10) + (str[i] - '0');
	return (sign * nbr);
}

int main (void)
{
	char *mot = '9';
	my_getnbr(mot);
	return(0);
}
