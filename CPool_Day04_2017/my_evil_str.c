/*
** EPITECH PROJECT, 2017
** my_evil_str
** File description:
** evil str
*/
char	*my_evil_str(char *str)
{
	int	b = 0;
	int	c = 0;

	c = my_strlen(str) - 1;
	while (b < c) {
		i = str([b]);
		str[b] = str[c];
		str[c] = i;
		b = b + 1;
		c = c - 1;
	}
}
