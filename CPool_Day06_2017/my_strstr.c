/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** strstr
*/

char *my_strstr( char *str, char const *to_find)
{
	int i = 0;
	
	while (to_find[i] != '\0')
	{
		if (to_find[i] != str[i])
		{
			return( my_strstr(str + 1, to_find));
			       i++;
			       }
				return(str);
				if(str[0] == ('\0'))  return(0);
	}
}
