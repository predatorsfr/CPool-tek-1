/*
** EPITECH PROJECT, 2017
** my_putsr
** File description:
** put sr
*/
int	my_putstr(char const *str)
{
	int	i = 0;
	
	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
}