/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:28:59 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/20 17:29:44 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		value;

	value = 0;
	while (value < 46340)
	{
		if (value * value == nb)
			return (value);
		value ++;
	}
	if (value * value == nb)
		return (value);
	else
		return (0);
}
