/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:12:16 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/21 11:12:17 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int		i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	ptr = (char *)malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}
