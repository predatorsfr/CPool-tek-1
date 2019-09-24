/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** put nbr
*/
int	my_put_nbr(int nb)
{
	if( nb == -2147483648){
     		my_put_nbr2();
		return (0);
	}
	int	i = 1;
	int	s = nb;
	
	if (nb < 0 ){
		my_putchar('-');
		nb = -nb;
	}
	while (s > 9){
		s = s/10;
		i = i*10;
	}
	while (i != 0){
		my_putchar(((nb / i)%10)+48);
		i = i/10;
	}
	return (0);
}

int	my_put_nbr2()
{
	my_putchar('-');
       	my_putchar('2');
	my_putchar('1');
	my_putchar('4');
	my_putchar('7');
	my_putchar('4');
	my_putchar('8');
	my_putchar('3');
	my_putchar('6');
	my_putchar('4');
	my_putchar('8');
	return (0);
}
