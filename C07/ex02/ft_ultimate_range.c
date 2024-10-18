/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:12:45 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/21 17:12:49 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		index;
	int		*ptr;
	int		size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	ptr = (int *)malloc(sizeof(int *) * size);
	if (!ptr)
	{
		*range = 0;
		return (-1);
	}
	*range = ptr;
	index = 0;
	while (index < size)
	{
		ptr[index] = min + index;
		index++;
	}
	return (size);
}
