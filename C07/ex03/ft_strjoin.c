/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:28:06 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/22 12:28:08 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len ++;
	return (len);
}

int	ft_get_size(char **ptr, int size)
{
	int		i;
	int		sum_size;

	i = 0;
	sum_size = 0;
	while (i < size)
	{
		sum_size += ft_strlen(ptr[i]);
		i ++;
	}
	return (sum_size);
}

void	add_str(int total_size, char *ptr, char **strs, char sep)
{
	int		i;
	int		j;
	int		current_str_len;

	i = 0;
	while (i < total_size)
	{
		j = 0;
		current_str_len = ft_strlen(*strs);
		while (j < current_str_len)
		{
			ptr[i] = (*strs)[j];
			i ++;
			j ++;
		}
		strs ++;
		if (i != total_size - 1)
			ptr[i] = sep;
		i ++;
		if (i == total_size - 1)
			ptr[i] = '\0';
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	char	*ptr;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_size = ft_get_size(strs, size) + size;
	ptr = (char *)malloc(total_size * sizeof(char));
	if (!ptr)
		return (0);
	add_str(total_size, ptr, strs, *sep);
	return (ptr);
}
