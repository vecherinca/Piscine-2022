/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 23:25:10 by mklimina          #+#    #+#             */
/*   Updated: 2022/09/20 21:29:24 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);

void	print(char a, char b, char c)
{
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ", ", 2);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = '1';
		while (b <= '8')
		{
			c = '2';
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					print(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
