/*
** EPITECH PROJECT, 2017
** cat 
** File description:
** cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 1;
	char taille[30];
	int j = 1;
	int fd = 0;

	if (argc == 1)
	{
		j = read(0, taille, 29);
		while (j > 0) {
			write(1, taille, j);
			j = read(0, taille, 29);
		}
		return(0);
	}
	while (i < argc) {
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
		{
			write(2, "Error files\n", 12);
			j = 0;
		}
		while (j != 0) {
			j = read(fd, taille, 29);
			write(1, taille, j);
		}
		j = 1;
		i++;
	}
	return ( 0);
}
