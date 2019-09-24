/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** strdup
*/

#include <stdlib.h>

char *my_strdup( char const *src)
{
	int	i = 0;
	char	*a;
	int	j = 0;

	while (src[i] != '\0')
	{
		i++;
	}	
	a = malloc(sizeof(char) * (i + 1));
	if (a == 0)
		return(NULL);
	a[j] = src[j];
	while (src[j] != '\0')
	{
		a[j] = src[j];
		j++;		
	}
	a[j] = '\0';
	
	return(a);
}
