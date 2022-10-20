/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:09:30 by mklimina          #+#    #+#             */
/*   Updated: 2022/09/21 18:09:33 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i <= (size - 1))
	{
		j = i;
		while (j < (size - 1))
		{
			if (tab[i] > tab[j + 1])
			{
				temp = tab[i];
				tab[i] = tab[j + 1];
				tab[j + 1] = temp;
				j++;
			}
			else
				j++;
		}
		i++;
	}
}
