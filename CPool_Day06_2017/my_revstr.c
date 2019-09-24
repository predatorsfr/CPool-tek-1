/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** revstr
*/

char *my_revstr( char *str)
{
	int	i = 0;
	int	a = 0;
	
	while (str[i] != '\0')
		i++;
	while (str[i] != a)
		i--;
	return(str);
}
