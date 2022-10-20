/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 02:11:40 by mklimina          #+#    #+#             */
/*   Updated: 2022/10/05 13:44:28 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int		i;
	int		range;
	int		*output;

	if (min >= max)
		return (0);
	i = 0;
	range = max - min;
	output = malloc(sizeof(int) * range);
	if (!output)
		return (0);
	while (min < max)
	{
		output[i] = min;
		min++;
		i++;
	}
	return (output);
}
