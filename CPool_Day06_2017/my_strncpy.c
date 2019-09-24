/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** strncpy
*/

char *my_strncpy(char *dest, char const *src , int n)
{
	int i = 0;
	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	if(n > 0)
		*(dest + 1) =* '\0';
	return(dest);
	
}
