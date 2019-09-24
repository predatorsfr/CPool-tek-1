/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** strncat
*/

char *strncat (char *dest, const char *src, size_t n)
{
	int	i = 0;
	int	j = 0;

	while (dest[i] != '\0') {
		i++;
	}
	while (src[j] !='\0' && i < n)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}
