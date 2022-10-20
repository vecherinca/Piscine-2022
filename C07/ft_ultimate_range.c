/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 03:00:12 by mklimina          #+#    #+#             */
/*   Updated: 2022/10/05 14:00:33 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	rrange;
	int	i;

	i = 0;
	rrange = max - min;
	*range = malloc(sizeof(int) * rrange);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!range)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (rrange);
}
