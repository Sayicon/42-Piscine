/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:32:32 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/15 16:33:06 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
	{
		src_len ++;
	}
	i = 0;
	while (src[i] && i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i ++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_len);
}
