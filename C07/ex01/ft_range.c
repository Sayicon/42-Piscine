/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:27:06 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/21 11:27:07 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ptr;
	int		size;
	int		i;

	if (min >= max)
		return (0);
	size = max - min;
	ptr = (int *)malloc(4 * size);
	i = 0;
	while (i < size)
	{
		ptr[i] = min;
		i ++;
		min ++;
	}
	return (ptr);
}
