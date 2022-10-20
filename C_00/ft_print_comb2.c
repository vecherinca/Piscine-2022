/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:16:08 by mklimina          #+#    #+#             */
/*   Updated: 2022/09/20 21:38:18 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void);

void	print(int c)
{
	int	a;
	int	b;

	a = c / 10 + 48;
	b = c % 10 + 48;
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			if (num1 == 98 && num2 == 99)
			{
				print(num1);
				write(1, " ", 1);
				print(num2);
				break ;
			}
			print(num1);
			write(1, " ", 1);
			print(num2);
			write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
