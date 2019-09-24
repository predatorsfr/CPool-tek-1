/*
** EPITECH PROJECT, 2017
** concat_params
** File description:
** concat
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return(i);
	
}

char *concat_params(int argc, char **argv)
{
	int	i = 0;
	int	a = my_strlen(str);
	char *str;
	int	j = 0;
	
	str = malloc(( i +1) * argc);

	while (argc[i] != '\0')
	{
		while(argv[i] [j] != '\0')
		{
			str[i] = argv[j];
			j++;
		}
		str[i] = '\n';
		i++;
	}
	return(str);
}

int main (int ac, char **av)
{
	my_putstr(concat_params(ac, av));
	return (EXIT_SUCCESS);
}
