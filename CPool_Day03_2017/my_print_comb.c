/*
** EPITECH PROJECT, 2017
** my_print_comb
** File description:
** print comb
*/
#include <unistd.h>

int my_putchar(char c)
{
	write(1, &c, 1);
		return(0);
}
	
int	my_print(int a, int b, int c)
{
	
	my_putchar(a);
	my_putchar(b);
    	my_putchar(c);
        if (a == '7')
		return (0);
	my_putchar(',');
	my_putchar(' ');
}

int	my_print_comb(void)
{
	int	a = '0';
	int	b;
	int	c;
	
	while (a <='9'){
		b = a +1 ;
		while (b <='9'){
			c = b + 1 ;
			while ( c <='9'){
				my_print(a, b, c);
				c = c + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}
	return (0);
}

int main()
{
	my_print_comb();
	return(0);
}
