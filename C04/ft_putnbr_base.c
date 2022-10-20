/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:54:03 by mklimina          #+#    #+#             */
/*   Updated: 2022/10/01 23:45:48 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

long	check_doubles(char *base)
{
	long	i;
	long	j;
	long	len_base;
	long	final_score;

	len_base = ft_strlen(base);
	i = 0;
	final_score = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (j < len_base)
		{
			if (base[i] == base[j])
			{
				final_score++;
			}
			j++;
		}
		i++;
	}
	if (final_score == 0)
		return (1);
	else
		return (0);
}

long	check_base(char *base)
{
	long	i;
	long	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	if (!check_doubles(base))
		return (0);
	if (base[i] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_parse_nbr(long nbr, char *base, int base_len)
{
	long	rem;
	long	ptnb;

	if (nbr != 0)
	{
		rem = nbr % base_len;
		nbr = nbr / base_len;
		ptnb = base[rem];
		ft_parse_nbr(nbr, base, base_len);
		write(1, &ptnb, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	base_len;
	long	l_nbr;

	l_nbr = (long)nbr;
	if (!check_base(base))
		return ;
	base_len = ft_strlen(base);
	if (l_nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (l_nbr < 0)
	{
		l_nbr = l_nbr * -1;
		write(1, "-", 1);
	}
	if (l_nbr > 0)
	{
		ft_parse_nbr(l_nbr, base, base_len);
	}
}
