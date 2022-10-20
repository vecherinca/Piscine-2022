/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:17:14 by mklimina          #+#    #+#             */
/*   Updated: 2022/10/06 15:50:41 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	len_str(int size, char **strs)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;
	char	*output;

	i = 0;
	j = 0;
	len = len_str(size, strs);
	len += (size - 1) * ft_strlen(sep) + 1;
	output = malloc(sizeof(char) * (len));
	if (!output)
		return (0);
	output[len] = '\0';
	output[0] = '\0';
	while (j < size)
	{
		ft_strcpy(output + i, strs[j]);
		i += ft_strlen(strs[j]);
		if (j < size - 1)
		{
			ft_strcpy(output + i, sep);
			i += ft_strlen(sep);
		}
		j++;
	}
	return (output);
}

int main()
{
	char *str[] = { "hello", "world", "!" };
	char *sep = " sep! ";

	printf("%s\n", ft_strjoin(0, str, sep));
}
